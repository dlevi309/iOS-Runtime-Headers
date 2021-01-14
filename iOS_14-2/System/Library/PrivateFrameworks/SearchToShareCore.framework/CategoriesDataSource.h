/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/PopUpDataSource.h>
#import <libobjc.A.dylib/PopUpDelegate.h>

@protocol STSSearchModelUpdateDelegate, STSCategorySelectionDelegate;
@class NSArray, NSMutableArray, STSSearchModel, NSString;

@interface CategoriesDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource, UIScrollViewDelegate, UICollectionViewDelegate, PopUpDataSource, PopUpDelegate> {

	BOOL _isScrolling;
	id<STSSearchModelUpdateDelegate> _updateDelegate;
	id<STSCategorySelectionDelegate> _selectionDelegate;
	NSArray* _categories;
	NSMutableArray* _recents;
	NSMutableArray* _model;
	STSSearchModel* _searchModel;

}

@property (nonatomic,retain) NSArray * categories;                                                   //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSMutableArray * recents;                                               //@synthesize recents=_recents - In the implementation block
@property (nonatomic,retain) NSMutableArray * model;                                                 //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) STSSearchModel * searchModel;                                           //@synthesize searchModel=_searchModel - In the implementation block
@property (assign) BOOL isScrolling;                                                                 //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,nonatomic,__weak) id<STSSearchModelUpdateDelegate> updateDelegate;                 //@synthesize updateDelegate=_updateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<STSCategorySelectionDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCategories:(NSArray *)arg1 ;
-(void)setIsScrolling:(BOOL)arg1 ;
-(NSMutableArray *)model;
-(STSSearchModel *)searchModel;
-(void)updateRecents:(id)arg1 ;
-(long long)numberOfRows;
-(NSArray *)categories;
-(void)setSearchModel:(STSSearchModel *)arg1 ;
-(void)setModel:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recents;
-(void)didSelectItemAtIndex:(long long)arg1 ;
-(BOOL)isScrolling;
-(id)initWithSearchModel:(id)arg1 ;
-(id<STSCategorySelectionDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<STSCategorySelectionDelegate>)arg1 ;
-(id<STSSearchModelUpdateDelegate>)updateDelegate;
-(void)setUpdateDelegate:(id<STSSearchModelUpdateDelegate>)arg1 ;
-(void)setRecents:(NSMutableArray *)arg1 ;
-(void)updateModel;
-(id)_searchResultIdentifierForSuggestion:(id)arg1 recent:(BOOL)arg2 ;
-(void)sendRankSectionsFeedback;
-(void)addQueryToRecents:(id)arg1 ;
-(BOOL)isGroupRow:(long long)arg1 ;
-(id)stringValueForRowAtIndex:(long long)arg1 ;
-(id)headerTitleForRow:(long long)arg1 ;
-(BOOL)rowHasClearButton:(long long)arg1 ;
-(void)_commitClearRecents;
-(id)recentQueries;
-(id)visibleResultsForIndexPaths:(id)arg1 ;
@end

