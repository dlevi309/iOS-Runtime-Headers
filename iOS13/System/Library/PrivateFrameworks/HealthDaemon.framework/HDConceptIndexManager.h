/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDataObserver.h>

@protocol HDBlockDispatcher;
@class HDProfile, HKObserverSet, NSMutableArray, HDConceptIndexer, NSString;

@interface HDConceptIndexManager : NSObject <HDDataObserver> {

	id<HDBlockDispatcher> _dispatcher;
	unsigned long long _batchSize;
	HDProfile* _profile;
	BOOL _isEnabled;
	HKObserverSet* _observerSet;
	NSMutableArray* _completionBlocks;
	os_unfair_lock_s _executionStateLock;
	unsigned long long _executionState;
	HDConceptIndexer* _conceptIndexer;

}

@property (nonatomic,readonly) HDConceptIndexer * conceptIndexer;              //@synthesize conceptIndexer=_conceptIndexer - In the implementation block
@property (readonly) unsigned long long currentExecutionState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_updateConceptIndexWithBlockDispatcher:(id)arg1 conceptIndexer:(id)arg2 batchSize:(long long)arg3 initialCount:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)updateWithDescription:(id)arg1 ;
-(void)invalidateAndWait;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(unsigned long long)currentExecutionState;
-(void)updateConceptIndexWithCompletion:(/*^block*/id)arg1 ;
-(void)stopWithDescription:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithBlockDispatcher:(id)arg1 batchSize:(unsigned long long)arg2 profile:(id)arg3 ;
-(void)resetWithReindex:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)startWithDescription:(id)arg1 ;
-(HDConceptIndexer *)conceptIndexer;
@end

