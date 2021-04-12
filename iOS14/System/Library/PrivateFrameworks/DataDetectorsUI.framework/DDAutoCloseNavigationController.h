/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <UIKitCore/UINavigationController.h>

@class DDFlightAction;

@interface DDAutoCloseNavigationController : UINavigationController {

	DDFlightAction* _target;

}

@property (__weak) DDFlightAction * target;              //@synthesize target=_target - In the implementation block
-(void)setTarget:(DDFlightAction *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(DDFlightAction *)target;
-(void)closePressed;
@end

