/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/


@protocol LiveFSMounterClientLiveFSMounterClientHelper;
@class NSXPCConnection, NSString, NSObject;

@interface LiveFSMountClient : NSObject {

	NSXPCConnection* conn;
	NSString* provider;
	NSObject*<LiveFSMounterClient>*<LiveFSMounterClientHelper> helper;

}
+(id)newClientForProvider:(id)arg1 ;
+(id)newClient;
-(id)initWithProvider:(id)arg1 ;
-(id)mounts:(id*)arg1 ;
-(id)fixupConnectionFor:(id)arg1 ;
-(id)allMounts:(id*)arg1 ;
-(id)unmountVolume:(id)arg1 how:(int)arg2 ;
-(id)unmountVolumeByID:(unsigned)arg1 how:(int)arg2 ;
-(void)unmountVolumeNamed:(id)arg1 providerName:(id)arg2 domainError:(id)arg3 how:(int)arg4 reply:(/*^block*/id)arg5 ;
-(int)verboseLevelOrError:(id*)arg1 ;
-(id)setVerboseLevel:(int)arg1 ;
@end

