/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>

@protocol FCCacheCoordinatorDelegate, FCCacheCoordinatorLocking, FCOperationThrottler;
@class NSMutableSet, NSCountedSet, FCThreadSafeMutableDictionary, NFUnfairLock, FCCacheCoordinatorFlushPolicy, NSArray, NSString;

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
@property (nonatomic,readonly) NSArray * keysWithZeroInterest; 
@property (nonatomic,readonly) NSArray * keysWithNonZeroInterest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<FCCacheCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<FCCacheCoordinatorDelegate>)arg1 ;
-(void)operationThrottlerPerformOperation:(id)arg1 ;
-(void)performWriteSync:(/*^block*/id)arg1 ;
-(void)performReadSync:(/*^block*/id)arg1 ;
-(id)holdTokensForKeys:(id)arg1 ;
-(BOOL)cacheContainsKey:(id)arg1 ;
-(void)performCacheRead:(/*^block*/id)arg1 ;
-(void)performCacheWrite:(/*^block*/id)arg1 ;
-(void)enableFlushingWithPolicy:(id)arg1 ;
-(void)setupWithInitialKeys:(id)arg1 persistedHints:(id)arg2 ;
-(void)didInsertKeysIntoCache:(id)arg1 withLifetimeHints:(id)arg2 ;
-(id)persistableHints;
-(id<FCOperationThrottler>)flushThrottler;
-(NSMutableSet *)storedKeys;
-(NSCountedSet *)interestedKeys;
-(FCThreadSafeMutableDictionary *)cacheHintsByKey;
-(id)holdTokenForKeys:(id)arg1 ;
-(void)addInterestInKeys:(id)arg1 ;
-(void)removeInterestInKeys:(id)arg1 ;
-(NFUnfairLock *)interestLock;
-(void)_modifyCacheHintForKeys:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setFlushPolicy:(FCCacheCoordinatorFlushPolicy *)arg1 ;
-(void)setFlushingEnabled:(BOOL)arg1 ;
-(FCCacheCoordinatorFlushPolicy *)flushPolicy;
-(id)filterKeysForPreemptiveFlush:(id)arg1 cacheHints:(id)arg2 ;
-(void)didAccessKeys:(id)arg1 ;
-(BOOL)isFlushingEnabled;
-(id<FCCacheCoordinatorLocking>)underlyingLock;
-(void)setupWithInitialKeys:(id)arg1 ;
-(id)holdTokenForKey:(id)arg1 ;
-(NSArray *)keysWithZeroInterest;
-(NSArray *)keysWithNonZeroInterest;
-(void)didInsertKeyIntoCache:(id)arg1 withLifetimeHint:(long long)arg2 ;
-(void)didRemoveKeysFromCache:(id)arg1 ;
-(void)setStoredKeys:(NSMutableSet *)arg1 ;
-(void)setInterestedKeys:(NSCountedSet *)arg1 ;
-(void)setCacheHintsByKey:(FCThreadSafeMutableDictionary *)arg1 ;
-(void)setInterestLock:(NFUnfairLock *)arg1 ;
-(void)setUnderlyingLock:(id<FCCacheCoordinatorLocking>)arg1 ;
-(void)setFlushThrottler:(id<FCOperationThrottler>)arg1 ;
@end

