/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<SKUIFlexibleSegmentedControlDelegate>)delegate;
-(void)setDelegate:(id<SKUIFlexibleSegmentedControlDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(long long)selectedSegmentIndex;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(void)setDesiredSegmentWidth:(double)arg1 ;
-(NSArray *)itemTitles;
-(void)cancelMoreList;
-(long long)moreListIndex;
-(CGRect)frameForSegmentWithIndex:(long long)arg1 ;
-(void)setItemTitles:(NSArray *)arg1 ;
-(NSString *)moreListTitle;
-(void)setMoreListTitle:(NSString *)arg1 ;
-(long long)maximumNumberOfVisibleItems;
-(void)setMaximumNumberOfVisibleItems:(long long)arg1 ;
-(void)setSizesSegmentsToFitWidth:(BOOL)arg1 ;
-(double)desiredSegmentWidth;
-(void)_valueChangeAction:(id)arg1 ;
-(void)_configureSegmentedControl:(id)arg1 withTitles:(id)arg2 boundingSize:(CGSize)arg3 ;
-(void)_setTitles:(id)arg1 forSegmentedControl:(id)arg2 ;
-(BOOL)sizesSegmentsToFitWidth;
@end

