/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFUnfairLock, HMFTimer, NSMutableDictionary, NSDictionary, NSString;

@interface HMIPreference : HMFObject <HMFTimerDelegate, HMFLogging> {

	HMFUnfairLock* _lock;
	HMFTimer* _preferenceCacheFlushTimer;
	NSMutableDictionary* _preferenceCache;
	NSMutableDictionary* _preferenceLoggedValues;
	NSMutableDictionary* _preferenceOverridesInternal;

}

@property (nonatomic,readonly) HMFUnfairLock * lock;                                           //@synthesize lock=_lock - In the implementation block
@property (readonly) HMFTimer * preferenceCacheFlushTimer;                                     //@synthesize preferenceCacheFlushTimer=_preferenceCacheFlushTimer - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * preferenceCache;                          //@synthesize preferenceCache=_preferenceCache - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * preferenceLoggedValues;                   //@synthesize preferenceLoggedValues=_preferenceLoggedValues - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * preferenceOverridesInternal;              //@synthesize preferenceOverridesInternal=_preferenceOverridesInternal - In the implementation block
@property (readonly) BOOL usesCPUOnly; 
@property (readonly) long long maxVideoEncoderFrameRate; 
@property (readonly) NSDictionary * preferenceOverrides; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedInstance;
+(BOOL)isAudioAccessory;
+(id)qosMap;
+(BOOL)isInternalInstall;
+(BOOL)isProductTypeJ105;
+(BOOL)isProductTypeJ42;
+(BOOL)isProductTypeB238;
+(BOOL)isProductTypeB520;
-(void)timerDidFire:(id)arg1 ;
-(id)init;
-(HMFUnfairLock *)lock;
-(BOOL)usesCPUOnly;
-(BOOL)boolPreferenceForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)numberPreferenceForKey:(id)arg1 defaultValue:(id)arg2 withMap:(id)arg3 ;
-(long long)maxVideoEncoderFrameRate;
-(id)numberPreferenceForKey:(id)arg1 defaultValue:(id)arg2 ;
-(NSDictionary *)preferenceOverrides;
-(id)stringPreferenceForKey:(id)arg1 defaultValue:(id)arg2 ;
-(BOOL)hasPreferenceForKey:(id)arg1 ;
-(id)valuePreferenceForKey:(id)arg1 defaultValue:(id)arg2 withMap:(id)arg3 ;
-(void)setPreferenceOverrideFromDictionary:(id)arg1 ;
-(NSMutableDictionary *)preferenceCache;
-(NSMutableDictionary *)preferenceOverridesInternal;
-(NSMutableDictionary *)preferenceLoggedValues;
-(id)systemPreferenceValueForKey:(id)arg1 ;
-(void)logPreferenceForKey:(id)arg1 value:(id)arg2 ;
-(void)addPreferenceOverrideFromDictionary:(id)arg1 ;
-(void)removeAllPreferenceOverrides;
-(id)numberPreferenceForKey:(id)arg1 defaultValue:(id)arg2 withParser:(/*^block*/id)arg3 ;
-(id)valuePreferenceForKey:(id)arg1 defaultValue:(id)arg2 withParser:(/*^block*/id)arg3 ;
-(HMFTimer *)preferenceCacheFlushTimer;
@end
