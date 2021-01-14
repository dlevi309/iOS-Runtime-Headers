/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/SystemConfiguration/CaptiveNetworkSupport.bundle/CaptiveNetworkSupport
*/

#import <CaptiveNetworkSupport/CaptiveNetworkSupport-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@protocol OS_dispatch_queue;
@class CoreTelephonyClient, NSObject, NSString;

@interface CarrierSettingsStatusIndicator : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate> {

	CoreTelephonyClient* _coreTelephonyClient;
	NSObject*<OS_dispatch_queue> _queue;
	/*function pointer*/void* _callback;
	CFRunLoopRef _runloop;
	CFStringRef _runloopMode;

}

@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign) /*function pointer*/void* callback;                               //@synthesize callback=_callback - In the implementation block
@property (assign) CFRunLoopRef runloop;                                             //@synthesize runloop=_runloop - In the implementation block
@property (assign) CFStringRef runloopMode;                                          //@synthesize runloopMode=_runloopMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)carrierBundleChange:(id)arg1 ;
-(/*function pointer*/void*)callback;
-(void)preferredDataSimChanged:(id)arg1 ;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(void)setRunloop:(CFRunLoopRef)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)setCallback:(/*function pointer*/void*)arg1 ;
-(void)createConnection;
-(id)init;
-(void)setRunloopMode:(CFStringRef)arg1 ;
-(CFRunLoopRef)runloop;
-(CFStringRef)runloopMode;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

