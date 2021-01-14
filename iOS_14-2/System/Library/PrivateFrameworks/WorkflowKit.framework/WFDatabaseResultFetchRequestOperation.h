/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDatabaseResultFetchOperation.h>

@class NSFetchRequest;

@interface WFDatabaseResultFetchRequestOperation : WFDatabaseResultFetchOperation {

	NSFetchRequest* _fetchRequest;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest;              //@synthesize fetchRequest=_fetchRequest - In the implementation block
-(id)entity;
-(NSFetchRequest *)fetchRequest;
-(id)description;
-(id)initWithFetchRequest:(id)arg1 ;
-(id)resultsWithContext:(id)arg1 error:(id*)arg2 ;
-(long long)countWithContext:(id)arg1 error:(id*)arg2 ;
@end

