/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/HUCalendarScrubberDataSourceChangeObserver.h>

@protocol HUCalendarScrubberViewDelegate;
@class HUCalendarScrubberDataSource, NSString;

@interface HUCalendarScrubberViewController : UICollectionViewController <HUCalendarScrubberDataSourceChangeObserver> {

	HUCalendarScrubberDataSource* _dataSource;
	id<HUCalendarScrubberViewDelegate> _scrubberDelegate;
	long long _currentSection;
	/*^block*/id _scrollCompletionBlock;
	double _lastBoundsWidth;

}

@property (assign,nonatomic) long long currentSection;                                                //@synthesize currentSection=_currentSection - In the implementation block
@property (nonatomic,retain) HUCalendarScrubberDataSource * dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) id scrollCompletionBlock;                                                  //@synthesize scrollCompletionBlock=_scrollCompletionBlock - In the implementation block
@property (assign,nonatomic) double lastBoundsWidth;                                                  //@synthesize lastBoundsWidth=_lastBoundsWidth - In the implementation block
@property (assign,nonatomic,__weak) id<HUCalendarScrubberViewDelegate> scrubberDelegate;              //@synthesize scrubberDelegate=_scrubberDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long nextSection; 
@property (nonatomic,readonly) unsigned long long previousSection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(unsigned long long)previousSection;
-(id)initWithDataSource:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(HUCalendarScrubberDataSource *)dataSource;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<HUCalendarScrubberViewDelegate>)scrubberDelegate;
-(void)setScrollCompletionBlock:(id)arg1 ;
-(id)scrollCompletionBlock;
-(void)setScrubberDelegate:(id<HUCalendarScrubberViewDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(unsigned long long)nextSection;
-(void)setDataSource:(HUCalendarScrubberDataSource *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setCurrentSection:(long long)arg1 ;
-(double)lastBoundsWidth;
-(void)setLastBoundsWidth:(double)arg1 ;
-(long long)currentSection;
-(void)scrubberDataSourceDidReload:(id)arg1 ;
-(void)jumpToSection:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

