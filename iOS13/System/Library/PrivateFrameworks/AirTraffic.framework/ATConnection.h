/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <libobjc.A.dylib/ATConnectionDelegate.h>

@protocol ATConnectionDelegate;
@class NSXPCConnection, NSMutableArray, NSObject, NSString;

@interface ATConnection : NSObject <ATConnectionDelegate> {

	NSXPCConnection* _xpcConnection;
	BOOL _registerForStatus;
	NSMutableArray* _registeredDataclasses;
	int _atcRunningToken;
	BOOL _atcRunning;
	NSObject*<ATConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<ATConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSObject*<ATConnectionDelegate>)delegate;
-(void)setDelegate:(NSObject*<ATConnectionDelegate>)arg1 ;
-(void)cancelSync;
-(void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2 ;
-(void)connectionWasInterrupted:(id)arg1 ;
-(void)_sendStatusRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(void)initiateAssetDownloadSessionsWithCompletion:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)connection:(id)arg1 updatedAssets:(id)arg2 ;
-(void)_handleDisconnect;
-(void)_sendStatusRegistration;
-(void)openDeviceMessageLinkWithPriority:(int)arg1 ;
-(void)requestSyncForLibrary:(id)arg1 ;
-(void)requestSyncForPairedDeviceWithPriority:(int)arg1 ;
-(void)requestKeybagSyncToPairedDevice;
-(void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2 ;
-(void)registerForStatus;
-(void)unregisterForStatus;
-(void)registerForAssetProgressForDataclass:(id)arg1 ;
-(void)clearSyncData;
-(void)lowBatteryNotification;
-(void)keepATCAlive:(BOOL)arg1 ;
-(BOOL)isSyncing:(BOOL*)arg1 automatically:(BOOL*)arg2 wirelessly:(BOOL*)arg3 ;
-(void)openDeviceMessageLink;
-(id)restoreDeviceWithIdentifier:(id)arg1 ;
-(id)getAssetMetrics;
-(BOOL)getDataRestoreIsComplete;
@end

