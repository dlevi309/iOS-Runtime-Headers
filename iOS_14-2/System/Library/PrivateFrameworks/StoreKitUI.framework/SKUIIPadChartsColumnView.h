/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)layoutSubviews;
-(UIViewController *)selectedViewController;
-(void)setContentViewControllers:(NSArray *)arg1 ;
-(NSArray *)contentViewControllers;
-(void)setSelectedViewControllerIndex:(long long)arg1 ;
-(void)_addSelectedViewController;
@end

