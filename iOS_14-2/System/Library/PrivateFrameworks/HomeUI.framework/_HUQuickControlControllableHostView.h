/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (getter=isUserInteractionActive,nonatomic,readonly) BOOL userInteractionActive;                       //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(HUQuickControlViewProfile *)arg1 ;
-(void)setInteractionDelegate:(id<HUQuickControlViewInteractionDelegate>)arg1 ;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;
-(id)initWithProfile:(id)arg1 ;
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(MTMaterialView *)backgroundView;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 ;
-(HUQuickControlViewProfile *)profile;
-(id)value;
-(BOOL)isUserInteractionActive;
@end

