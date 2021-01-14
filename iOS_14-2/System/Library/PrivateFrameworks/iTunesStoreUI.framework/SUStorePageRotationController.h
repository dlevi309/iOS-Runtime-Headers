/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SURotationController.h>

@class SURotationController, SUViewController;

@interface SUStorePageRotationController : SURotationController {

	SURotationController* _childRotationController;
	SUViewController* _childViewController;

}
-(void)finishRotationFromInterfaceOrientation:(long long)arg1 ;
-(void)dealloc;
-(void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)prepareToRotateToInterfaceOrientation:(long long)arg1 ;
-(id)_childRotationController;
@end

