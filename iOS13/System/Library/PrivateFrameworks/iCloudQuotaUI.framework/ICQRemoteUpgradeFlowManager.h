/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/


@protocol ICQUpgradeFlowManagerDelegate;
@class ICQOffer, ICQUpgradeFlowOptions, ICQRemoteContext;

@interface ICQRemoteUpgradeFlowManager : NSObject {

	ICQOffer* _offer;
	ICQUpgradeFlowOptions* _flowOptions;
	id<ICQUpgradeFlowManagerDelegate> _delegate;
	ICQRemoteContext* _remoteContext;

}

@property (nonatomic,retain) ICQRemoteContext * remoteContext;                               //@synthesize remoteContext=_remoteContext - In the implementation block
@property (nonatomic,retain) ICQOffer * offer;                                               //@synthesize offer=_offer - In the implementation block
@property (nonatomic,copy) ICQUpgradeFlowOptions * flowOptions;                              //@synthesize flowOptions=_flowOptions - In the implementation block
@property (assign,nonatomic,__weak) id<ICQUpgradeFlowManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
+(void)commonHeadersForRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(id<ICQUpgradeFlowManagerDelegate>)delegate;
-(void)setDelegate:(id<ICQUpgradeFlowManagerDelegate>)arg1 ;
-(ICQRemoteContext *)remoteContext;
-(ICQOffer *)offer;
-(void)setOffer:(ICQOffer *)arg1 ;
-(void)setRemoteContext:(ICQRemoteContext *)arg1 ;
-(void)setFlowOptions:(ICQUpgradeFlowOptions *)arg1 ;
-(ICQUpgradeFlowOptions *)flowOptions;
-(void)beginRemoteFlow;
@end

