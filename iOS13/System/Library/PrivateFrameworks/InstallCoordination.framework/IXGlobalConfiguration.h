/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/


#import <InstallCoordination/InstallCoordination-Structs.h>
@class NSURL;

@interface IXGlobalConfiguration : NSObject {

	os_unfair_lock_s _dynamicPropertyLock;
	NSURL* _systemContainerPath;
	NSURL* _mobileHome;
	NSURL* _rootPath;

}

@property (nonatomic,readonly) NSURL * mobileHome;                       //@synthesize mobileHome=_mobileHome - In the implementation block
@property (nonatomic,readonly) NSURL * rootPath;                         //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,readonly) NSURL * systemContainerPath;              //@synthesize systemContainerPath=_systemContainerPath - In the implementation block
@property (nonatomic,readonly) NSURL * oldSupportDirectory; 
@property (nonatomic,readonly) NSURL * frameworkURL; 
@property (nonatomic,readonly) NSURL * userVolumeURL; 
+(id)sharedInstance;
-(id)init;
-(void)createDirectories;
-(NSURL *)rootPath;
-(NSURL *)oldSupportDirectory;
-(id)_systemContainerURLWithError:(id*)arg1 ;
-(id)dataDirectoryWithError:(id*)arg1 ;
-(id)promiseStagingRootDirectoryWithError:(id*)arg1 ;
-(NSURL *)mobileHome;
-(id)dataDirectoryAbortingOnError;
-(id)promiseStagingRootDirectoryAbortingOnError;
-(NSURL *)frameworkURL;
-(NSURL *)userVolumeURL;
-(NSURL *)systemContainerPath;
@end

