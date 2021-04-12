/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/


@protocol ICQUpgradeFlowManagerDelegate;
@class ICQOffer, ICQUpgradeFlowOptions, ICQUpgradeFlowManager, ICQRemoteContext, NSDate;

@interface ICQRemoteUpgradeFlowManager : NSObject {

	ICQOffer* _offer;
	ICQUpgradeFlowOptions* _flowOptions;
	id<ICQUpgradeFlowManagerDelegate> _delegate;
	ICQUpgradeFlowManager* _flowManager;
	ICQRemoteContext* _remoteContext;
	NSDate* _timeLastPresented;

}

@property (nonatomic,retain) ICQRemoteContext * remoteContext;                               //@synthesize remoteContext=_remoteContext - In the implementation block
@property (nonatomic,retain) NSDate * timeLastPresented;                                     //@synthesize timeLastPresented=_timeLastPresented - In the implementation block
@property (nonatomic,retain) ICQOffer * offer;                                               //@synthesize offer=_offer - In the implementation block
@property (nonatomic,copy) ICQUpgradeFlowOptions * flowOptions;                              //@synthesize flowOptions=_flowOptions - In the implementation block
@property (assign,nonatomic,__weak) id<ICQUpgradeFlowManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) ICQUpgradeFlowManager * flowManager;                     //@synthesize flowManager=_flowManager - In the implementation block
+(id)sharedManager;
+(void)renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
+(void)commonHeadersForRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setFlowManager:(ICQUpgradeFlowManager *)arg1 ;
-(id<ICQUpgradeFlowManagerDelegate>)delegate;
-(void)setDelegate:(id<ICQUpgradeFlowManagerDelegate>)arg1 ;
-(void)setOffer:(ICQOffer *)arg1 ;
-(ICQRemoteContext *)remoteContext;
-(ICQUpgradeFlowManager *)flowManager;
-(ICQOffer *)offer;
-(void)setRemoteContext:(ICQRemoteContext *)arg1 ;
-(void)setFlowOptions:(ICQUpgradeFlowOptions *)arg1 ;
-(ICQUpgradeFlowOptions *)flowOptions;
-(void)beginRemoteFlow;
-(NSDate *)timeLastPresented;
-(void)setTimeLastPresented:(NSDate *)arg1 ;
@end

