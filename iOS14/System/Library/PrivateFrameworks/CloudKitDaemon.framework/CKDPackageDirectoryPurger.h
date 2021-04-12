/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)schedulePeriodicPurgesInDirectory:(id)arg1 ;
+(id)sharedPurger;
-(void)purgeDirectory:(id)arg1 ;
-(id)init;
-(void)registerXPCActivity;
-(void)addRootDirectory:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableArray *)rootDirectories;
-(void)purgeRootDirectory:(id)arg1 ;
-(void)purgeAll;
@end

