/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface CKDPackageDirectoryPurger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _rootDirectories;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * rootDirectories;                //@synthesize rootDirectories=_rootDirectories - In the implementation block
+(id)sharedPurger;
+(void)schedulePeriodicPurgesInDirectory:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)purgeAll;
-(NSMutableArray *)rootDirectories;
-(void)purgeRootDirectory:(id)arg1 ;
-(void)purgeDirectory:(id)arg1 ;
-(void)registerXPCActivity;
-(void)addRootDirectory:(id)arg1 ;
@end

