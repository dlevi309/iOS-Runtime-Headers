/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <Foundation/NSOperation.h>

@class CSSearchableIndex, NSArray, NSError;

@interface ICIndexItemsOperation : NSOperation {

	CSSearchableIndex* _searchableIndex;
	NSArray* _dataSources;
	unsigned long long _maxBytesPerBatch;
	NSError* _error;

}

@property (nonatomic,retain) CSSearchableIndex * searchableIndex;              //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (nonatomic,copy) NSArray * dataSources;                              //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long maxBytesPerBatch;              //@synthesize maxBytesPerBatch=_maxBytesPerBatch - In the implementation block
-(id)init;
-(NSError *)error;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)dataSources;
-(void)deleteItems;
-(CSSearchableIndex *)searchableIndex;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
-(void)setDataSources:(NSArray *)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 ;
-(void)setMaxBytesPerBatch:(unsigned long long)arg1 ;
-(void)indexItems;
-(id)objectIDURIsToDeleteFromDataSource:(id)arg1 ;
-(id)objectIDsToIndexFromDataSource:(id)arg1 ;
-(unsigned long long)maxBytesPerBatch;
@end

