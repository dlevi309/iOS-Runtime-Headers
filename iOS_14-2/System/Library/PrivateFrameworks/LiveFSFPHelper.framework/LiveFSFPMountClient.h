/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/

#import <LiveFS/LiveFSMountClient.h>

@interface LiveFSFPMountClient : LiveFSMountClient
+(id)newClientForProvider:(id)arg1 ;
+(id)locallyBuiltDomainStorageSuffix;
+(id)locallyBuildFPDomain:(id)arg1 displayName:(id)arg2 provider:(id)arg3 how:(int)arg4 ;
+(id)locallyDestroyFPDomain:(id)arg1 provider:(id)arg2 ;
-(id)fixupConnectionFor:(id)arg1 ;
-(id)mountVolume:(id)arg1 displayName:(id)arg2 provider:(id)arg3 domainError:(id)arg4 on:(id)arg5 how:(int)arg6 ;
-(id)mountVolume:(id)arg1 displayName:(id)arg2 provider:(id)arg3 on:(id)arg4 how:(int)arg5 ;
-(id)mountVolume:(id)arg1 provider:(id)arg2 on:(id)arg3 how:(int)arg4 ;
-(id)updateErrorStateForVolume:(id)arg1 provider:(id)arg2 domainError:(id)arg3 ;
@end

