/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/


#import <InstallCoordination/InstallCoordination-Structs.h>
@class NSURL;

@interface IXGlobalConfiguration : NSObject {

	os_unfair_lock_s _dynamicPropertyLock;
	unsigned _daemonUID;
	unsigned _daemonGID;
	NSURL* _dataStorageHome;
	NSURL* _daemonUserHome;
	NSURL* _rootPath;

}

@property (nonatomic,readonly) NSURL * daemonUserHome;               //@synthesize daemonUserHome=_daemonUserHome - In the implementation block
@property (nonatomic,readonly) NSURL * rootPath;                     //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,readonly) NSURL * dataStorageHome;              //@synthesize dataStorageHome=_dataStorageHome - In the implementation block
@property (nonatomic,readonly) NSURL * frameworkURL; 
@property (nonatomic,readonly) NSURL * userVolumeURL; 
@property (nonatomic,readonly) unsigned daemonUID;                   //@synthesize daemonUID=_daemonUID - In the implementation block
@property (nonatomic,readonly) unsigned daemonGID;                   //@synthesize daemonGID=_daemonGID - In the implementation block
+(id)sharedInstance;
-(unsigned)daemonUID;
-(id)dataDirectoryAbortingOnError;
-(void)createDirectories;
-(id)init;
-(NSURL *)rootPath;
-(unsigned)daemonGID;
-(id)dataDirectoryWithError:(id*)arg1 ;
-(id)promiseStagingRootDirectoryWithError:(id*)arg1 ;
-(NSURL *)dataStorageHome;
-(id)_dataStorageHomeURLWithError:(id*)arg1 ;
-(NSURL *)daemonUserHome;
-(NSURL *)userVolumeURL;
-(id)promiseStagingRootDirectoryAbortingOnError;
-(NSURL *)frameworkURL;
@end

