/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class NSURL, NSArray;

@interface BRCDatabaseBackupManager : NSObject {

	NSURL* _userURL;
	NSURL* _outputUserURL;
	NSURL* _destinationDirectory;

}

@property (nonatomic,retain) NSURL * userURL;                               //@synthesize userURL=_userURL - In the implementation block
@property (nonatomic,retain) NSURL * outputUserURL;                         //@synthesize outputUserURL=_outputUserURL - In the implementation block
@property (nonatomic,retain) NSURL * destinationDirectory;                  //@synthesize destinationDirectory=_destinationDirectory - In the implementation block
@property (nonatomic,readonly) NSURL * databaseURL; 
@property (nonatomic,readonly) NSArray * urlPropertiesToFetch; 
-(NSURL *)databaseURL;
-(NSURL *)userURL;
-(void)setUserURL:(NSURL *)arg1 ;
-(id)initWithUserURL:(id)arg1 outputUserURL:(id)arg2 ;
-(id)desiredBackupDataDirectoryForUserURL:(id)arg1 ;
-(NSURL *)destinationDirectory;
-(BOOL)enumerateRootURL:(id)arg1 usingBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)enumerateURL:(id)arg1 rootURL:(id)arg2 usingBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(NSArray *)urlPropertiesToFetch;
-(void)backUpWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)cleanOnDisk;
-(NSURL *)outputUserURL;
-(void)setOutputUserURL:(NSURL *)arg1 ;
-(void)setDestinationDirectory:(NSURL *)arg1 ;
@end

