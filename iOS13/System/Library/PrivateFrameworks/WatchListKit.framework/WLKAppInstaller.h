/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface WLKAppInstaller : NSObject {

	NSObject*<OS_dispatch_queue> _installQueue;
	NSMutableSet* _installSessions;

}
+(id)defaultAppInstaller;
-(id)init;
-(void)installAppForInstallable:(id)arg1 offer:(id)arg2 progressHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)installAppForInstallable:(id)arg1 progressHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

