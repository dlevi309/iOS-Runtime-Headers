/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol NUFeedDataProvider, NUFeedTriggerProvider;
@class UICollectionView, NSString;

@interface NUFeedViewController : UIViewController <UICollectionViewDataSource> {

	BOOL _viewHasAppearedOnce;
	id<NUFeedDataProvider> _feedDataProvider;
	id<NUFeedTriggerProvider> _feedTriggerProvider;
	UICollectionView* _collectionView;
	CGRect _laidOutBounds;

}

@property (nonatomic,readonly) id<NUFeedDataProvider> feedDataProvider;                    //@synthesize feedDataProvider=_feedDataProvider - In the implementation block
@property (nonatomic,readonly) id<NUFeedTriggerProvider> feedTriggerProvider;              //@synthesize feedTriggerProvider=_feedTriggerProvider - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL viewHasAppearedOnce;                                     //@synthesize viewHasAppearedOnce=_viewHasAppearedOnce - In the implementation block
@property (assign,nonatomic) CGRect laidOutBounds;                                         //@synthesize laidOutBounds=_laidOutBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)viewHasAppearedOnce;
-(void)setViewHasAppearedOnce:(BOOL)arg1 ;
-(id<NUFeedTriggerProvider>)feedTriggerProvider;
-(CGRect)laidOutBounds;
-(void)setLaidOutBounds:(CGRect)arg1 ;
-(id<NUFeedDataProvider>)feedDataProvider;
-(id)initWithFeedDataProvider:(id)arg1 feedTriggerProvider:(id)arg2 ;
@end

