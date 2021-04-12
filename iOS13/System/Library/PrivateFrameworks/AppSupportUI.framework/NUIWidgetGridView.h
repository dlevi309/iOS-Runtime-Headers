/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NUIWidgetGridViewDataSource, NUIWidgetGridViewDelegate;
@class NUIContainerGridView, NSArray;

@interface NUIWidgetGridView : UIView {

	NUIContainerGridView* _gridView;
	NSArray* _itemViews;
	CGSize _labelSizes[8];
	unsigned long long _currentLayout;
	id<NUIWidgetGridViewDataSource> _dataSource;
	id<NUIWidgetGridViewDelegate> _delegate;
	long long _imageStyle;
	long long _titleStyle;
	long long _subtitleStyle;
	double _centerAdjustmentAllowed;
	double _currentLabelOutset;

}

@property (nonatomic,readonly) double currentLabelOutset;                                    //@synthesize currentLabelOutset=_currentLabelOutset - In the implementation block
@property (assign,nonatomic,__weak) id<NUIWidgetGridViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<NUIWidgetGridViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long imageStyle;                                           //@synthesize imageStyle=_imageStyle - In the implementation block
@property (assign,nonatomic) long long titleStyle;                                           //@synthesize titleStyle=_titleStyle - In the implementation block
@property (assign,nonatomic) long long subtitleStyle;                                        //@synthesize subtitleStyle=_subtitleStyle - In the implementation block
@property (assign,nonatomic) double centerAdjustmentAllowed;                                 //@synthesize centerAdjustmentAllowed=_centerAdjustmentAllowed - In the implementation block
+(double)itemWidth;
+(unsigned long long)maxNumberOfItems;
-(id<NUIWidgetGridViewDelegate>)delegate;
-(void)setDelegate:(id<NUIWidgetGridViewDelegate>)arg1 ;
-(id<NUIWidgetGridViewDataSource>)dataSource;
-(void)setDataSource:(id<NUIWidgetGridViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(long long)currentLayout;
-(void)contentSizeDidChange;
-(unsigned long long)maxNumberOfItems;
-(unsigned long long)itemsPerRow;
-(long long)titleStyle;
-(long long)subtitleStyle;
-(long long)imageStyle;
-(CGSize)entitledExtraSpaceForCellAtIndex:(unsigned long long)arg1 ;
-(id)cellForGridViewItemAtIndex:(long long)arg1 ;
-(CGSize)borrowableSpaceForCellAtIndex:(unsigned long long)arg1 ;
-(double)centerAdjustmentAllowed;
-(double)labelMinSpacing;
-(double)horizontalMargin;
-(void)generateItems;
-(double)labelOutset;
-(void)_createGridViewIfNeeded;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 ;
-(void)setImageStyle:(long long)arg1 ;
-(void)setTitleStyle:(long long)arg1 ;
-(void)setSubtitleStyle:(long long)arg1 ;
-(void)setCenterAdjustmentAllowed:(double)arg1 ;
-(double)currentLabelOutset;
@end

