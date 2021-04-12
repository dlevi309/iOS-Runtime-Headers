/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlViewInteractionDelegate;
@class HUQuickControlViewProfile, MTMaterialView, NSString;

@interface _HUQuickControlControllableHostView : UIView <HUQuickControlInteractiveView> {

	BOOL _userInteractionActive;
	HUQuickControlViewProfile* _profile;
	id<HUQuickControlViewInteractionDelegate> _interactionDelegate;
	id _value;
	MTMaterialView* _backgroundView;

}

@property (nonatomic,retain) id value;                                                                          //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) HUQuickControlViewProfile * profile;                                                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) MTMaterialView * backgroundView;                                                   //@synthesize backgroundView=_backgroundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState; 
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (getter=isUserInteractionActive,nonatomic,readonly) BOOL userInteractionActive;                       //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
-(id)value;
-(void)setValue:(id)arg1 ;
-(HUQuickControlViewProfile *)profile;
-(void)setProfile:(HUQuickControlViewProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setInteractionDelegate:(id<HUQuickControlViewInteractionDelegate>)arg1 ;
-(MTMaterialView *)backgroundView;
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(BOOL)isUserInteractionActive;
@end

