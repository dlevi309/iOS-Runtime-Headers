/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)installAppForInstallable:(id)arg1 progressHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installAppForInstallable:(id)arg1 offer:(id)arg2 progressHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
@end

