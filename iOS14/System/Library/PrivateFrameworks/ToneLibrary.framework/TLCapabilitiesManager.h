/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@class NSDictionary, NSString;

@interface TLCapabilitiesManager : NSObject {

	BOOL _isRingtoneStoreAvailable;
	BOOL _isAlertToneStoreAvailable;
	NSDictionary* _deviceCodeNameSimplicationMapping;

}

@property (getter=isRingtoneStoreAvailable,nonatomic,readonly) BOOL ringtoneStoreAvailable; 
@property (getter=isAlertToneStoreAvailable,nonatomic,readonly) BOOL alertToneStoreAvailable; 
@property (nonatomic,readonly) BOOL wantsModernDefaultRingtone; 
@property (nonatomic,readonly) BOOL hasVibratorCapability; 
@property (nonatomic,readonly) BOOL hasSynchronizedVibrationsCapability; 
@property (nonatomic,readonly) BOOL hasSynchronizedEmbeddedVibrationsCapability; 
@property (nonatomic,readonly) BOOL hasUserGeneratedVibrationsCapability; 
@property (nonatomic,readonly) NSString * deviceCodeName; 
@property (nonatomic,readonly) NSString * simplifiedDeviceCodeName; 
@property (getter=isHomePod,nonatomic,readonly) BOOL homePod; 
+(id)sharedCapabilitiesManager;
-(BOOL)hasSynchronizedVibrationsCapability;
-(id)init;
-(BOOL)isAlertToneStoreAvailable;
-(BOOL)isHomePod;
-(BOOL)_hasTelephonyCapability;
-(void)_updateRingtoneStoreAvailabilityWithAvailableKinds:(id)arg1 error:(id)arg2 ;
-(BOOL)hasUserGeneratedVibrationsCapability;
-(NSString *)simplifiedDeviceCodeName;
-(BOOL)hasVibratorCapability;
-(void)_handleStoreAvailableItemKindsChangedNotification:(id)arg1 ;
-(void)_checkRingtoneStoreAvailability;
-(BOOL)isRingtoneStoreAvailable;
-(BOOL)wantsModernDefaultRingtone;
-(BOOL)hasSynchronizedEmbeddedVibrationsCapability;
-(void)dealloc;
-(NSString *)deviceCodeName;
@end

