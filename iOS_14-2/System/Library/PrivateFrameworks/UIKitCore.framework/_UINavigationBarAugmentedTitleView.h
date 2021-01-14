/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UINavigationBarAugmentedTitleView <NSObject>
@property (nonatomic,readonly) BOOL _underlayNavigationBarContent; 
@property (nonatomic,readonly) double _navigationBarContentHeight; 
@property (nonatomic,readonly) double _navigationBarBackButtonMaximumWidth; 
@property (nonatomic,readonly) BOOL _hideNavigationBarBackButton; 
@property (nonatomic,readonly) BOOL _hideNavigationBarLeadingBarButtons; 
@property (nonatomic,readonly) BOOL _hideNavigationBarStandardTitle; 
@property (nonatomic,readonly) BOOL _hideNavigationBarTrailingBarButtons; 
@property (nonatomic,readonly) double _navigationBarBackButtonAlpha; 
@property (nonatomic,readonly) double _navigationBarLeadingBarButtonsAlpha; 
@property (nonatomic,readonly) double _navigationBarTrailingBarButtonsAlpha; 
@property (nonatomic,readonly) long long _preferredAlignment; 
@required
-(double)_navigationBarLeadingBarButtonsAlpha;
-(void)_navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2;
-(BOOL)_hideNavigationBarLeadingBarButtons;
-(BOOL)_underlayNavigationBarContent;
-(void)_navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2;
-(void)_contentDidChange;
-(void)_performNavigationBarTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2;
-(double)_navigationBarContentHeight;
-(long long)_preferredContentSizeForSize:(long long)arg1;
-(BOOL)_hideNavigationBarTrailingBarButtons;
-(BOOL)_wantsTwoPartTransition;
-(BOOL)_hideNavigationBarStandardTitle;
-(double)_navigationBarBackButtonAlpha;
-(id)_traitCollectionOverridesForNavigationBarTraitCollection:(id)arg1;
-(double)_navigationBarTrailingBarButtonsAlpha;
-(long long)_preferredAlignment;
-(void)_navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2;
-(double)_navigationBarBackButtonMaximumWidth;
-(void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3;
-(BOOL)_hideNavigationBarBackButton;

@end

