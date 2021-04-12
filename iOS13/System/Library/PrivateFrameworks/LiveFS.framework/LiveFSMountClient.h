/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)fixupConnectionFor:(id)arg1 ;
-(id)mounts:(id*)arg1 ;
-(id)unmountVolume:(id)arg1 how:(int)arg2 ;
-(id)unmountVolumeByID:(unsigned)arg1 how:(int)arg2 ;
-(void)unmountVolumeNamed:(id)arg1 providerName:(id)arg2 domainError:(id)arg3 how:(int)arg4 reply:(/*^block*/id)arg5 ;
-(int)verboseLevelOrError:(id*)arg1 ;
-(id)setVerboseLevel:(int)arg1 ;
@end

