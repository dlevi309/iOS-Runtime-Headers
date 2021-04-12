/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlViewInteractionDelegate;
@class HUQuickControlIconViewProfile, HUIconView, UILabel, NSString;

@interface HUQuickControlIconView : UIView <HUQuickControlInteractiveView> {

	BOOL _userInteractionActive;
	HUQuickControlIconViewProfile* _profile;
	id<HUQuickControlViewInteractionDelegate> _interactionDelegate;
	unsigned long long _reachabilityState;
	HUIconView* _iconView;
	UILabel* _statusLabel;
	UILabel* _supplementaryLabel;
	id _viewValue;

}

@property (nonatomic,retain) HUIconView * iconView;                                                             //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                                             //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UILabel * supplementaryLabel;                                                      //@synthesize supplementaryLabel=_supplementaryLabel - In the implementation block
@property (nonatomic,retain) id viewValue;                                                                      //@synthesize viewValue=_viewValue - In the implementation block
@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                         //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (nonatomic,copy) HUQuickControlIconViewProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState;                                              //@synthesize reachabilityState=_reachabilityState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(void)setProfile:(HUQuickControlIconViewProfile *)arg1 ;
-(void)_updateLayout;
-(CGSize)intrinsicContentSize;
-(void)setInteractionDelegate:(id<HUQuickControlViewInteractionDelegate>)arg1 ;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;
-(id)initWithProfile:(id)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)layoutSubviews;
-(HUIconView *)iconView;
-(void)setIconView:(HUIconView *)arg1 ;
-(HUQuickControlIconViewProfile *)profile;
-(void)_updateUI;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(id)value;
-(BOOL)isUserInteractionActive;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(unsigned long long)reachabilityState;
-(void)_updateUIForReachabilityState:(unsigned long long)arg1 ;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(double)_iconAndLabelsHeight;
-(id)viewValue;
-(UILabel *)supplementaryLabel;
-(void)_updateLabelSizes;
-(CGRect)_getLabelsContainingRect;
-(void)_updateLabelFramesOrigins;
-(void)setSupplementaryLabel:(UILabel *)arg1 ;
-(void)setViewValue:(id)arg1 ;
@end

