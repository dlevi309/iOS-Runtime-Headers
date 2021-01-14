/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKFaceSnapshotClient.h>

@protocol NTKFaceSnapshotClient <NSObject>
@required
-(void)faceSnapshotChangedForKey:(id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface NTKFaceSnapshotClient : NSObject <NTKFaceSnapshotClient> {

	NSXPCConnection* _daemonConnection;
	BOOL _registrationNeeded;
	NSObject*<OS_dispatch_queue> _snapshotFileQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)_register;
-(void)dealloc;
-(void)_handleConnectionInterrupted;
-(void)snapshotFace:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_registerIfNeeded;
-(void)faceSnapshotChangedForKey:(id)arg1 ;
-(void)_setupDaemonConnection;
-(void)_handleCustomMonogramChangedNotification;
-(void)_handleSignificantLocationChangeNotification;
-(void)_handleActiveDeviceChangedNotification;
-(void)_updateAllSnapshots;
-(void)createFaceForPerformanceTesting:(long long)arg1 ;
-(void)requestSnapshotOfFace:(id)arg1 ;
-(void)performAfterCompletingCurrentlyPendingSnapshots:(/*^block*/id)arg1 ;
-(void)snapshotLibrarySelectedFaceForDeviceUUID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)synchronouslyUpdateAllSnapshots;
@end

