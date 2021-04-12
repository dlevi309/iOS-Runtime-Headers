/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_source;
@class NSMutableSet, HKSource, NSUUID, NSMutableArray, NSObject, NSString, NSSet;

@interface _HDAuthorizationRequestGroup : NSObject {

	NSMutableSet* _typesToWrite;
	NSMutableSet* _typesToRead;
	BOOL _inTransaction;
	HKSource* _source;
	NSUUID* _promptSessionIdentifier;
	/*^block*/id _promptHandler;
	NSMutableArray* _requests;
	NSMutableArray* _completions;
	NSObject*<OS_dispatch_source> _sessionTimeoutSource;

}

@property (nonatomic,retain) NSMutableArray * requests;                                       //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSMutableArray * completions;                                    //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> sessionTimeoutSource;              //@synthesize sessionTimeoutSource=_sessionTimeoutSource - In the implementation block
@property (assign,getter=isInTransaction,nonatomic) BOOL inTransaction;                       //@synthesize inTransaction=_inTransaction - In the implementation block
@property (nonatomic,copy,readonly) HKSource * source;                                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSSet * typesToWrite;                                     //@synthesize typesToWrite=_typesToWrite - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesToRead;                                      //@synthesize typesToRead=_typesToRead - In the implementation block
@property (nonatomic,readonly) NSUUID * promptSessionIdentifier;                              //@synthesize promptSessionIdentifier=_promptSessionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long requestCount; 
@property (nonatomic,copy) id promptHandler;                                                  //@synthesize promptHandler=_promptHandler - In the implementation block
-(id)description;
-(HKSource *)source;
-(NSString *)bundleIdentifier;
-(void)beginTransaction;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)requests;
-(void)addRequest:(id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)requestCount;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(BOOL)isInTransaction;
-(void)setPromptHandler:(id)arg1 ;
-(void)cancelRequestsWithIdentifiers:(id)arg1 error:(id)arg2 ;
-(NSSet *)typesToWrite;
-(NSSet *)typesToRead;
-(id)promptHandler;
-(BOOL)promptIfNecessaryWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishRequestsWithError:(id)arg1 ;
-(NSUUID *)promptSessionIdentifier;
-(void)_cancelTimeoutSource;
-(NSObject*<OS_dispatch_source>)sessionTimeoutSource;
-(void)setSessionTimeoutSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setInTransaction:(BOOL)arg1 ;
@end

