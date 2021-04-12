/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@class NSLock, NSMutableSet, NSMutableDictionary, NPSDomainAccessor, NSDate;

@interface HUNoiseSettings : NSObject {

	NSLock* _synchronizeDomainsLock;
	NSMutableSet* _registeredNotifications;
	NSMutableSet* _synchronizePreferences;
	NSMutableDictionary* _updateBlocks;
	NPSDomainAccessor* _domainAccessor;

}

@property (nonatomic,retain) NSMutableSet * registeredNotifications;                //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * synchronizePreferences;                 //@synthesize synchronizePreferences=_synchronizePreferences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                    //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;                    //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (assign,nonatomic) BOOL noiseEnabled; 
@property (assign,nonatomic) BOOL onboardingCompleted; 
@property (assign,nonatomic) BOOL notificationsEnabled; 
@property (assign,nonatomic) unsigned long long notificationThreshold; 
@property (nonatomic,retain) NSDate * notificationMuteDate; 
@property (assign,nonatomic) double currentLeq; 
@property (assign,nonatomic) NSDate * leqTimestamp; 
@property (assign,nonatomic) double leqDuration; 
@property (assign,nonatomic) BOOL migratedThreshold; 
@property (assign,nonatomic) unsigned long long thresholdVersion; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)notificationsEnabled;
-(NSMutableSet *)synchronizePreferences;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(void)_registerForNotification:(id)arg1 ;
-(NSMutableDictionary *)updateBlocks;
-(NSMutableSet *)registeredNotifications;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
-(NPSDomainAccessor *)domainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(BOOL)noiseEnabled;
-(BOOL)onboardingCompleted;
-(unsigned long long)notificationThreshold;
-(NSDate *)notificationMuteDate;
-(double)currentLeq;
-(NSDate *)leqTimestamp;
-(double)leqDuration;
-(BOOL)migratedThreshold;
-(unsigned long long)thresholdVersion;
-(BOOL)preferenceIsSetForRetrieveSelector:(SEL)arg1 ;
-(void)setNoiseEnabled:(BOOL)arg1 ;
-(void)setOnboardingCompleted:(BOOL)arg1 ;
-(void)setNotificationThreshold:(unsigned long long)arg1 ;
-(void)setNotificationMuteDate:(NSDate *)arg1 ;
-(void)setCurrentLeq:(double)arg1 ;
-(void)setLeqTimestamp:(NSDate *)arg1 ;
-(void)setLeqDuration:(double)arg1 ;
-(void)setMigratedThreshold:(BOOL)arg1 ;
-(void)setThresholdVersion:(unsigned long long)arg1 ;
@end

