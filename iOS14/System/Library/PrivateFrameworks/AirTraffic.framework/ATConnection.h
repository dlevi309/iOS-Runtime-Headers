/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)connectionWasInterrupted:(id)arg1 ;
-(void)registerForStatus;
-(void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2 ;
-(id)init;
-(NSObject*<ATConnectionDelegate>)delegate;
-(id)restoreDeviceWithIdentifier:(id)arg1 ;
-(void)keepATCAlive:(BOOL)arg1 ;
-(void)initiateAssetDownloadSessionsWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(NSObject*<ATConnectionDelegate>)arg1 ;
-(void)openDeviceMessageLinkWithPriority:(int)arg1 ;
-(void)requestSyncForLibrary:(id)arg1 ;
-(void)requestKeybagSyncToPairedDevice;
-(void)connection:(id)arg1 updatedAssets:(id)arg2 ;
-(void)requestSyncForPairedDeviceWithPriority:(int)arg1 ;
-(void)registerForAssetProgressForDataclass:(id)arg1 ;
-(void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2 ;
-(BOOL)getDataRestoreIsComplete;
-(void)clearSyncData;
-(void)_sendStatusRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)unregisterForStatus;
-(void)lowBatteryNotification;
-(id)getAssetMetrics;
-(void)_sendStatusRegistration;
-(void)openDeviceMessageLink;
-(BOOL)isSyncing:(BOOL*)arg1 automatically:(BOOL*)arg2 wirelessly:(BOOL*)arg3 ;
-(void)cancelSync;
-(void)dealloc;
-(void)_handleDisconnect;
@end

