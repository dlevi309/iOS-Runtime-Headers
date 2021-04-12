/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


#import <FTServices/FTServices-Structs.h>
@class NSDictionary;

@interface FTEntitlementSupport : NSObject {

	CTServerConnectionRef _ctServerConnection;
	CFStringRef _entitlementStatus;

}

@property (nonatomic,readonly) BOOL faceTimeNonWiFiEntitled; 
@property (nonatomic,readonly) NSDictionary * registrationState; 
+(id)sharedInstance;
-(id)init;
-(BOOL)faceTimeNonWiFiEntitled;
-(void)_handleCTServiceRequestName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 contextInfo:(void*)arg3 ;
-(BOOL)_disconnectCTServerConnection;
-(BOOL)_registerForCTEntitlementNotifications;
-(NSDictionary *)registrationState;
-(BOOL)_setupCTServerConnection;
-(void)_updateEntitlementStatusUsingCTEntitlementsInfo:(CFDictionaryRef)arg1 ;
-(id)_rawEntitlementValue;
-(void)_entitlementStatusChanged;
-(void)_cleanupMachInfo;
-(BOOL)_reconnectCTServerConnectionIfNecessary;
-(void)_unregisterForCTEntitlementNotifications;
@end

