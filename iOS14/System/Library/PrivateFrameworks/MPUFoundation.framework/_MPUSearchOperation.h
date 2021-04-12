/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MPUSearchDataSource *)dataSource;
-(id)description;
-(void)main;
-(NSString *)searchString;
-(id)initWithSearchDataSource:(id)arg1 searchString:(id)arg2 ;
-(void)executeSearch;
@end

