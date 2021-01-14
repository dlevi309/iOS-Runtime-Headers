/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


#import <FTServices/FTServices-Structs.h>
@class NSMutableDictionary, NSArray, NSNumber;

@interface FTUserConfiguration : NSObject {

	NSMutableDictionary* _cellularDataAvailableCache;
	NSMutableDictionary* _wifiAllowedCache;
	NSMutableDictionary* _nonBTAllowedCache;
	network_usage_policy_client_sRef _usageClient;
	BOOL _shouldCacheCTConnection;
	CTServerConnectionRef _ctServerConnection;

}

@property (assign,nonatomic) CTServerConnectionRef ctServerConnection;                                         //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nonBTAllowedCache;                                          //@synthesize nonBTAllowedCache=_nonBTAllowedCache - In the implementation block
@property (assign,nonatomic) BOOL shouldCacheCTConnection;                                                     //@synthesize shouldCacheCTConnection=_shouldCacheCTConnection - In the implementation block
@property (nonatomic,readonly) BOOL _nonWifiFaceTimeEntitled; 
@property (assign,nonatomic) BOOL cellularFaceTimeEnabled; 
@property (assign,nonatomic) BOOL allowAnyNetwork; 
@property (nonatomic,copy) NSArray * selectedPhoneNumberRegistrationSubscriptionLabels; 
@property (nonatomic,copy,readonly) NSNumber * selectedPhoneNumberRegistrationSubscriptionNumber; 
@property (assign,nonatomic) BOOL isDeviceInDualPhoneIdentityMode; 
@property (assign,nonatomic) BOOL isDeviceInManualPhoneSelectionMode; 
+(id)sharedInstance;
-(void)setIsDeviceInDualPhoneIdentityMode:(BOOL)arg1 ;
-(BOOL)shouldCacheCTConnection;
-(BOOL)_nonWifiFaceTimeEntitled;
-(BOOL)_getCellularDataEnabledForBundleID:(id)arg1 ;
-(id)init;
-(NSArray *)selectedPhoneNumberRegistrationSubscriptionLabels;
-(BOOL)_adequateInternalOrCarrierInstall;
-(void)_clearCaches;
-(NSMutableDictionary *)nonBTAllowedCache;
-(BOOL)wifiAllowedForBundleId:(id)arg1 ;
-(BOOL)_getNonBluetoothDataAllowedForBundleID:(id)arg1 ;
-(void)_setupUsageHandlerIfNeeded;
-(void)setAllowAnyNetwork:(BOOL)arg1 ;
-(NSNumber *)selectedPhoneNumberRegistrationSubscriptionNumber;
-(void)setCellularFaceTimeEnabled:(BOOL)arg1 ;
-(CTServerConnectionRef)ctServerConnection;
-(BOOL)nonBluetoothAllowedForBundleId:(id)arg1 ;
-(void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)arg1 ;
-(void)setIsDeviceInManualPhoneSelectionMode:(BOOL)arg1 ;
-(void)setCtServerConnection:(CTServerConnectionRef)arg1 ;
-(BOOL)allowAnyNetwork;
-(BOOL)_getWifiDataAllowedForBundleID:(id)arg1 ;
-(BOOL)cellularDataEnabledForBundleId:(id)arg1 ;
-(void)_setAppCellularDataEnabled:(BOOL)arg1 ;
-(void)setSelectedPhoneNumberRegistrationSubscriptionLabels:(NSArray *)arg1 ;
-(BOOL)cellularFaceTimeEnabled;
-(BOOL)isDeviceInManualPhoneSelectionMode;
-(BOOL)isDeviceInDualPhoneIdentityMode;
-(void)setNonBTAllowedCache:(NSMutableDictionary *)arg1 ;
-(void)setShouldCacheCTConnection:(BOOL)arg1 ;
-(void)dealloc;
@end

