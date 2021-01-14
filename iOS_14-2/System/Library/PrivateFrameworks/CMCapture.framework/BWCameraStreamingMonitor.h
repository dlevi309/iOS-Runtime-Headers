/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class STMediaStatusDomainPublisher, NSObject;

@interface BWCameraStreamingMonitor : NSObject {

	unsigned _cameraTypeBitMask;
	STMediaStatusDomainPublisher* _mediaStatusDomainPublisher;
	NSObject*<OS_dispatch_queue> _cameraStreamingMonitorQueue;
	BOOL _msnReportingEnabled;

}
+(void)initialize;
+(id)sharedCameraStreamingMonitor;
-(id)initWithMediaStatusDomainPublisher:(id)arg1 ;
-(void)setStreaming:(BOOL)arg1 portType:(id)arg2 clientAuditToken:(SCD_Struct_Fi80)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_init;
-(void)dealloc;
@end

