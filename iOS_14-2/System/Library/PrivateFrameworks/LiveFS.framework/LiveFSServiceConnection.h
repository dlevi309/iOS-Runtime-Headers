/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/

#import <libobjc.A.dylib/NSFileProviderLiveItemCore.h>
#import <libobjc.A.dylib/NSFileProviderLiveItemConnectionMaker.h>

@protocol NSFileProviderLiveItemImplementation, OS_dispatch_queue;
@class LiveFSServiceMountPoint, NSXPCConnection, NSObject;

@interface LiveFSServiceConnection : NSObject <NSFileProviderLiveItemCore, NSFileProviderLiveItemConnectionMaker> {

	LiveFSServiceMountPoint*<NSFileProviderLiveItemImplementation> mount;
	unsigned long long _ourID;
	NSXPCConnection* ourConnection;
	NSObject*<OS_dispatch_queue> setUpdateInterestQueue;

}

@property (readonly) unsigned long long ourID;              //@synthesize ourID=_ourID - In the implementation block
+(id)newExportObjectForObject:(id)arg1 connection:(id)arg2 error:(id*)arg3 ;
+(id)newConnectionForMount:(id)arg1 connection:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)ourID;
-(void)connectionWasInvalidated;
-(void)dealloc;
-(void)connectionWasInterrupted;
-(void)LIGetRootFileHandle:(/*^block*/id)arg1 ;
-(void)LIGetRootFileHandleWithError:(/*^block*/id)arg1 ;
-(void)LIGetDomainAttributes:(/*^block*/id)arg1 ;
-(void)LIGetAttr:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)LISetAttr:(id)arg1 setAttrs:(id)arg2 forPID:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)LILookup:(id)arg1 name:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)LIReclaim:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)LICreate:(id)arg1 named:(id)arg2 withAttrs:(id)arg3 forPID:(int)arg4 reply:(/*^block*/id)arg5 ;
-(void)LIMakeDir:(id)arg1 named:(id)arg2 withAttrs:(id)arg3 forPID:(int)arg4 reply:(/*^block*/id)arg5 ;
-(void)LIMakeSymLink:(id)arg1 named:(id)arg2 withContents:(id)arg3 andAttrs:(id)arg4 forPID:(int)arg5 reply:(/*^block*/id)arg6 ;
-(void)LIMakeLink:(id)arg1 named:(id)arg2 inDirectory:(id)arg3 forPID:(int)arg4 reply:(/*^block*/id)arg5 ;
-(void)LIMakeClone:(id)arg1 named:(id)arg2 inDirectory:(id)arg3 withAttrs:(id)arg4 andFlags:(unsigned)arg5 forPID:(int)arg6 reply:(/*^block*/id)arg7 ;
-(void)LIOpen:(id)arg1 withMode:(int)arg2 forPID:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)LIClose:(id)arg1 withMode:(int)arg2 forPID:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)LIRead:(id)arg1 atOffset:(unsigned long long)arg2 withBuffer:(id)arg3 forPID:(int)arg4 reply:(/*^block*/id)arg5 ;
-(void)LIRead:(id)arg1 length:(unsigned long long)arg2 atOffset:(unsigned long long)arg3 forPID:(int)arg4 reply:(/*^block*/id)arg5 ;
-(void)LIWrite:(id)arg1 atOffset:(unsigned long long)arg2 withBuffer:(id)arg3 forPID:(int)arg4 reply:(/*^block*/id)arg5 ;
-(void)LIReadLink:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)LIRemove:(id)arg1 name:(id)arg2 forPID:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)LIRemoveDir:(id)arg1 name:(id)arg2 forPID:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)LIRename:(id)arg1 name:(id)arg2 toDir:(id)arg3 andName:(id)arg4 withFlags:(unsigned)arg5 forPID:(int)arg6 reply:(/*^block*/id)arg7 ;
-(void)LIReadDir:(id)arg1 intoBuffer:(id)arg2 forCookie:(unsigned long long)arg3 andVerifier:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)LIReadDirAndAttrs:(id)arg1 intoBuffer:(id)arg2 forCookie:(unsigned long long)arg3 andVerifier:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)LIReadDir:(id)arg1 amount:(unsigned long long)arg2 forCookie:(unsigned long long)arg3 andVerifier:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)LIReadDirAndAttrs:(id)arg1 amount:(unsigned long long)arg2 forCookie:(unsigned long long)arg3 andVerifier:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)LIStatFS:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)LIPathConf:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)LIGetFsAttr:(id)arg1 name:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)LISetFsAttr:(id)arg1 name:(id)arg2 value:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)LIGetXattr:(id)arg1 name:(id)arg2 forPID:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)LISetXattr:(id)arg1 name:(id)arg2 value:(id)arg3 how:(int)arg4 forPID:(int)arg5 reply:(/*^block*/id)arg6 ;
-(void)LIListXattrs:(id)arg1 forPID:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)LISetUpdateInterest:(id)arg1 interest:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)LISearch:(id)arg1 token:(id)arg2 criteria:(id)arg3 resumeAt:(id)arg4 maxData:(unsigned)arg5 maxDelay:(double)arg6 initialCredits:(unsigned)arg7 reply:(/*^block*/id)arg8 ;
-(void)LISearchReplenishCredits:(id)arg1 credits:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)LISearchAbort:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)LIAccessCheck:(id)arg1 requestedAccess:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)LIVerifyExistenceWithFileIDs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)LIGetParentsAndAttributesForFileIDs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)LIGetPathsAndAttributesForFileIDs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)scrubOurClientId;
-(id)initForMount:(id)arg1 connection:(id)arg2 error:(id*)arg3 ;
-(id)sanitizedAttrsForNewObjectAttrs:(id)arg1 forType:(unsigned)arg2 ;
@end
