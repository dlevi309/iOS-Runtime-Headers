/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_source;
@class NSMutableSet, NSMutableArray, NSObject, HKSource, NSUUID, NSString, NSSet;

@interface _HDAuthorizationRequestGroup : NSObject {

	NSMutableSet* _typesToWrite;
	NSMutableSet* _typesToRead;
	BOOL _inTransaction;
	NSMutableArray* _requests;
	NSMutableArray* _completions;
	NSObject*<OS_dispatch_source> _sessionTimeoutSource;
	HKSource* _source;
	NSUUID* _promptSessionIdentifier;
	/*^block*/id _promptHandler;

}

@property (nonatomic,retain) NSMutableArray * requests;                                       //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSMutableArray * completions;                                    //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> sessionTimeoutSource;              //@synthesize sessionTimeoutSource=_sessionTimeoutSource - In the implementation block
@property (nonatomic,copy,readonly) HKSource * source;                                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSSet * typesToWrite;                                     //@synthesize typesToWrite=_typesToWrite - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesToRead;                                      //@synthesize typesToRead=_typesToRead - In the implementation block
@property (nonatomic,readonly) NSUUID * promptSessionIdentifier;                              //@synthesize promptSessionIdentifier=_promptSessionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long requestCount; 
@property (assign,getter=isInTransaction,nonatomic) BOOL inTransaction;                       //@synthesize inTransaction=_inTransaction - In the implementation block
@property (nonatomic,copy) id promptHandler;                                                  //@synthesize promptHandler=_promptHandler - In the implementation block
-(id)initWithSource:(id)arg1 ;
-(void)beginTransaction;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)isInTransaction;
-(NSMutableArray *)requests;
-(unsigned long long)requestCount;
-(id)description;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)addRequest:(id)arg1 ;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(HKSource *)source;
-(NSSet *)typesToRead;
-(void)setPromptHandler:(id)arg1 ;
-(void)cancelRequestsWithIdentifiers:(id)arg1 error:(id)arg2 ;
-(NSSet *)typesToWrite;
-(id)promptHandler;
-(BOOL)promptIfNecessaryWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishRequestsWithError:(id)arg1 ;
-(NSUUID *)promptSessionIdentifier;
-(void)_cancelTimeoutSource;
-(NSObject*<OS_dispatch_source>)sessionTimeoutSource;
-(void)setSessionTimeoutSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setInTransaction:(BOOL)arg1 ;
@end

