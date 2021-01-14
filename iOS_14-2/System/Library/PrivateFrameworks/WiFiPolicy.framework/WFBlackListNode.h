/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@protocol WFBlacklistNetwork;
@class NSMutableArray;

@interface WFBlackListNode : NSObject {

	NSMutableArray* _blacklistMetrics;
	BOOL _enterprisePolicy;
	id<WFBlacklistNetwork> _networkDelegate;
	NSMutableArray* _blacklistTriggers;
	NSMutableArray* _blacklistedStatesCurrent;
	NSMutableArray* _blacklistedStatesHistory;

}

@property (retain) id<WFBlacklistNetwork> networkDelegate;                 //@synthesize networkDelegate=_networkDelegate - In the implementation block
@property (retain) NSMutableArray * blacklistTriggers;                     //@synthesize blacklistTriggers=_blacklistTriggers - In the implementation block
@property (retain) NSMutableArray * blacklistedStatesCurrent;              //@synthesize blacklistedStatesCurrent=_blacklistedStatesCurrent - In the implementation block
@property (retain) NSMutableArray * blacklistedStatesHistory;              //@synthesize blacklistedStatesHistory=_blacklistedStatesHistory - In the implementation block
@property (assign) BOOL enterprisePolicy;                                  //@synthesize enterprisePolicy=_enterprisePolicy - In the implementation block
-(void)setNetworkDelegate:(id<WFBlacklistNetwork>)arg1 ;
-(id<WFBlacklistNetwork>)networkDelegate;
-(void)dealloc;
-(void)addBlacklistedState:(unsigned long long)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3 ;
-(id)initWithBlacklistNetwork:(id)arg1 ;
-(void)addBlacklistTrigger:(unsigned long long)arg1 reasonData:(long long)arg2 bssid:(id)arg3 ;
-(NSMutableArray *)blacklistTriggers;
-(BOOL)enterprisePolicy;
-(void)addBlacklistedStateHistory:(id)arg1 state:(unsigned long long)arg2 reason:(unsigned long long)arg3 reasonData:(long long)arg4 ;
-(NSMutableArray *)blacklistedStatesCurrent;
-(void)processBlacklistedStateMetric:(id)arg1 unblacklisting:(BOOL)arg2 unblacklistingReason:(unsigned long long)arg3 ;
-(NSMutableArray *)blacklistedStatesHistory;
-(void)networkPruned;
-(BOOL)containsNetwork:(id)arg1 ;
-(BOOL)hasBlacklistedState:(unsigned long long)arg1 ;
-(id)_copyCreateBlacklistedState:(unsigned long long)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3 ;
-(BOOL)updateNetwork:(id)arg1 ;
-(void)setBlacklistTriggers:(NSMutableArray *)arg1 ;
-(void)setBlacklistedStatesCurrent:(NSMutableArray *)arg1 ;
-(void)setBlacklistedStatesHistory:(NSMutableArray *)arg1 ;
-(void)setEnterprisePolicy:(BOOL)arg1 ;
@end

