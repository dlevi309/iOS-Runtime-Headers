/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, AVPresentationContainerViewLayer, AVPresentationContainerViewAppearanceProxy;

@interface AVPresentationContainerView : UIView {

	BOOL _counterRotatingContentView;
	BOOL _wantsAppearanceConfigValues;
	BOOL _beingPresented;
	BOOL _beingDismissed;
	BOOL _willBeginOrientationChange;
	UIView* _presentationContainerContentView;
	long long _fromOrientation;
	long long _toOrientation;

}

@property (nonatomic,readonly) AVPresentationContainerViewLayer * layer; 
@property (assign,getter=isCounterRotatingContentView,nonatomic) BOOL counterRotatingContentView;              //@synthesize counterRotatingContentView=_counterRotatingContentView - In the implementation block
@property (assign,getter=isBeingPresented,nonatomic) BOOL beingPresented;                                      //@synthesize beingPresented=_beingPresented - In the implementation block
@property (assign,getter=isBeingDismissed,nonatomic) BOOL beingDismissed;                                      //@synthesize beingDismissed=_beingDismissed - In the implementation block
@property (assign,nonatomic) long long fromOrientation;                                                        //@synthesize fromOrientation=_fromOrientation - In the implementation block
@property (assign,nonatomic) long long toOrientation;                                                          //@synthesize toOrientation=_toOrientation - In the implementation block
@property (assign,nonatomic) BOOL willBeginOrientationChange;                                                  //@synthesize willBeginOrientationChange=_willBeginOrientationChange - In the implementation block
@property (assign,nonatomic,__weak) UIView * presentationContainerContentView;                                 //@synthesize presentationContainerContentView=_presentationContainerContentView - In the implementation block
@property (nonatomic,readonly) AVPresentationContainerViewAppearanceProxy * appearanceProxy; 
@property (assign,nonatomic) BOOL wantsAppearanceConfigValues;                                                 //@synthesize wantsAppearanceConfigValues=_wantsAppearanceConfigValues - In the implementation block
+(Class)layerClass;
-(double)_continuousCornerRadius;
-(long long)fromOrientation;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_cornerRadius;
-(long long)toOrientation;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFromOrientation:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setToOrientation:(long long)arg1 ;
-(AVPresentationContainerViewAppearanceProxy *)appearanceProxy;
-(void)setWantsAppearanceConfigValues:(BOOL)arg1 ;
-(BOOL)wantsAppearanceConfigValues;
-(void)willBeginAdjustingOrientation;
-(UIEdgeInsets)avkit_overrideLayoutMarginsForInterfaceOrientation:(long long)arg1 ;
-(void)didStopTransition;
-(void)setBeingPresented:(BOOL)arg1 ;
-(UIEdgeInsets)avkit_overrideLayoutMarginsForCounterRotation;
-(BOOL)avkit_isVideoGravityFrozen;
-(BOOL)avkit_isCounterRotatedForTransition;
-(BOOL)avkit_isBeingDismissed;
-(BOOL)avkit_isBeingPresented;
-(void)willStartPresentationTransitionFromInterfaceOrientation:(long long)arg1 toOrientation:(long long)arg2 needsCounterRotation:(BOOL)arg3 ;
-(void)willStartDismissalTransitionFromInterfaceOrientation:(long long)arg1 toOrientation:(long long)arg2 needsCounterRotation:(BOOL)arg3 ;
-(double)_radiansForCounterRotation;
-(BOOL)isCounterRotatingContentView;
-(void)setCounterRotatingContentView:(BOOL)arg1 ;
-(UIView *)presentationContainerContentView;
-(void)setPresentationContainerContentView:(UIView *)arg1 ;
-(void)setBeingDismissed:(BOOL)arg1 ;
-(BOOL)willBeginOrientationChange;
-(void)setWillBeginOrientationChange:(BOOL)arg1 ;
-(BOOL)isBeingPresented;
-(BOOL)isBeingDismissed;
-(CGAffineTransform)_contentTransform;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
@end

