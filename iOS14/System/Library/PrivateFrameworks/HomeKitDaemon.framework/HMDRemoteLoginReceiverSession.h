/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)sessionID;
-(HMDRemoteLoginAuthentication *)remoteAuthentication;
-(id)completion;
-(id)description;
-(void)dealloc;
-(id)initWithSessionID:(id)arg1 remoteAuthentication:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

