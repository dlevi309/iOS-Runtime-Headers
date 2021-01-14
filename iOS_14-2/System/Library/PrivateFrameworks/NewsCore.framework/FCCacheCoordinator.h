/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>

@protocol FCCacheCoordinatorDelegate, FCCacheCoordinatorLocking, FCOperationThrottler;
@class NSMutableSet, NSCountedSet, FCThreadSafeMutableDictionary, NFUnfairLock, FCCacheCoordinatorFlushPolicy, NSSet, NSString;

@interface FCCacheCoordinator : NSObject <FCOperationThrottlerDelegate> {

	BOOL _flushingEnabled;
	id<FCCacheCoordinatorDelegate> _delegate;
	NSMutableSet* _storedKeys;
	NSCountedSet* _interestedKeys;
	FCThreadSafeMutableDictionary* _cacheHintsByKey;
	NFUnfairLock* _interestLock;
	id<FCCacheCoordinatorLocking> _underlyingLock;
	id<FCOperationThrottler> _flushThrottler;
	FCCacheCoordinatorFlushPolicy* _flushPolicy;

}

@property (nonatomic,retain) NSMutableSet * storedKeys;                                    //@synthesize storedKeys=_storedKeys - In the implementation block
@property (nonatomic,retain) NSCountedSet * interestedKeys;                                //@synthesize interestedKeys=_interestedKeys - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableDictionary * cacheHintsByKey;              //@synthesize cacheHintsByKey=_cacheHintsByKey - In the implementation block
@property (nonatomic,retain) NFUnfairLock * interestLock;                                  //@synthesize interestLock=_interestLock - In the implementation block
@property (nonatomic,retain) id<FCCacheCoordinatorLocking> underlyingLock;                 //@synthesize underlyingLock=_underlyingLock - In the implementation block
@property (nonatomic,retain) id<FCOperationThrottler> flushThrottler;                      //@synthesize flushThrottler=_flushThrottler - In the implementation block
@property (retain) FCCacheCoordinatorFlushPolicy * flushPolicy;                            //@synthesize flushPolicy=_flushPolicy - In the implementation block
@property (getter=isFlushingEnabled) BOOL flushingEnabled;                                 //@synthesize flushingEnabled=_flushingEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<FCCacheCoordinatorDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * keysWithZeroInterest; 
@property (nonatomic,readonly) NSSet * keysWithNonZeroInterest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInterestLock:(NFUnfairLock *)arg1 ;
-(NFUnfairLock *)interestLock;
-(id)holdTokenForKeys:(id)arg1 ;
-(id)init;
-(id<FCCacheCoordinatorDelegate>)delegate;
-(void)addInterestInKeys:(id)arg1 ;
-(void)didRemoveKeysFromCache:(id)arg1 ;
-(void)setUnderlyingLock:(id<FCCacheCoordinatorLocking>)arg1 ;
-(id)holdTokenForKey:(id)arg1 ;
-(id)filterKeysForPreemptiveFlush:(id)arg1 cacheHints:(id)arg2 ;
-(id<FCOperationThrottler>)flushThrottler;
-(void)didInsertKeysIntoCache:(id)arg1 withLifetimeHints:(id)arg2 ;
-(void)setStoredKeys:(NSMutableSet *)arg1 ;
-(NSSet *)keysWithNonZeroInterest;
-(void)setFlushThrottler:(id<FCOperationThrottler>)arg1 ;
-(FCCacheCoordinatorFlushPolicy *)flushPolicy;
-(void)setFlushPolicy:(FCCacheCoordinatorFlushPolicy *)arg1 ;
-(void)performCacheWrite:(/*^block*/id)arg1 ;
-(void)setCacheHintsByKey:(FCThreadSafeMutableDictionary *)arg1 ;
-(BOOL)cacheContainsKey:(id)arg1 ;
-(void)enableFlushingWithPolicy:(id)arg1 ;
-(void)setDelegate:(id<FCCacheCoordinatorDelegate>)arg1 ;
-(void)didInsertKeyIntoCache:(id)arg1 withLifetimeHint:(long long)arg2 ;
-(void)setFlushingEnabled:(BOOL)arg1 ;
-(void)removeInterestInKeys:(id)arg1 ;
-(void)performWriteSync:(/*^block*/id)arg1 ;
-(NSMutableSet *)storedKeys;
-(void)setupWithInitialKeys:(id)arg1 ;
-(void)performReadSync:(/*^block*/id)arg1 ;
-(BOOL)isFlushingEnabled;
-(void)operationThrottlerPerformOperation:(id)arg1 ;
-(NSCountedSet *)interestedKeys;
-(NSSet *)keysWithZeroInterest;
-(void)didAccessKeys:(id)arg1 ;
-(FCThreadSafeMutableDictionary *)cacheHintsByKey;
-(void)performCacheRead:(/*^block*/id)arg1 ;
-(void)setInterestedKeys:(NSCountedSet *)arg1 ;
-(id)persistableHints;
-(void)dealloc;
-(void)_modifyCacheHintForKeys:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)holdTokensForKeys:(id)arg1 ;
-(id<FCCacheCoordinatorLocking>)underlyingLock;
-(void)setupWithInitialKeys:(id)arg1 persistedHints:(id)arg2 ;
@end

