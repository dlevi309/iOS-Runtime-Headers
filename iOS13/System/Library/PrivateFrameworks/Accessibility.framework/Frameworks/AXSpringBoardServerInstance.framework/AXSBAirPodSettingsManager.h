/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
*/


@protocol OS_dispatch_queue;
#import <AXSpringBoardServerInstance/AXSpringBoardServerInstance-Structs.h>
@class NSPointerArray, NSObject, AXDispatchTimer, NSMutableSet;

@interface AXSBAirPodSettingsManager : NSObject {

	NSPointerArray* _deviceListeners;
	BTSessionImplRef _session;
	BTLocalDeviceImplRef _localDevice;
	BTAccessoryManagerImplRef _accessoryManager;
	NSObject*<OS_dispatch_queue> _queue;
	AXDispatchTimer* _delayTimer;
	NSMutableSet* _deviceMap;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)start;
-(void)_applySettings;
-(id)initSharedInstance;
-(void)_probeAccessories;
-(void)_didConnectWithSession:(BTSessionImplRef)arg1 ;
-(void)_didDisconnect;
-(void)_beginDetach;
-(void)_retrieveSettingsFromNewDevices:(id)arg1 ;
-(void)_retrieveSettingsForAddress:(id)arg1 ;
-(void)_applySettingsForAddress:(id)arg1 ;
-(void)_serviceEventForDevice:(BTDeviceImplRef)arg1 serviceMask:(unsigned)arg2 eventType:(int)arg3 specificEvent:(unsigned)arg4 result:(int)arg5 ;
-(void)_accessoryEventForManager:(BTAccessoryManagerImplRef)arg1 event:(int)arg2 device:(BTDeviceImplRef)arg3 state:(int)arg4 ;
-(void)_sessionEventForSession:(BTSessionImplRef)arg1 event:(int)arg2 result:(int)arg3 ;
@end

