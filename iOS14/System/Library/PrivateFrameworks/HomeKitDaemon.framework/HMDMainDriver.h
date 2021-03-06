/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, HMDHomeManager, HMDAccessoryBrowser, HMDCloudManager;

@interface HMDMainDriver : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHomeManager* _homeManager;
	HMDAccessoryBrowser* _accessoryBrowser;
	HMDCloudManager* _cloudDataSyncManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMDHomeManager * homeManager;                        //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) HMDAccessoryBrowser * accessoryBrowser;              //@synthesize accessoryBrowser=_accessoryBrowser - In the implementation block
@property (nonatomic,retain) HMDCloudManager * cloudDataSyncManager;              //@synthesize cloudDataSyncManager=_cloudDataSyncManager - In the implementation block
+(id)driver;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)localeChanged;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)start;
-(void)setAccessoryBrowser:(HMDAccessoryBrowser *)arg1 ;
-(HMDAccessoryBrowser *)accessoryBrowser;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)executeBTAJob:(const char*)arg1 withXPCDict:(id)arg2 ;
-(void)logError:(id)arg1 component:(id)arg2 ;
-(void)initBackgroundTaskAgent;
-(HMDCloudManager *)cloudDataSyncManager;
-(void)setCloudDataSyncManager:(HMDCloudManager *)arg1 ;
@end

