/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlInteractionCoordinator.h>
#import <libobjc.A.dylib/HUQuickControlViewInteractionDelegate.h>

@class NSString;

@interface HUQuickControlRingSliderInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlViewInteractionDelegate> {

	BOOL _userInteractionActive;
	BOOL _hasSecondaryValue;
	BOOL _firstTouchDown;
	CGSize _modelRangeValue;

}

@property (assign,nonatomic) CGSize modelRangeValue;                                                                             //@synthesize modelRangeValue=_modelRangeValue - In the implementation block
@property (nonatomic,readonly) HUQuickControlViewProfile*<HUQuickControlIncrementalConvertibleProfile> viewProfile; 
@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                                          //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (assign,getter=isFirstTouchDown,nonatomic) BOOL firstTouchDown;                                                        //@synthesize firstTouchDown=_firstTouchDown - In the implementation block
@property (nonatomic,readonly) UIView*<HUQuickControlInteractiveView> controlView; 
@property (assign,nonatomic) BOOL hasSecondaryValue;                                                                             //@synthesize hasSecondaryValue=_hasSecondaryValue - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlRingSliderInteractionCoordinatorDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(HUQuickControlViewProfile*<HUQuickControlIncrementalConvertibleProfile>)viewProfile;
-(void)controlView:(id)arg1 interactionStateDidChange:(BOOL)arg2 forFirstTouch:(BOOL)arg3 ;
-(void)controlView:(id)arg1 valueDidChange:(id)arg2 ;
-(id)initWithControlView:(id)arg1 delegate:(id)arg2 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(BOOL)isUserInteractionActive;
-(void)setHasSecondaryValue:(BOOL)arg1 ;
-(BOOL)hasSecondaryValue;
-(CGSize)modelRangeValue;
-(void)setModelRangeValue:(CGSize)arg1 ;
-(void)setFirstTouchDown:(BOOL)arg1 ;
-(void)_updateModelValue:(CGSize)arg1 roundValue:(BOOL)arg2 notifyDelegate:(BOOL)arg3 ;
-(void)_updateControlViewValueOfType:(unsigned long long)arg1 withValue:(double)arg2 ;
-(BOOL)isFirstTouchDown;
@end

