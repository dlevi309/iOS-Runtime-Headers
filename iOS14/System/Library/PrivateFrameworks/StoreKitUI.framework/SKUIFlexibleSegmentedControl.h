/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUIFlexibleSegmentedControlDelegate;
@class NSArray, NSString, UISegmentedControl;

@interface SKUIFlexibleSegmentedControl : UIView {

	id<SKUIFlexibleSegmentedControlDelegate> _delegate;
	double _desiredSegmentWidth;
	BOOL _isMoreListSelected;
	NSArray* _itemTitles;
	long long _maximumNumberOfVisibleItems;
	NSString* _moreListTitle;
	long long _previousSelectedSegmentIndex;
	UISegmentedControl* _segmentedControl;
	long long _selectedSegmentIndex;
	BOOL _sizesSegmentsToFitWidth;

}

@property (assign,nonatomic) BOOL sizesSegmentsToFitWidth;                                          //@synthesize sizesSegmentsToFitWidth=_sizesSegmentsToFitWidth - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIFlexibleSegmentedControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double desiredSegmentWidth;                                            //@synthesize desiredSegmentWidth=_desiredSegmentWidth - In the implementation block
@property (nonatomic,copy) NSArray * itemTitles;                                                    //@synthesize itemTitles=_itemTitles - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfVisibleItems;                                 //@synthesize maximumNumberOfVisibleItems=_maximumNumberOfVisibleItems - In the implementation block
@property (nonatomic,readonly) long long moreListIndex; 
@property (nonatomic,copy) NSString * moreListTitle;                                                //@synthesize moreListTitle=_moreListTitle - In the implementation block
@property (assign,nonatomic) long long selectedSegmentIndex;                                        //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SKUIFlexibleSegmentedControlDelegate>)delegate;
-(void)setDelegate:(id<SKUIFlexibleSegmentedControlDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(long long)maximumNumberOfVisibleItems;
-(long long)selectedSegmentIndex;
-(void)dealloc;
-(void)setDesiredSegmentWidth:(double)arg1 ;
-(NSArray *)itemTitles;
-(void)cancelMoreList;
-(long long)moreListIndex;
-(CGRect)frameForSegmentWithIndex:(long long)arg1 ;
-(void)setItemTitles:(NSArray *)arg1 ;
-(NSString *)moreListTitle;
-(void)setMoreListTitle:(NSString *)arg1 ;
-(void)setMaximumNumberOfVisibleItems:(long long)arg1 ;
-(void)setSizesSegmentsToFitWidth:(BOOL)arg1 ;
-(double)desiredSegmentWidth;
-(void)_valueChangeAction:(id)arg1 ;
-(void)_configureSegmentedControl:(id)arg1 withTitles:(id)arg2 boundingSize:(CGSize)arg3 ;
-(void)_setTitles:(id)arg1 forSegmentedControl:(id)arg2 ;
-(BOOL)sizesSegmentsToFitWidth;
@end

