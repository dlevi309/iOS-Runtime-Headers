/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <ActionPredictionHeuristicsInternal/ActionPredictionHeuristicsInternal-Structs.h>
#import <libobjc.A.dylib/DNDStateUpdateListener.h>

@class NSMutableDictionary, NSHashTable, DNDState, NSString;

@interface ATXHeuristicResultCache : NSObject <DNDStateUpdateListener> {

	NSMutableDictionary* _cache;
	NSHashTable* _expirerInternTable;
	opaque_pthread_mutex_t _lock;
	DNDState* _doNotDisturbState;
	int _appRefreshToken;
	int _significantTimeToken;
	int _learnRefreshToken;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)addDNDStateUpdateListener;
+(id)sharedPassLibrary;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)_expire:(id)arg1 postNotification:(BOOL)arg2 ;
-(BOOL)isDNDActiveWithError:(id*)arg1 ;
-(void)setObject:(id)arg1 expirers:(id)arg2 forKey:(id)arg3 ;
-(id)_internExpirerLocked:(id)arg1 ;
-(id)objectForKey:(id)arg1 found:(BOOL*)arg2 ;
-(id)heuristicsCached;
-(id)firstExpirationDate;
-(void)expire:(id)arg1 ;
-(void)expireAll;
@end

