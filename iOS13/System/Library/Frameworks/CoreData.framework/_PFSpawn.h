/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)terminationStatus;
-(void)waitUntilExit;
-(int)processID;
@end

