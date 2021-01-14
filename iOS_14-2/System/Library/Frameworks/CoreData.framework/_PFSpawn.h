/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@interface _PFSpawn : NSObject {

	int _pid;
	int _termstatus;

}

@property (readonly) int processID; 
@property (readonly) int terminationStatus; 
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 ;
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3 ;
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3 redirect:(id)arg4 ;
-(int)processID;
-(void)waitUntilExit;
-(int)terminationStatus;
@end

