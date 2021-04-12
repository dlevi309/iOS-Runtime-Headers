/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMUserDirectoryIterator.h>

@protocol CRKClassKitRosterRequirements, CRKClassKitQuery;
@class NSMutableArray, NSString;

@interface CRKASMConcreteUserDirectoryIterator : NSObject <CRKASMUserDirectoryIterator> {

	BOOL _executing;
	id<CRKClassKitRosterRequirements> _requirements;
	id<CRKClassKitQuery> _query;
	NSMutableArray* _queryCompletionQueue;

}

@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
@property (nonatomic,readonly) id<CRKClassKitQuery> query;                                  //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSMutableArray * queryCompletionQueue;                       //@synthesize queryCompletionQueue=_queryCompletionQueue - In the implementation block
@property (assign,getter=isExecuting,nonatomic) BOOL executing;                             //@synthesize executing=_executing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)iteratorWithRosterRequirements:(id)arg1 queryGenerator:(/*^block*/id)arg2 ;
-(id<CRKClassKitQuery>)query;
-(void)setExecuting:(BOOL)arg1 ;
-(id<CRKClassKitRosterRequirements>)requirements;
-(BOOL)isExecuting;
-(id)initWithRequirements:(id)arg1 query:(id)arg2 ;
-(void)queryDidFinishExecutingWithResults:(id)arg1 error:(id)arg2 ;
-(NSMutableArray *)queryCompletionQueue;
-(void)serviceQueryQueue;
-(void)fetchNextUsersWithCompletion:(/*^block*/id)arg1 ;
@end

