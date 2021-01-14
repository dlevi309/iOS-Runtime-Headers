/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

