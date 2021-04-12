/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/

#import <LiveFS/LiveFSMount.h>

@protocol LiveFSMountDelegate;
@class NSObject, NSMutableDictionary, NSCondition;

@interface LiveFSService : NSObject <LiveFSMount> {

	NSObject*<LiveFSMountDelegate> delegate;
	NSMutableDictionary* listeners;
	NSMutableDictionary* descriptions;
	NSCondition* l;
	BOOL _initDone;

}
+(id)newServiceProxyObjectWithDelegate:(id)arg1 ;
-(void)dealloc;
-(void)LiveMountList:(/*^block*/id)arg1 ;
-(void)LiveMountListenerForVolume:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)LiveMountEjectVolume:(id)arg1 withFlags:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)LiveMountEjectDisk:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)LiveMountListenerForVolume:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)LiveMountSharesAtServer:(id)arg1 credentialType:(long long)arg2 credential:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)LiveMountAddVolume:(id)arg1 atServer:(id)arg2 credentialType:(long long)arg3 credential:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)LiveMountAddDisk:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)LiveMountAddVolume:(id)arg1 withListener:(id)arg2 andWithDescription:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)LiveMountCredentialTypes:(/*^block*/id)arg1 ;
-(id)initServiceProxyObjectWithDelegate:(id)arg1 ;
-(id)addVolume:(id)arg1 usingInterface:(id)arg2 connectionClass:(Class)arg3 queue:(id)arg4 andProxy:(id)arg5 withDescription:(id)arg6 ;
-(void)removeVolumeLocked:(id)arg1 ;
-(void)removeVolume:(id)arg1 ;
-(id)removeVolumeCluster:(id)arg1 ;
-(void)LiveMountEjectVolumeCluster:(id)arg1 withFlags:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)initializationFinished;
-(id)addVolume:(id)arg1 usingInterface:(id)arg2 connectionClass:(Class)arg3 andProxy:(id)arg4 withDescription:(id)arg5 ;
-(id)getUniqueVolumeName:(id)arg1 ;
-(id)addVolumeCluster:(id)arg1 ;
-(void)LiveMountEjectVolume:(id)arg1 reply:(/*^block*/id)arg2 ;
@end
