/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class SUVariableCellConfigurationCache, SUImageCache, ISURLOperationPool, NSArray;

@interface SUTableDataSource : NSObject {

	id _cellReuseSource;
	long long _columnCount;
	SUVariableCellConfigurationCache* _configurationCache;
	long long _preferringUserInteractionCount;

}

@property (assign,nonatomic) id cellReuseSource;                                                               //@synthesize cellReuseSource=_cellReuseSource - In the implementation block
@property (nonatomic,readonly) SUImageCache * imageCache; 
@property (nonatomic,readonly) ISURLOperationPool * imagePool; 
@property (nonatomic,readonly) long long tableViewStyle; 
@property (nonatomic,readonly) long long numberOfSections; 
@property (assign,nonatomic) long long columnCount;                                                            //@synthesize columnCount=_columnCount - In the implementation block
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
@property (getter=isPreferringUserInteraction,nonatomic,readonly) BOOL preferringUserInteraction; 
-(id)init;
-(long long)numberOfSections;
-(void)setColumnCount:(long long)arg1 ;
-(void)resetCaches;
-(void)reloadData;
-(long long)columnCount;
-(SUImageCache *)imageCache;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(NSArray *)sectionIndexTitles;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(double)heightForFooterInSection:(long long)arg1 ;
-(long long)tableViewStyle;
-(id)headerViewForSection:(long long)arg1 ;
-(void)dealloc;
-(long long)numberOfColumnsInSection:(long long)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(void)setCellReuseSource:(id)arg1 ;
-(BOOL)deleteIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)resetLayoutCaches;
-(void)endPreferringUserInteraction;
-(void)beginPreferringUserInteraction;
-(id)placeholderCellForIndexPath:(id)arg1 ;
-(long long)sectionIndexForIndexTitle:(id)arg1 atIndex:(long long)arg2 ;
-(void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)canDoubleTapIndexPath:(id)arg1 ;
-(BOOL)canDeleteIndexPath:(id)arg1 ;
-(double)heightForPlaceholderCells;
-(double)cellHeightForIndexPath:(id)arg1 ;
-(id)titleForDeleteConfirmationForIndexPath:(id)arg1 ;
-(BOOL)canSelectIndexPath:(id)arg1 ;
-(void)didBeginPreferringUserInteraction;
-(ISURLOperationPool *)imagePool;
-(void)didEndPreferringUserInteraction;
-(void)reloadCellContexts;
-(id)cachedConfigurationForClass:(Class)arg1 index:(long long)arg2 ;
-(id)cellContextForConfigurationClass:(Class)arg1 ;
-(BOOL)isPreferringUserInteraction;
-(id)cellReuseSource;
@end

