/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)willMoveToSuperview:(id)arg1 ;
-(UIViewController *)parentViewController;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(UILayoutGuide *)contentLayoutGuide;
-(void)layoutSubviews;
-(BOOL)canReload;
-(NSMutableArray *)childViewControllers;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(NSArray *)rtlContentLayoutGuideConstraints;
-(void)setRtlContentLayoutGuideConstraints:(NSArray *)arg1 ;
@end

