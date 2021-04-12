/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


#import <FTServices/FTServices-Structs.h>
@class NSMutableDictionary, NSArray, NSNumber;

@interface FTUserConfiguration : NSObject {

	NSMutableDictionary* _cellularDataAvailableCache;
	NSMutableDictionary* _wifiAllowedCache;
	NSMutableDictionary* _nonBTAllowedCache;
	network_usage_policy_client_sRef _usageClient;
	CTServerConnectionRef _ctServerConnection;

}

@property (assign,nonatomic) CTServerConnectionRef ctServerConnection;                                         //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nonBTAllowedCache;                                          //@synthesize nonBTAllowedCache=_nonBTAllowedCache - In the implementation block
@property (nonatomic,readonly) BOOL _nonWifiFaceTimeEntitled; 
@property (assign,nonatomic) BOOL cellularFaceTimeEnabled; 
@property (assign,nonatomic) BOOL allowAnyNetwork; 
@property (nonatomic,copy) NSArray * selectedPhoneNumberRegistrationSubscriptionLabels; 
@property (nonatomic,copy,readonly) NSNumber * selectedPhoneNumberRegistrationSubscriptionNumber; 
@property (assign,nonatomic) BOOL isDeviceInDualPhoneIdentityMode; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)allowAnyNetwork;
-(void)_clearCaches;
-(BOOL)wifiAllowedForBundleId:(id)arg1 ;
-(BOOL)_nonWifiFaceTimeEntitled;
-(BOOL)isDeviceInDualPhoneIdentityMode;
-(BOOL)cellularDataEnabledForBundleId:(id)arg1 ;
-(NSArray *)selectedPhoneNumberRegistrationSubscriptionLabels;
-(void)setSelectedPhoneNumberRegistrationSubscriptionLabels:(NSArray *)arg1 ;
-(void)setIsDeviceInDualPhoneIdentityMode:(BOOL)arg1 ;
-(NSNumber *)selectedPhoneNumberRegistrationSubscriptionNumber;
-(CTServerConnectionRef)ctServerConnection;
-(void)_setupUsageHandlerIfNeeded;
-(NSMutableDictionary *)nonBTAllowedCache;
-(BOOL)_getCellularDataEnabledForBundleID:(id)arg1 ;
-(BOOL)_getWifiDataAllowedForBundleID:(id)arg1 ;
-(void)_setAppCellularDataEnabled:(BOOL)arg1 ;
-(BOOL)_adequateInternalOrCarrierInstall;
-(void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)arg1 ;
-(BOOL)_getNonBluetoothDataAllowedForBundleID:(id)arg1 ;
-(BOOL)cellularFaceTimeEnabled;
-(BOOL)nonBluetoothAllowedForBundleId:(id)arg1 ;
-(void)setCellularFaceTimeEnabled:(BOOL)arg1 ;
-(void)setAllowAnyNetwork:(BOOL)arg1 ;
-(void)setNonBTAllowedCache:(NSMutableDictionary *)arg1 ;
-(void)setCtServerConnection:(CTServerConnectionRef)arg1 ;
@end

