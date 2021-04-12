/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableArray, NSObject, PTPCameraDeviceManager, MSCameraDeviceManager;

@interface ICMasterDeviceBrowser : NSObject {

	NSMutableArray* _devices;
	NSMutableArray* _browsers;
	NSMutableArray* _suspendedBrowsers;
	long long _numberOfBrowsingBrowsers;
	NSObject*<OS_dispatch_source> _suspensionTimer;
	NSObject*<OS_dispatch_queue> _suspensionTimerQueue;
	PTPCameraDeviceManager* _ptpDevManager;
	MSCameraDeviceManager* _msDevManager;

}

@property (readonly) NSMutableArray * devices;               //@synthesize devices=_devices - In the implementation block
@property (readonly) NSMutableArray * browsers;              //@synthesize browsers=_browsers - In the implementation block
+(BOOL)exists;
+(id)defaultBrowser;
-(int)start:(id)arg1 ;
-(NSMutableArray *)devices;
-(id)init;
-(void)notifySuspension:(unsigned long long)arg1 ;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(NSMutableArray *)browsers;
-(void)stop:(id)arg1 ;
-(BOOL)startMSCameraBrowser;
-(void)addBrowser:(id)arg1 ;
-(BOOL)startPTPCameraBrowser;
-(void)removeBrowser:(id)arg1 ;
-(id)deviceWithDelegate:(id)arg1 ;
-(void)runSuspensionTimer:(BOOL)arg1 ;
-(void)dealloc;
@end

