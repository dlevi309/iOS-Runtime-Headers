/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUQueryDataSource.h>

@class NSOperationQueue, _MPUSearchOperation, NSArray, MPUQueryDataSource, NSString;

@interface MPUSearchDataSource : MPUQueryDataSource {

	NSOperationQueue* _operationQueue;
	_MPUSearchOperation* _searchOperation;
	NSArray* _searchResults;
	MPUQueryDataSource* _dataSource;
	NSString* _searchString;

}

@property (nonatomic,readonly) MPUQueryDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSString * searchString;                      //@synthesize searchString=_searchString - In the implementation block
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithDataSource:(id)arg1 ;
-(id)entities;
-(MPUQueryDataSource *)dataSource;
-(NSString *)searchString;
-(id)initWithDataSource:(id)arg1 operationQueue:(id)arg2 ;
-(void)filterResultsUsingSearchString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_searchPropertiesForGroupingType:(long long)arg1 ;
-(void)filterResultsUsingSearchString:(id)arg1 ;
-(void)_searchOperation:(id)arg1 didFinishWithResults:(id)arg2 ;
@end

