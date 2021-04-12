/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKFetchOperationDelegate.h>

@class NSMutableArray, NSString;

@interface HKOutstandingFetchOperationManager : NSObject <HKFetchOperationDelegate> {

	BOOL _needsRebalanceFetchOperations;
	NSMutableArray* _pendingFetchOperations;
	NSMutableArray* _activeFetchOperations;
	long long _maxConcurrentFetchOperations;

}

@property (assign,nonatomic) long long maxConcurrentFetchOperations;              //@synthesize maxConcurrentFetchOperations=_maxConcurrentFetchOperations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedOperationManager;
+(void)setSharedOperationManager:(id)arg1 ;
-(void)addFetchOperation:(id)arg1 ;
-(id)initWithMaxConcurrentFetchOperations:(long long)arg1 ;
-(void)_setNeedsRebalanceFetchOperations;
-(void)removeFetchOperation:(id)arg1 ;
-(BOOL)_removeFetchOperationFromPendingOperations:(id)arg1 ;
-(BOOL)_removeFetchOperationFromActiveOperations:(id)arg1 ;
-(void)_rebalanceFetchOperations;
-(void)_sortPendingFetchOperations;
-(void)_fillActiveFetchOperations;
-(void)_executeFetchOperation:(id)arg1 ;
-(void)fetchOperationDidUpdatePriority:(id)arg1 ;
-(void)setMaxConcurrentFetchOperations:(long long)arg1 ;
-(void)addFetchOperations:(id)arg1 ;
-(void)removeFetchOperations:(id)arg1 ;
-(long long)maxConcurrentFetchOperations;
@end

