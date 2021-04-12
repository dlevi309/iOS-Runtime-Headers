/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


@protocol OS_dispatch_queue;
#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class NSObject;

@interface ICDeviceAccessManager : NSObject {

	sqlite3Ref _externalMediaAccessDB;
	NSObject*<OS_dispatch_queue> _deviceAccessQueue;

}

@property (assign) NSObject*<OS_dispatch_queue> deviceAccessQueue;              //@synthesize deviceAccessQueue=_deviceAccessQueue - In the implementation block
+(id)sharedAccessManager;
-(id)init;
-(void)dealloc;
-(id)bundleIdentifiersAccessingExternalCameras;
-(void)revokeApplicationWithBundleIdentifier:(id)arg1 ;
-(void)updateApplicationWithBundleIdentifier:(id)arg1 withStatus:(BOOL)arg2 ;
-(id)bundleIdentifiersAccessingExternalCamerasWithStatus;
-(void)addApplicationWithBundleIdentifier:(id)arg1 whitelist:(BOOL)arg2 ;
-(BOOL)validateBundleIdentifier:(id)arg1 withNotification:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)deviceAccessQueue;
-(void)revokeControlApplicationWithBundleIdentifier:(id)arg1 ;
-(BOOL)internalApplicationWithBundleIdentifierHasAccess:(id)arg1 ;
-(BOOL)validateBundleIdentifierInstallDate:(id)arg1 control:(BOOL)arg2 ;
-(BOOL)applicationWithBundleIdentifierHasAccess:(id)arg1 enabled:(BOOL*)arg2 ;
-(void)displayAlertForApplication:(id)arg1 notificationDict:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)bundleIdentifiersControllingExternalCameras;
-(BOOL)controlApplicationWithBundleIdentifierHasAccess:(id)arg1 ;
-(void)addControlApplicationWithBundleIdentifier:(id)arg1 whitelisted:(BOOL)arg2 ;
-(BOOL)validateControlApplicationBundleIdentifier:(id)arg1 withNotification:(id)arg2 ;
-(void)setDeviceAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

