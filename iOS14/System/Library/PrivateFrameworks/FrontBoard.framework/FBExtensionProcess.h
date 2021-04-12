/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)hostPID;
-(FBProcess *)hostProcess;
-(void)_finishInit;
-(id)succinctDescriptionBuilder;
-(BOOL)isExtensionProcess;
-(FBSExtensionInfo *)extensionInfo;
@end

