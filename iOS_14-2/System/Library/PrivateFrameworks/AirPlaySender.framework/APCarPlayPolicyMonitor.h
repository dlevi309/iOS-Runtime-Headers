/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
*/

#import <AirPlaySender/AirPlaySender-Structs.h>
#import <libobjc.A.dylib/CRVehiclePolicyMonitoring.h>

@protocol OS_dispatch_queue, APCarPlayPolicyMonitorDelegate;
@class NSObject, CRVehiclePolicyMonitor, NSString;

@interface APCarPlayPolicyMonitor : NSObject <CRVehiclePolicyMonitoring> {

	NSObject*<OS_dispatch_queue> _queue;
	OpaqueFigCFWeakReferenceHolderRef _weakEndpoint;
	OpaqueFigEndpointRef _observedEndpoint;
	CRVehiclePolicyMonitor* _monitor;
	id<APCarPlayPolicyMonitorDelegate> _delegate;

}

@property (assign,nonatomic) id<APCarPlayPolicyMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<APCarPlayPolicyMonitorDelegate>)delegate;
-(id)initWithEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(void)willEnableVehicleTrackedByMonitor:(id)arg1 ;
-(void)willDisableVehicleTrackedByMonitor:(id)arg1 ;
-(void)setDelegate:(id<APCarPlayPolicyMonitorDelegate>)arg1 ;
-(void)dealloc;
-(void)endpointAuthenticationSucceeded;
@end

