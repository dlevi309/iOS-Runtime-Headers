/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


@class NSMutableArray, PTPCameraDeviceManager, MSCameraDeviceManager;

@interface ICMasterDeviceBrowser : NSObject {

	NSMutableArray* _devices;
	NSMutableArray* _browsers;
	NSMutableArray* _suspendedBrowsers;
	long long _numberOfBrowsingBrowsers;
	PTPCameraDeviceManager* _ptpDevManager;
	MSCameraDeviceManager* _msDevManager;

}

@property (readonly) NSMutableArray * devices;               //@synthesize devices=_devices - In the implementation block
@property (readonly) NSMutableArray * browsers;              //@synthesize browsers=_browsers - In the implementation block
+(BOOL)exists;
+(id)defaultBrowser;
-(id)init;
-(void)dealloc;
-(NSMutableArray *)devices;
-(NSMutableArray *)browsers;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(int)start:(id)arg1 ;
-(void)stop:(id)arg1 ;
-(void)addBrowser:(id)arg1 ;
-(BOOL)startPTPCameraBrowser;
-(BOOL)startMSCameraBrowser;
-(void)removeBrowser:(id)arg1 ;
-(id)deviceWithDelegate:(id)arg1 ;
@end

