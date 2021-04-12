/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingCore.framework/HearingCore
*/


@protocol OS_dispatch_queue;
#import <HearingCore/HearingCore-Structs.h>
@class NSMutableSet, NSMutableDictionary, NPSDomainAccessor, NSObject;

@interface HCSettings : NSObject {

	os_unfair_lock_s _syncLock;
	NSMutableSet* _registeredNotifications;
	NSMutableSet* _synchronizePreferences;
	NSMutableDictionary* _updateBlocks;
	NPSDomainAccessor* _domainAccessor;
	NPSDomainAccessor* _globalDomainAccessor;
	NSObject*<OS_dispatch_queue> _nanoDomainAccessorQueue;

}

@property (nonatomic,retain) NSMutableSet * registeredNotifications;                            //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * synchronizePreferences;                             //@synthesize synchronizePreferences=_synchronizePreferences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                                //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;                                //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * globalDomainAccessor;                          //@synthesize globalDomainAccessor=_globalDomainAccessor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nanoDomainAccessorQueue;              //@synthesize nanoDomainAccessorQueue=_nanoDomainAccessorQueue - In the implementation block
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(void)_registerForNotification:(id)arg1 ;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
-(NPSDomainAccessor *)domainAccessor;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(id)preferenceKeyForSelector:(SEL)arg1 ;
-(id)nanoDomainAccessor;
-(NPSDomainAccessor *)globalDomainAccessor;
-(NSMutableSet *)synchronizePreferences;
-(NSMutableDictionary *)updateBlocks;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(NSMutableSet *)registeredNotifications;
-(void)logMessage:(id)arg1 ;
-(id)init;
-(void)setGlobalDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)objectValueForKey:(id)arg1 withClass:(Class)arg2 andDefaultValue:(id)arg3 ;
-(id)keysToSync;
-(void)setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)pairedWatchDidChange:(id)arg1 ;
-(BOOL)shouldStoreLocally;
-(long long)integerValueForKey:(id)arg1 withDefaultValue:(long long)arg2 ;
-(id)preferenceDomain;
-(void)dealloc;
-(void)setNanoDomainAccessorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)nanoDomainAccessorQueue;
-(id)notificationForPreferenceKey:(id)arg1 ;
-(void)resetValueForSelector:(SEL)arg1 ;
-(BOOL)boolValueForPreferenceKey:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(double)cgfloatValueForPreferenceKey:(id)arg1 withDefaultValue:(double)arg2 ;
@end

