/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class UIViewController, NSString, NSArray;

@interface GKCollectionDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	BOOL _onDarkBackground;
	BOOL _useStandardHeaders;
	BOOL _breakSearchInputTextIntoMultipleTerms;
	UIViewController* _presentationViewController;
	NSString* _analyticsEvent;
	NSString* _analyticsEventType;
	NSString* _searchText;
	NSArray* _searchTerms;

}

@property (nonatomic,retain) NSArray * searchTerms;                                      //@synthesize searchTerms=_searchTerms - In the implementation block
@property (assign,nonatomic) UIViewController * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (assign,nonatomic) BOOL onDarkBackground;                                      //@synthesize onDarkBackground=_onDarkBackground - In the implementation block
@property (nonatomic,readonly) long long itemCount; 
@property (assign,nonatomic) BOOL useStandardHeaders;                                    //@synthesize useStandardHeaders=_useStandardHeaders - In the implementation block
@property (nonatomic,readonly) NSString * sectionHeaderText; 
@property (nonatomic,readonly) double preferredCollectionHeight; 
@property (assign,nonatomic) NSString * analyticsEvent;                                  //@synthesize analyticsEvent=_analyticsEvent - In the implementation block
@property (assign,nonatomic) NSString * analyticsEventType;                              //@synthesize analyticsEventType=_analyticsEventType - In the implementation block
@property (nonatomic,readonly) BOOL isSearching; 
@property (nonatomic,copy) NSString * searchText;                                        //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) BOOL breakSearchInputTextIntoMultipleTerms;                 //@synthesize breakSearchInputTextIntoMultipleTerms=_breakSearchInputTextIntoMultipleTerms - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)isSearching;
-(void)dismissViewController:(id)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setBreakSearchInputTextIntoMultipleTerms:(BOOL)arg1 ;
-(BOOL)breakSearchInputTextIntoMultipleTerms;
-(id)alternateSearchKeyForSection:(long long)arg1 ;
-(id)headerTextForSection:(long long)arg1 ;
-(NSString *)analyticsEventType;
-(BOOL)isValidAnalytics;
-(BOOL)useStandardHeaders;
-(void)setAnalyticsEventType:(NSString *)arg1 ;
-(NSString *)analyticsEvent;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)showViewController:(id)arg1 popoverSourceView:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(UIViewController *)presentationViewController;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(long long)itemCount;
-(double)preferredCollectionHeight;
-(void)setOnDarkBackground:(BOOL)arg1 ;
-(BOOL)onDarkBackground;
-(void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2 ;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(void)setUseStandardHeaders:(BOOL)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(NSString *)sectionHeaderText;
-(void)setAnalyticsEvent:(NSString *)arg1 ;
-(NSString *)searchText;
-(BOOL)searchMatchesItem:(id)arg1 inSection:(long long)arg2 ;
-(id)searchKeyForSection:(long long)arg1 ;
-(void)searchTextHasChanged;
-(void)setSearchText:(NSString *)arg1 ;
-(void)dealloc;
-(void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2 ;
@end

