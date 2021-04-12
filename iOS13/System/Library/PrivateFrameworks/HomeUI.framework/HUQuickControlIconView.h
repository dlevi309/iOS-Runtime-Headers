/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState;                                              //@synthesize reachabilityState=_reachabilityState - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)value;
-(void)setValue:(id)arg1 ;
-(HUQuickControlIconViewProfile *)profile;
-(void)setProfile:(HUQuickControlIconViewProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setInteractionDelegate:(id<HUQuickControlViewInteractionDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)_updateLayout;
-(HUIconView *)iconView;
-(void)setIconView:(HUIconView *)arg1 ;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;
-(void)_updateUI;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UILabel *)statusLabel;
-(UILabel *)supplementaryLabel;
-(void)setSupplementaryLabel:(UILabel *)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(unsigned long long)reachabilityState;
-(void)_updateUIForReachabilityState:(unsigned long long)arg1 ;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(BOOL)isUserInteractionActive;
-(double)_iconAndLabelsHeight;
-(id)viewValue;
-(void)_updateLabelSizes;
-(CGRect)_getLabelsContainingRect;
-(void)_updateLabelFramesOrigins;
-(void)setViewValue:(id)arg1 ;
@end

