/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
*/

#import <APTransport/APTransport-Structs.h>
#import <libobjc.A.dylib/CARSessionRequestHandling.h>

@protocol OS_dispatch_queue;
@class NSObject, CARSessionRequestAgent, NSString;

@interface APCarSessionRequestHandler : NSObject <CARSessionRequestHandling> {

	NSObject*<OS_dispatch_queue> _queue;
	CFSetRef _carPlayHelpers;
	CARSessionRequestAgent* _agent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startSessionWithHost:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)cancelRequests;
-(void)prepareForRemovingWiFiUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startAdvertisingCarPlayControlForUSB;
-(void)startAdvertisingCarPlayControlForWiFiUUID:(id)arg1 ;
-(void)dealloc;
-(void)addCarPlayHelper:(OpaqueAPCarPlayHelperHelperRef)arg1 ;
-(void)_startAdvertisingCarPlayControlForUSB;
-(void)_startAdvertisingCarPlayControlForWiFiUUID:(id)arg1 ;
-(void)removeCarPlayHelper:(OpaqueAPCarPlayHelperHelperRef)arg1 ;
-(void)checkCarPlayControlAdvertisingForUSB;
-(void)checkCarPlayControlAdvertisingForWiFiUUID:(id)arg1 ;
@end

