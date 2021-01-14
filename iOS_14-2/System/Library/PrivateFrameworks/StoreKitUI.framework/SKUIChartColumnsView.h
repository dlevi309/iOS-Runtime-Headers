/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SKUIFlexibleSegmentedControlDelegate.h>

@class NSArray, UIVisualEffectView, UIView, SKUIFlexibleSegmentedControl, NSString;

@interface SKUIChartColumnsView : UIView <SKUIFlexibleSegmentedControlDelegate> {

	NSArray* _allViewControllers;
	long long _animatingToNumberOfVisibleColumns;
	UIVisualEffectView* _effectView;
	UIView* _borderView0;
	UIView* _borderView1;
	long long _columnChangeAnimationCount;
	NSArray* _columnViews;
	UIEdgeInsets _contentInset;
	UIView* _headerBackgroundView;
	UIView* _headerBackgroundBottomBorder;
	NSArray* _headerViews;
	long long _numberOfVisibleColumns;
	SKUIFlexibleSegmentedControl* _segmentedControl;

}

@property (nonatomic,readonly) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,copy) NSArray * chartViewControllers;                   //@synthesize allViewControllers=_allViewControllers - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                      //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) long long numberOfVisibleColumns;               //@synthesize numberOfVisibleColumns=_numberOfVisibleColumns - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIVisualEffectView *)effectView;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)layoutSubviews;
-(void)dealloc;
-(void)segmentedControl:(id)arg1 didSelectSegmentIndex:(long long)arg2 ;
-(void)setChartViewControllers:(NSArray *)arg1 ;
-(void)setNumberOfVisibleColumns:(long long)arg1 ;
-(void)beginColumnChangeAnimationToNumberOfVisibleColumns:(long long)arg1 ;
-(void)endColumnChangeAnimation;
-(void)_reloadColumnViews;
-(long long)numberOfVisibleColumns;
-(void)_headerViewAction:(id)arg1 ;
-(id)_headerViewWithViewControllers:(id)arg1 ;
-(NSArray *)chartViewControllers;
@end

