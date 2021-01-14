/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)entities;
-(id)initWithDataSource:(id)arg1 ;
-(MPUQueryDataSource *)dataSource;
-(unsigned long long)count;
-(NSString *)searchString;
-(void)dealloc;
-(id)initWithDataSource:(id)arg1 operationQueue:(id)arg2 ;
-(void)filterResultsUsingSearchString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_searchPropertiesForGroupingType:(long long)arg1 ;
-(void)filterResultsUsingSearchString:(id)arg1 ;
-(void)_searchOperation:(id)arg1 didFinishWithResults:(id)arg2 ;
@end

