/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <Foundation/NSOperation.h>

@class CSSearchableIndex, NSArray, NSError, NSMutableArray, NSMutableDictionary;

@interface ICIndexItemsOperation : NSOperation {

	CSSearchableIndex* _searchableIndex;
	NSArray* _dataSources;
	NSError* _error;
	NSMutableArray* _objectIDsToIndex;
	NSMutableArray* _searchableItemsToIndex;
	unsigned long long _totalSizeOfSearchableItemsToIndex;
	NSMutableArray* _objectIDURIsToDelete;
	NSMutableDictionary* _contextCache;

}

@property (nonatomic,retain) CSSearchableIndex * searchableIndex;                               //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (nonatomic,copy) NSArray * dataSources;                                               //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,retain) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * objectIDsToIndex;                                 //@synthesize objectIDsToIndex=_objectIDsToIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchableItemsToIndex;                           //@synthesize searchableItemsToIndex=_searchableItemsToIndex - In the implementation block
@property (assign,nonatomic) unsigned long long totalSizeOfSearchableItemsToIndex;              //@synthesize totalSizeOfSearchableItemsToIndex=_totalSizeOfSearchableItemsToIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * objectIDURIsToDelete;                             //@synthesize objectIDURIsToDelete=_objectIDURIsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contextCache;                                //@synthesize contextCache=_contextCache - In the implementation block
-(NSArray *)dataSources;
-(id)init;
-(void)setDataSources:(NSArray *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)main;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
-(CSSearchableIndex *)searchableIndex;
-(id)managedObjectContextForDataSource:(id)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 ;
-(NSMutableDictionary *)contextCache;
-(void)processItems;
-(NSMutableArray *)objectIDsToIndex;
-(NSMutableArray *)searchableItemsToIndex;
-(NSMutableArray *)objectIDURIsToDelete;
-(unsigned long long)totalSizeOfSearchableItemsToIndex;
-(void)setTotalSizeOfSearchableItemsToIndex:(unsigned long long)arg1 ;
-(void)commitObjectIDURIsToDeleteIfNecessaryForDataSource:(id)arg1 forceCommit:(BOOL)arg2 ;
-(void)commitObjectIDsToIndexIfNecessaryForDataSource:(id)arg1 forceCommit:(BOOL)arg2 ;
-(void)setObjectIDsToIndex:(NSMutableArray *)arg1 ;
-(void)setSearchableItemsToIndex:(NSMutableArray *)arg1 ;
-(void)setObjectIDURIsToDelete:(NSMutableArray *)arg1 ;
-(void)setContextCache:(NSMutableDictionary *)arg1 ;
@end

