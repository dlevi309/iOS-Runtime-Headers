/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<APCarPlayPolicyMonitorDelegate>)delegate;
-(void)setDelegate:(id<APCarPlayPolicyMonitorDelegate>)arg1 ;
-(id)initWithEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(void)willEnableVehicleTrackedByMonitor:(id)arg1 ;
-(void)willDisableVehicleTrackedByMonitor:(id)arg1 ;
-(void)endpointAuthenticationSucceeded;
@end

