/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UILabel, UIStepper, UISlider, UICollectionView, NSArray, NSString;

@interface AKFontSizePicker : UIControl <UICollectionViewDataSource, UICollectionViewDelegate> {

	double _value;
	/*^block*/id _willBeginTrackingUpdates;
	/*^block*/id _didEndTrackingUpdates;
	long long _style;
	UILabel* _label;
	UIStepper* _stepper;
	UISlider* _slider;
	UICollectionView* _sizeList;
	NSArray* _sizeListValues;

}

@property (assign,nonatomic) long long style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIStepper * stepper;                      //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,retain) UISlider * slider;                        //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) UICollectionView * sizeList;              //@synthesize sizeList=_sizeList - In the implementation block
@property (nonatomic,retain) NSArray * sizeListValues;                 //@synthesize sizeListValues=_sizeListValues - In the implementation block
@property (assign,nonatomic) double value;                             //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) id willBeginTrackingUpdates;                //@synthesize willBeginTrackingUpdates=_willBeginTrackingUpdates - In the implementation block
@property (nonatomic,copy) id didEndTrackingUpdates;                   //@synthesize didEndTrackingUpdates=_didEndTrackingUpdates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)value;
-(void)setValue:(double)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(UISlider *)slider;
-(void)setSlider:(UISlider *)arg1 ;
-(void)_handleValueChanged:(id)arg1 ;
-(UIStepper *)stepper;
-(void)setStepper:(UIStepper *)arg1 ;
-(CGSize)_itemSizeInContainer;
-(UICollectionView *)sizeList;
-(void)setSizeList:(UICollectionView *)arg1 ;
-(void)_sliderTouchUp:(id)arg1 ;
-(void)_sliderTouchDown:(id)arg1 ;
-(void)_decreaseSize:(id)arg1 ;
-(void)_increaseSize:(id)arg1 ;
-(void)_selectSizeInList;
-(id)willBeginTrackingUpdates;
-(id)didEndTrackingUpdates;
-(NSArray *)sizeListValues;
-(void)setWillBeginTrackingUpdates:(id)arg1 ;
-(void)setDidEndTrackingUpdates:(id)arg1 ;
-(void)setSizeListValues:(NSArray *)arg1 ;
@end

