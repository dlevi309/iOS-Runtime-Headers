/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3;
-(long long)_preferredContentSizeForSize:(long long)arg1;
-(void)_contentDidChange;
-(BOOL)_wantsTwoPartTransition;
-(void)_navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2;
-(void)_performNavigationBarTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2;
-(void)_navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2;
-(void)_navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2;
-(BOOL)_underlayNavigationBarContent;
-(double)_navigationBarContentHeight;
-(double)_navigationBarBackButtonMaximumWidth;
-(BOOL)_hideNavigationBarBackButton;
-(BOOL)_hideNavigationBarLeadingBarButtons;
-(BOOL)_hideNavigationBarStandardTitle;
-(BOOL)_hideNavigationBarTrailingBarButtons;
-(double)_navigationBarBackButtonAlpha;
-(double)_navigationBarLeadingBarButtonsAlpha;
-(double)_navigationBarTrailingBarButtonsAlpha;
-(long long)_preferredAlignment;

@end

