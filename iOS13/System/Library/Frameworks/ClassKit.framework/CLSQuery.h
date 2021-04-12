/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSDataObserver.h>
#import <libobjc.A.dylib/NSLocking.h>
#import <libobjc.A.dylib/CLSQuery.h>

@protocol CLSQuery <CLSClientRemoteObject,CLSChangeNotifiable>
@required
-(oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(id)arg2;

@end


@class NSMutableArray, CLSSearchSpecification, NSDate, NSString;

@interface CLSQuery : CLSDataObserver <NSLocking, CLSQuery> {

	NSMutableArray* _results;
	os_unfair_lock_s _lock;
	BOOL _executing;
	BOOL _shouldAddResultsToDataStore;
	BOOL _shouldFaultResults;
	long long _fetchLimit;
	CLSSearchSpecification* _searchSpec;
	/*^block*/id _completion;
	NSDate* _startDate;
	unsigned long long _state;

}

@property (getter=isExecuting) BOOL executing;                                   //@synthesize executing=_executing - In the implementation block
@property (assign,nonatomic) BOOL shouldAddResultsToDataStore;                   //@synthesize shouldAddResultsToDataStore=_shouldAddResultsToDataStore - In the implementation block
@property (assign,nonatomic) BOOL shouldFaultResults;                            //@synthesize shouldFaultResults=_shouldFaultResults - In the implementation block
@property (retain) NSDate * startDate;                                           //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long fetchLimit;                               //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,readonly) CLSSearchSpecification * searchSpec;              //@synthesize searchSpec=_searchSpec - In the implementation block
@property (nonatomic,copy) id completion;                                        //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryWithObjectType:(Class)arg1 predicate:(id)arg2 error:(id*)arg3 ;
+(id)queryWithObjectType:(Class)arg1 predicate:(id)arg2 ;
+(id)queryWithSearchSpecification:(id)arg1 ;
-(NSString *)description;
-(void)lock;
-(void)unlock;
-(NSDate *)startDate;
-(BOOL)isExecuting;
-(unsigned long long)state;
-(void)reset;
-(void)setState:(unsigned long long)arg1 ;
-(long long)fetchLimit;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setFetchLimit:(long long)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setExecuting:(BOOL)arg1 ;
-(oneway void)clientRemote_invalidate;
-(oneway void)clientRemote_deliverObject:(id)arg1 ;
-(id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id*)arg4 ;
-(id)initWithSearchSpecification:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldFaultResults;
-(void)_notifyOfCompletionWithError:(id)arg1 ;
-(void)_faultResultsAndComplete;
-(void)_notifyOfCompletionWithResults:(id)arg1 error:(id)arg2 ;
-(oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(id)arg2 ;
-(CLSSearchSpecification *)searchSpec;
-(BOOL)shouldAddResultsToDataStore;
-(void)setShouldAddResultsToDataStore:(BOOL)arg1 ;
-(void)setShouldFaultResults:(BOOL)arg1 ;
@end

