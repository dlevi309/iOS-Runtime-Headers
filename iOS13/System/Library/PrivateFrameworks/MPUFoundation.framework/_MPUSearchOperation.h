/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <Foundation/NSOperation.h>

@class MPMediaQuery, MPUSearchDataSource, NSString;

@interface _MPUSearchOperation : NSOperation {

	long long _entityType;
	MPMediaQuery* _query;
	MPUSearchDataSource* _dataSource;
	NSString* _searchString;

}

@property (nonatomic,__weak,readonly) MPUSearchDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
-(id)description;
-(void)main;
-(MPUSearchDataSource *)dataSource;
-(NSString *)searchString;
-(id)initWithSearchDataSource:(id)arg1 searchString:(id)arg2 ;
-(void)executeSearch;
@end

