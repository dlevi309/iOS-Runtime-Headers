/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMDRemoteLoginAuthentication;

@interface HMDRemoteLoginReceiverSession : HMFObject {

	NSString* _sessionID;
	HMDRemoteLoginAuthentication* _remoteAuthentication;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) NSString * sessionID;                                             //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) HMDRemoteLoginAuthentication * remoteAuthentication;              //@synthesize remoteAuthentication=_remoteAuthentication - In the implementation block
@property (nonatomic,readonly) id completion;                                                    //@synthesize completion=_completion - In the implementation block
-(void)dealloc;
-(id)description;
-(id)completion;
-(NSString *)sessionID;
-(HMDRemoteLoginAuthentication *)remoteAuthentication;
-(id)initWithSessionID:(id)arg1 remoteAuthentication:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

