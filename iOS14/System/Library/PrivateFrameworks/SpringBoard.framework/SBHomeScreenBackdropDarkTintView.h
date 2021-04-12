/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)beginRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)endRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)endRequiringBackdropViewForReason:(id)arg1 ;
-(void)beginRequiringBackdropViewForReason:(id)arg1 ;
-(void)_updateDarkTintViewHidden;
@end

