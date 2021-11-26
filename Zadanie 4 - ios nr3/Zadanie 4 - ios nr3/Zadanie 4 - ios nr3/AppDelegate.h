//
//  AppDelegate.h
//  Zadanie 4 - ios nr3
//
//  Created by student on 16/11/2021.
//  Copyright © 2021 PB. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

