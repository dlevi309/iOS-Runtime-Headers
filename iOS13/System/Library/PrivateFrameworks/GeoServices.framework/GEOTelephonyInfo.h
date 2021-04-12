/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@protocol OS_dispatch_queue;
@class CoreTelephonyClient, NSConditionLock, NSObject, NSString;

@interface GEOTelephonyInfo : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {

	CTServerConnectionRef _telephonyConnection;
	CoreTelephonyClient* _telephonyClient;
	NSConditionLock* _carrierLock;
	NSConditionLock* _deviceAuthLock;
	NSConditionLock* _mapsAuthLock;
	NSObject*<OS_dispatch_queue> _telephonyQueue;
	NSString* _carrier;
	BOOL _deviceAuthorized;
	BOOL _mapsAuthorized;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasCellularCapability;
+(id)sharedInfo;
-(id)init;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(void)dataSettingsChanged:(id)arg1 ;
-(void)setupClient;
-(void)_updateMapsAuthed;
-(id)cellularCarrier;
-(id)cellularCarrierIfAvailable;
-(BOOL)isDeviceAuthorizedForCellular;
-(id)isDeviceAuthorizedForCellularIfAvailable;
-(BOOL)isMapsAuthorizedForCellular;
-(id)isMapsAuthorizedForCellularIfAvailable;
-(int)cellularDataStateIfAvailable;
@end

