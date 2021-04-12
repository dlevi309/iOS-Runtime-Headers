/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>

@protocol OS_dispatch_queue;
@class CoreTelephonyClient, NSHashTable, NSObject, NSString;

@interface ENCoreTelephonyUtility : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate> {

	CoreTelephonyClient* _ctClient;
	CTServerConnectionRef _ctServerConnection;
	NSHashTable* _observersTable;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) CoreTelephonyClient * ctClient;                        //@synthesize ctClient=_ctClient - In the implementation block
@property (nonatomic,readonly) CTServerConnectionRef ctServerConnection;              //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (nonatomic,retain) NSHashTable * observersTable;                            //@synthesize observersTable=_observersTable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)countryCodeISOForMobileCountryCode:(id)arg1 ;
+(id)mobileCountryCodeForISO:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)cellMonitorUpdate:(id)arg1 info:(id)arg2 ;
-(CTServerConnectionRef)ctServerConnection;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(CoreTelephonyClient *)ctClient;
-(id)countryCodeISOForMobileCountryCode:(id)arg1 ;
-(void)setObserversTable:(NSHashTable *)arg1 ;
-(NSHashTable *)observersTable;
-(id)currentMobileCountryCode;
@end

