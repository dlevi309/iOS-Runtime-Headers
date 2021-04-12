/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSObject, FigCaptureClientSessionMonitor;

@interface BWCameraStreamingMonitor : NSObject {

	unsigned _cameraTypeBitMask;
	NSObject*<OS_dispatch_queue> _cameraStreamingMonitorQueue;
	FigCaptureClientSessionMonitor* _clientSessionMonitor;
	BOOL _msnReportingEnabled;

}
+(void)initialize;
+(id)sharedCameraStreamingMonitor;
-(void)dealloc;
-(id)_init;
-(void)setStreaming:(BOOL)arg1 portType:(id)arg2 clientAuditToken:(SCD_Struct_BW60)arg3 ;
@end

