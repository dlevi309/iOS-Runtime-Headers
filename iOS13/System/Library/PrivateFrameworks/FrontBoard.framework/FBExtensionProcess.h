/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBProcess.h>

@class FBSExtensionInfo, FBProcess;

@interface FBExtensionProcess : FBProcess {

	FBSExtensionInfo* _extensionInfo;
	int _hostPID;
	os_unfair_lock_s _hostProcessLock;
	FBProcess* _lock_hostProcess;

}

@property (nonatomic,readonly) FBSExtensionInfo * extensionInfo;              //@synthesize extensionInfo=_extensionInfo - In the implementation block
@property (nonatomic,readonly) FBProcess * hostProcess; 
@property (nonatomic,readonly) int hostPID;                                   //@synthesize hostPID=_hostPID - In the implementation block
-(id)succinctDescriptionBuilder;
-(FBProcess *)hostProcess;
-(int)hostPID;
-(id)initWithHandle:(id)arg1 identity:(id)arg2 hostPID:(int)arg3 ;
-(id)initWithHandle:(id)arg1 identity:(id)arg2 executionContext:(id)arg3 ;
-(id)initWithHandle:(id)arg1 identity:(id)arg2 hostProcess:(id)arg3 ;
-(BOOL)isExtensionProcess;
-(FBSExtensionInfo *)extensionInfo;
@end

