/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UICollectionViewDataSource.h>

@class REUIRelevanceEngineController, RERelevanceEngine, NSArray, NSString;

@interface REUIUpNextDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource> {

	REUIRelevanceEngineController* _controller;

}

@property (nonatomic,readonly) RERelevanceEngine * relevanceEngine; 
@property (nonatomic,readonly) NSArray * sectionOrder; 
@property (assign,nonatomic,__weak) id<REUIRelevanceEngineControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<REUIRelevanceEngineControllerDelegate>)delegate;
-(void)setDelegate:(id<REUIRelevanceEngineControllerDelegate>)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(NSArray *)sectionOrder;
-(RERelevanceEngine *)relevanceEngine;
-(id)initWithRelevanceEngine:(id)arg1 ;
-(id)initWithRelevanceEngine:(id)arg1 sectionOrder:(id)arg2 ;
-(id)_sectionTitleAtIndex:(unsigned long long)arg1 ;
@end

