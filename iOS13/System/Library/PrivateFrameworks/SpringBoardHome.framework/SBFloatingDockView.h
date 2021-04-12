/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class SBDockIconListView, SBFloatingDockPlatterView, UIView;

@interface SBFloatingDockView : SBFTouchPassThroughView {

	SBDockIconListView* _userIconListView;
	SBDockIconListView* _recentIconListView;
	double _platterVerticalMargin;
	unsigned long long _minimumUserIconSpaces;
	SBFloatingDockPlatterView* _mainPlatterView;
	UIView* _dividerView;
	UIView* _touchReceivingView;
	double _iconContentScale;
	UIEdgeInsets _paddingEdgeInsets;

}

@property (nonatomic,retain) SBFloatingDockPlatterView * mainPlatterView;              //@synthesize mainPlatterView=_mainPlatterView - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                                     //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,retain) UIView * touchReceivingView;                              //@synthesize touchReceivingView=_touchReceivingView - In the implementation block
@property (assign,nonatomic) double iconContentScale;                                  //@synthesize iconContentScale=_iconContentScale - In the implementation block
@property (nonatomic,readonly) double maximumDockContinuousCornerRadius; 
@property (nonatomic,readonly) CGSize maximumIconSize; 
@property (nonatomic,readonly) double maximumPlatterHeight; 
@property (nonatomic,readonly) double maximumInterIconSpacing; 
@property (nonatomic,retain) SBDockIconListView * userIconListView;                    //@synthesize userIconListView=_userIconListView - In the implementation block
@property (nonatomic,retain) SBDockIconListView * recentIconListView;                  //@synthesize recentIconListView=_recentIconListView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView; 
@property (assign,nonatomic) UIEdgeInsets paddingEdgeInsets;                           //@synthesize paddingEdgeInsets=_paddingEdgeInsets - In the implementation block
@property (assign,nonatomic) double platterVerticalMargin;                             //@synthesize platterVerticalMargin=_platterVerticalMargin - In the implementation block
@property (assign,nonatomic) unsigned long long minimumUserIconSpaces;                 //@synthesize minimumUserIconSpaces=_minimumUserIconSpaces - In the implementation block
@property (nonatomic,readonly) double contentHeight; 
@property (nonatomic,readonly) double interIconSpacing; 
@property (nonatomic,readonly) CGRect platterFrame; 
@property (assign,nonatomic) BOOL hasPlatterShadow; 
@property (nonatomic,readonly) UIEdgeInsets platterShadowOutsets; 
+(double)_referenceInterIconSpacingWithIconImageInfo:(SBIconImageInfo)arg1 ;
+(double)maximumInterIconSpacingWithIconImageInfo:(SBIconImageInfo)arg1 ;
+(double)maximumDockContinuousCornerRadiusWithIconImageInfo:(SBIconImageInfo)arg1 ;
+(CGSize)maximumIconSizeWithIconImageInfo:(SBIconImageInfo)arg1 ;
+(double)maximumPlatterHeightWithIconImageInfo:(SBIconImageInfo)arg1 ;
+(double)contentHeightForBounds:(CGRect)arg1 mainPlatterViewFrame:(CGRect)arg2 ;
+(void)getMetrics:(SCD_Struct_SB19*)arg1 forBounds:(CGRect)arg2 numberOfUserIcons:(unsigned long long)arg3 numberOfRecentIcons:(unsigned long long)arg4 paddingEdgeInsets:(UIEdgeInsets)arg5 referenceIconSize:(CGSize)arg6 maximumIconSize:(CGSize)arg7 referenceInterIconSpacing:(double)arg8 maximumInterIconSpacing:(double)arg9 platterVerticalMargin:(double)arg10 ;
+(double)minimumPlatterMargin;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)bounce;
-(double)contentHeight;
-(double)iconContentScale;
-(void)setIconContentScale:(double)arg1 ;
-(void)setRecentIconListView:(SBDockIconListView *)arg1 ;
-(SBDockIconListView *)userIconListView;
-(SBDockIconListView *)recentIconListView;
-(double)contentHeightForBounds:(CGRect)arg1 ;
-(double)interIconSpacing;
-(double)platterVerticalMargin;
-(void)setPlatterVerticalMargin:(double)arg1 ;
-(UIEdgeInsets)platterShadowOutsetsForBounds:(CGRect)arg1 ;
-(double)maximumDockContinuousCornerRadius;
-(CGRect)platterFrame;
-(void)setPaddingEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setUserIconListView:(SBDockIconListView *)arg1 ;
-(void)setHasPlatterShadow:(BOOL)arg1 ;
-(void)setMinimumUserIconSpaces:(unsigned long long)arg1 ;
-(SBIconImageInfo)_iconImageInfo;
-(void)updateDividerVisualStyling;
-(SBFloatingDockPlatterView *)mainPlatterView;
-(double)maximumPlatterHeight;
-(void)getMetrics:(SCD_Struct_SB19*)arg1 forBounds:(CGRect)arg2 ;
-(CGSize)_referenceIconSize;
-(CGSize)maximumIconSize;
-(double)_referenceInterIconSpacing;
-(double)maximumInterIconSpacing;
-(unsigned long long)minimumUserIconSpaces;
-(UIView *)dividerView;
-(BOOL)hasPlatterShadow;
-(UIEdgeInsets)platterShadowOutsets;
-(double)iconContentScaleForNumberOfUserIcons:(unsigned long long)arg1 ;
-(UIEdgeInsets)paddingEdgeInsets;
-(void)setMainPlatterView:(SBFloatingDockPlatterView *)arg1 ;
-(void)setDividerView:(UIView *)arg1 ;
-(UIView *)touchReceivingView;
-(void)setTouchReceivingView:(UIView *)arg1 ;
@end

