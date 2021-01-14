/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDatabaseResultFetchOperation.h>

@class NSArray;

@interface WFDatabaseResultTieredFetchRequestOperation : WFDatabaseResultFetchOperation {

	NSArray* _fetchRequests;
	long long _resultsLimit;

}

@property (nonatomic,readonly) NSArray * fetchRequests;              //@synthesize fetchRequests=_fetchRequests - In the implementation block
@property (nonatomic,readonly) long long resultsLimit;               //@synthesize resultsLimit=_resultsLimit - In the implementation block
-(id)entity;
-(NSArray *)fetchRequests;
-(id)description;
-(long long)resultsLimit;
-(id)resultsWithContext:(id)arg1 error:(id*)arg2 ;
-(long long)countWithContext:(id)arg1 error:(id*)arg2 ;
-(id)initWithFetchRequests:(id)arg1 resultsLimit:(long long)arg2 ;
@end

