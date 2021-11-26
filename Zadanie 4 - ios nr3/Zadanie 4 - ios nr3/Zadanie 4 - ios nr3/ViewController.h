//
//  ViewController.h
//  Zadanie 4 - ios nr3
//
//  Created by student on 16/11/2021.
//  Copyright © 2021 PB. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
-(void)motionEnded:(UIEventSubtype)motion withEvent:(UIEvent*)event;
-(BOOL)canBecomeFirstResponder;
-(IBAction)showShakeDetectedAlert;
@property (weak,nonatomic) IBOutlet UILabel *gestureLabel;
- (IBAction) tapGesture: (UITapGestureRecognizer *) sender;
- (IBAction) pinchGesture: (UIPinchGestureRecognizer *) sender;
- (IBAction) swipeGesture: (UISwipeGestureRecognizer *) sender;
- (IBAction) longPressGesture: (UILongPressGestureRecognizer *) sender;

@end

