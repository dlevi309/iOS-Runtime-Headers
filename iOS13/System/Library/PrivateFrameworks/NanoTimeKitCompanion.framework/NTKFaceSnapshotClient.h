/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface NTKFaceSnapshotClient : NSObject {

	NSXPCConnection* _connection;
	BOOL _registrationNeeded;
	NSObject*<OS_dispatch_queue> _snapshotFileQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_handleConnectionInterrupted;
-(void)_setupConnection;
-(void)snapshotFace:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_registerIfNeeded;
-(void)_handleCustomMonogramChangedNotification;
-(void)_handleSignificantLocationChangeNotification;
-(void)_handleActiveDeviceChangedNotification;
-(void)_updateAllSnapshots;
-(void)createFaceForPerformanceTesting:(long long)arg1 ;
-(void)requestSnapshotOfFace:(id)arg1 ;
-(void)performAfterCompletingCurrentlyPendingSnapshots:(/*^block*/id)arg1 ;
-(void)snapshotLibrarySelectedFaceForDeviceUUID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)synchronouslyUpdateAllSnapshots;
-(void)faceSnapshotChangedForKey:(id)arg1 ;
@end

