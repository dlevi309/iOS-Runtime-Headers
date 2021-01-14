/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class BKUIPearlCrossHairsRenderingView, UIImageView;

@interface BKUIPearlCrossHairsView : UIView {

	BKUIPearlCrossHairsRenderingView* _renderingView;
	UIImageView* _arrowView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setPitch:(double)arg1 yaw:(double)arg2 animated:(BOOL)arg3 ;
-(double)angleFromDirection:(unsigned long long)arg1 ;
-(void)nudgeCrossHairsAtAngle:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPitch:(double)arg1 yaw:(double)arg2 ;
-(void)nudgeInDirection:(unsigned long long)arg1 smallNudgePeak:(/*^block*/id)arg2 largeNudgePeak:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
@end

