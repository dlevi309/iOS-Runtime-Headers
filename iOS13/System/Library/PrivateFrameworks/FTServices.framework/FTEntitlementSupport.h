/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)_setupCTServerConnection;
-(NSDictionary *)registrationState;
-(BOOL)faceTimeNonWiFiEntitled;
-(void)_updateEntitlementStatusUsingCTEntitlementsInfo:(CFDictionaryRef)arg1 ;
-(void)_cleanupMachInfo;
-(BOOL)_registerForCTEntitlementNotifications;
-(void)_unregisterForCTEntitlementNotifications;
-(void)_entitlementStatusChanged;
-(BOOL)_disconnectCTServerConnection;
-(BOOL)_reconnectCTServerConnectionIfNecessary;
-(id)_rawEntitlementValue;
-(void)_handleCTServiceRequestName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 contextInfo:(void*)arg3 ;
@end

