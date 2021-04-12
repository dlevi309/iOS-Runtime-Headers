/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@class NSArray;

@interface SearchUITableModel : NSObject {

	unsigned long long _queryId;
	NSArray* _tableRowModel;
	NSArray* _sections;

}

@property (nonatomic,retain) NSArray * tableRowModel;              //@synthesize tableRowModel=_tableRowModel - In the implementation block
@property (nonatomic,retain) NSArray * sections;                   //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned long long queryId;                   //@synthesize queryId=_queryId - In the implementation block
+(id)tableModelWithSections:(id)arg1 expandedSections:(id)arg2 ;
+(id)rowModelsForCardSections:(id)arg1 result:(id)arg2 isInline:(BOOL)arg3 queryId:(unsigned long long)arg4 ;
+(id)tableModelWithResults:(id)arg1 ;
+(id)rowModelForCardSection:(id)arg1 result:(id)arg2 ;
+(id)combinedRowModelsForRowModels:(id)arg1 result:(id)arg2 ;
+(id)asyncRowManagersForCardSections:(id)arg1 ;
+(id)resultsForMultiResultRowInSection:(id)arg1 startingAtIndex:(unsigned long long)arg2 ;
+(BOOL)resultHasHorizontallyScrollingCardSections:(id)arg1 ;
+(id)tableModelWithCardSections:(id)arg1 isInline:(BOOL)arg2 queryId:(unsigned long long)arg3 shouldCombine:(BOOL)arg4 ;
+(id)rowModelsForResult:(id)arg1 ;
+(id)gridLayoutsForCardSections:(id)arg1 ;
+(id)tableModelWithResult:(id)arg1 ;
+(id)tableModelWithCardSections:(id)arg1 isInline:(BOOL)arg2 queryId:(unsigned long long)arg3 ;
-(void)setSections:(NSArray *)arg1 ;
-(BOOL)indexPathExists:(id)arg1 ;
-(unsigned long long)queryId;
-(BOOL)shouldDisplayChevronForIndexPath:(id)arg1 nextCardsEnabled:(BOOL)arg2 ;
-(unsigned long long)numberOfSections;
-(void)replaceResult:(id)arg1 withResult:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)sections;
-(unsigned long long)indexOfSection:(id)arg1 ;
-(void)setTableRowModel:(NSArray *)arg1 ;
-(id)initWithQueryId:(unsigned long long)arg1 ;
-(long long)numberOfRowsForSection:(long long)arg1 ;
-(NSArray *)tableRowModel;
-(id)updatedTableModelWithExpandedSections:(id)arg1 hiddenSections:(id)arg2 atSectionIndex:(unsigned long long)arg3 ;
-(id)description;
-(id)sectionForIndex:(unsigned long long)arg1 ;
-(id)indexPathForRowModel:(id)arg1 ;
-(BOOL)shouldLeaveSpaceForChevronForIndexPath:(id)arg1 ;
-(id)cardSectionForIndexPath:(id)arg1 ;
-(id)removeRowModel:(id)arg1 ;
-(id)rowModelForIndexPath:(id)arg1 ;
-(id)indexPathForResultInFirstTwoSections:(id)arg1 ;
-(int)separatorStyleForIndexPath:(id)arg1 ;
-(BOOL)rowWillFillBackgroundWithContentAtIndexPath:(id)arg1 ;
-(id)resultForIndexPath:(id)arg1 ;
@end

