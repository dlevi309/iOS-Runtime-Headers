/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)contentSizeDidChange;
-(id<NUIWidgetGridViewDelegate>)delegate;
-(id<NUIWidgetGridViewDataSource>)dataSource;
-(long long)imageStyle;
-(void)setDelegate:(id<NUIWidgetGridViewDelegate>)arg1 ;
-(void)setDataSource:(id<NUIWidgetGridViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(long long)titleStyle;
-(long long)subtitleStyle;
-(CGSize)entitledExtraSpaceForCellAtIndex:(unsigned long long)arg1 ;
-(id)cellForGridViewItemAtIndex:(long long)arg1 ;
-(CGSize)borrowableSpaceForCellAtIndex:(unsigned long long)arg1 ;
-(double)centerAdjustmentAllowed;
-(void)setImageStyle:(long long)arg1 ;
-(void)setTitleStyle:(long long)arg1 ;
-(void)setSubtitleStyle:(long long)arg1 ;
-(void)setCenterAdjustmentAllowed:(double)arg1 ;
-(double)currentLabelOutset;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 ;
@end

