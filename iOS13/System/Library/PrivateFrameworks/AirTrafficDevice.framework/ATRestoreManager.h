/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <libobjc.A.dylib/ATEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/ATSessionObserver.h>
#import <libobjc.A.dylib/ATRestoreAssetLinkDelegate.h>

@protocol OS_dispatch_queue;
@class ATRestoreAssetLink, NSObject, MSVXPCTransaction, ATDeviceSettings, ATSession, NSString;

@interface ATRestoreManager : NSObject <ATEnvironmentMonitorObserver, ATSessionObserver, ATRestoreAssetLinkDelegate> {

	ATRestoreAssetLink* _restoreLink;
	ATRestoreAssetLink* _applicationDataRestoreLink;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _checkRestoreStatusQueue;
	BOOL _cancelled;
	BOOL _iTunesRestoreActive;
	BOOL _iCloudRestoreActive;
	BOOL _deviceRestoreActive;
	MSVXPCTransaction* _xpcTransaction;
	ATDeviceSettings* _settings;
	ATSession* _restoreSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)resume;
-(void)_start;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)sessionDidFinish:(id)arg1 ;
-(void)restoreAssetLinkDidCancelRestore:(id)arg1 ;
-(void)restoreSessionActiveWithCompletion:(/*^block*/id)arg1 ;
-(void)_checkActiveRestoreStateWithCompletion:(/*^block*/id)arg1 ;
-(void)setRestoreInProgress:(BOOL)arg1 ;
-(id)_dataClasses;
-(BOOL)_iCloudPhotoLibraryEnabled;
@end

