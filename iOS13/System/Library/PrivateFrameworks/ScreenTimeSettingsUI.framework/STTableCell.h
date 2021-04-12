/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSTableCell.h>

@class UILayoutGuide, NSMutableArray, UIViewController, NSArray;

@interface STTableCell : PSTableCell {

	UILayoutGuide* _contentLayoutGuide;
	NSMutableArray* _childViewControllers;
	UIViewController* _parentViewController;
	NSArray* _rtlContentLayoutGuideConstraints;

}

@property (nonatomic,copy) NSArray * rtlContentLayoutGuideConstraints;              //@synthesize rtlContentLayoutGuideConstraints=_rtlContentLayoutGuideConstraints - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * contentLayoutGuide;                  //@synthesize contentLayoutGuide=_contentLayoutGuide - In the implementation block
@property (readonly) NSMutableArray * childViewControllers;                         //@synthesize childViewControllers=_childViewControllers - In the implementation block
@property (__weak) UIViewController * parentViewController;                         //@synthesize parentViewController=_parentViewController - In the implementation block
-(void)layoutSubviews;
-(UIViewController *)parentViewController;
-(void)willMoveToSuperview:(id)arg1 ;
-(NSMutableArray *)childViewControllers;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(UILayoutGuide *)contentLayoutGuide;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(BOOL)canReload;
-(NSArray *)rtlContentLayoutGuideConstraints;
-(void)setRtlContentLayoutGuideConstraints:(NSArray *)arg1 ;
@end

