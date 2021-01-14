/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRestoreInProgress:(BOOL)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(id)init;
-(void)_checkActiveRestoreStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_start;
-(id)_dataClasses;
-(BOOL)_iCloudPhotoLibraryEnabled;
-(void)restoreAssetLinkDidCancelRestore:(id)arg1 ;
-(void)restoreSessionActiveWithCompletion:(/*^block*/id)arg1 ;
-(void)sessionDidFinish:(id)arg1 ;
-(void)resume;
@end

