/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UIFont, NSNumberFormatter, UICollectionView, UICollectionViewDiffableDataSource, _UIDatePickerCalendarTimeWheelDisplayModeDriver, _UIDatePickerCalendarTimeSoundDriver, NSString;

@interface _UIDatePickerCalendarTimeWheel : UIControl <UICollectionViewDelegate> {

	long long _expectedRawValue;
	long long _interval;
	long long _selectedValue;
	UIFont* _font;
	NSNumberFormatter* _formatter;
	UICollectionView* _collectionView;
	UICollectionViewDiffableDataSource* _dataSource;
	_UIDatePickerCalendarTimeWheelDisplayModeDriver* _displayModeDriver;
	_UIDatePickerCalendarTimeSoundDriver* _soundDriver;

}

@property (nonatomic,readonly) NSNumberFormatter * formatter;                                                    //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UICollectionViewDiffableDataSource * dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeWheelDisplayModeDriver * displayModeDriver;              //@synthesize displayModeDriver=_displayModeDriver - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeSoundDriver * soundDriver;                               //@synthesize soundDriver=_soundDriver - In the implementation block
@property (nonatomic,readonly) long long interval;                                                               //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode; 
@property (assign,nonatomic) long long selectedValue;                                                            //@synthesize selectedValue=_selectedValue - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                                      //@synthesize font=_font - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(NSNumberFormatter *)formatter;
-(void)_updateDataSource;
-(long long)interval;
-(void)setFont:(UIFont *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(UICollectionViewDiffableDataSource *)dataSource;
-(unsigned long long)displayMode;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(long long)selectedValue;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(id)initWithInterval:(long long)arg1 formatter:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setSelectedValue:(long long)arg1 ;
-(_UIDatePickerCalendarTimeSoundDriver *)soundDriver;
-(void)_updatePaging;
-(UIFont *)font;
-(void)_updateCellForDisplayMode:(id)arg1 ;
-(void)_createHierarchy;
-(void)_createDataSource;
-(void)_updateSelection;
-(void)_performWithoutChangingSelection:(/*^block*/id)arg1 ;
-(id)_createLayout;
-(void)_updateSelectedValue:(long long)arg1 fromExtern:(BOOL)arg2 ;
-(id)_itemAtCenter;
-(_UIDatePickerCalendarTimeWheelDisplayModeDriver *)displayModeDriver;
-(void)_setSelectedRawValue:(long long)arg1 notify:(BOOL)arg2 ;
-(id)_itemForContentOffset:(CGPoint)arg1 ;
-(CGPoint)_contentOffsetForProposedContentOffset:(CGPoint)arg1 velocity:(CGPoint)arg2 inScrollView:(id)arg3 ;
-(BOOL)_updateContentOffset:(id)arg1 ;
@end

