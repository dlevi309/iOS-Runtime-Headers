/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBHomeScreenBackdropViewBase.h>

@class UIView;

@interface SBHomeScreenBackdropDarkTintView : SBHomeScreenBackdropViewBase {

	UIView* _darkTintView;

}
-(BOOL)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginRequiringBackdropViewForReason:(id)arg1 ;
-(void)beginRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)endRequiringBackdropViewForReason:(id)arg1 ;
-(void)endRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)_updateDarkTintViewHidden;
@end

