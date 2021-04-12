/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol PKMonthDayCollectionViewControllerDelegate;
@class NSNumberFormatter, NSCalendar, NSTimeZone, NSString;

@interface PKMonthDayCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {

	NSNumberFormatter* _dayFormatter;
	NSCalendar* _calendar;
	long long _dayNumber;
	long long _minimumDayNumber;
	long long _maximumDayNumber;
	id<PKMonthDayCollectionViewControllerDelegate> _dayDelegate;
	NSTimeZone* _timeZone;

}

@property (assign,nonatomic) long long dayNumber;                                                            //@synthesize dayNumber=_dayNumber - In the implementation block
@property (assign,nonatomic) long long minimumDayNumber;                                                     //@synthesize minimumDayNumber=_minimumDayNumber - In the implementation block
@property (assign,nonatomic) long long maximumDayNumber;                                                     //@synthesize maximumDayNumber=_maximumDayNumber - In the implementation block
@property (assign,nonatomic,__weak) id<PKMonthDayCollectionViewControllerDelegate> dayDelegate;              //@synthesize dayDelegate=_dayDelegate - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                                                            //@synthesize timeZone=_timeZone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(id)selectedDate;
-(void)setDayNumber:(long long)arg1 ;
-(long long)dayNumber;
-(id)initWithDayDelegate:(id)arg1 timeZone:(id)arg2 ;
-(void)setMinimumDayNumber:(long long)arg1 ;
-(id)_indexPathForDayNumber:(long long)arg1 ;
-(long long)minimumDayNumber;
-(long long)maximumDayNumber;
-(void)setMaximumDayNumber:(long long)arg1 ;
-(id<PKMonthDayCollectionViewControllerDelegate>)dayDelegate;
-(void)setDayDelegate:(id<PKMonthDayCollectionViewControllerDelegate>)arg1 ;
@end

