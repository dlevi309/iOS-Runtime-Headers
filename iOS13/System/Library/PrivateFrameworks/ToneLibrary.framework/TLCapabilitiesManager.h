/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)isHomePod;
-(BOOL)hasVibratorCapability;
-(BOOL)_hasTelephonyCapability;
-(BOOL)wantsModernDefaultRingtone;
-(NSString *)deviceCodeName;
-(NSString *)simplifiedDeviceCodeName;
-(BOOL)hasSynchronizedVibrationsCapability;
-(BOOL)hasSynchronizedEmbeddedVibrationsCapability;
-(void)_handleStoreAvailableItemKindsChangedNotification:(id)arg1 ;
-(void)_checkRingtoneStoreAvailability;
-(void)_updateRingtoneStoreAvailabilityWithAvailableKinds:(id)arg1 error:(id)arg2 ;
-(BOOL)isRingtoneStoreAvailable;
-(BOOL)isAlertToneStoreAvailable;
-(BOOL)hasUserGeneratedVibrationsCapability;
@end

