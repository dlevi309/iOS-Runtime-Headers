/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/


@class ICQRemoteContext;

@interface ICQRemotePresentationManager : NSObject {

	ICQRemoteContext* _remoteContext;

}

@property (nonatomic,readonly) ICQRemoteContext * remoteContext;              //@synthesize remoteContext=_remoteContext - In the implementation block
-(ICQRemoteContext *)remoteContext;
-(id)initWithRemoteContext:(id)arg1 ;
-(void)presentHiddenFreshmintFlowWithEndpoint:(id)arg1 ;
@end

