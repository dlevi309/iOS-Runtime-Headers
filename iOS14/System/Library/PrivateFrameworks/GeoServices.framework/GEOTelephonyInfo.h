/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedInfo;
+(BOOL)hasCellularCapability;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(int)cellularDataStateIfAvailable;
-(void)isMapsAuthorizedForCellular:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)setupClient;
-(id)init;
-(void)_updateMapsAuthed;
-(void)dataSettingsChanged:(id)arg1 ;
-(id)isDeviceAuthorizedForCellularIfAvailable;
-(id)cellularCarrierIfAvailable;
-(id)isMapsAuthorizedForCellularIfAvailable;
@end

