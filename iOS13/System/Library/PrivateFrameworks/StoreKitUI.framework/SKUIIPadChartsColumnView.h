/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIViewController;

@interface SKUIIPadChartsColumnView : UIView {

	UIEdgeInsets _contentInset;
	NSArray* _contentViewControllers;
	long long _selectedViewControllerIndex;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                                //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,copy) NSArray * contentViewControllers;                           //@synthesize contentViewControllers=_contentViewControllers - In the implementation block
@property (nonatomic,readonly) UIViewController * selectedViewController; 
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(UIViewController *)selectedViewController;
-(void)setSelectedViewControllerIndex:(long long)arg1 ;
-(void)setContentViewControllers:(NSArray *)arg1 ;
-(void)_addSelectedViewController;
-(NSArray *)contentViewControllers;
@end

