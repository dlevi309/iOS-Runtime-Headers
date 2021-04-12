/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedPassLibrary;
+(id)addDNDStateUpdateListener;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(BOOL)isDNDActiveWithError:(id*)arg1 ;
-(id)heuristicsCached;
-(id)init;
-(id)firstExpirationDate;
-(unsigned long long)count;
-(void)expireAll;
-(void)setObject:(id)arg1 expirers:(id)arg2 forKey:(id)arg3 ;
-(id)_internExpirerLocked:(id)arg1 ;
-(void)_expire:(id)arg1 postNotification:(BOOL)arg2 ;
-(id)objectForKey:(id)arg1 found:(BOOL*)arg2 ;
-(void)expire:(id)arg1 ;
-(void)dealloc;
@end

