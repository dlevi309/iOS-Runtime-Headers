/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class ACAccount, CerKRQOmMu7LBUoc;

@interface AMSGenerateFraudScoreTask : AMSTask {

	ACAccount* _account;
	unsigned long long _action;
	id<AMSBagProtocol> _bag;
	CerKRQOmMu7LBUoc* _scorer;

}

@property (nonatomic,retain) CerKRQOmMu7LBUoc * scorer;                //@synthesize scorer=_scorer - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                    //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) unsigned long long action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                 //@synthesize bag=_bag - In the implementation block
+(id)_fraudScoreCacheAccessQueue;
+(id)_fraudScoreCache;
+(id)cachedFraudScoreForPurchaseInfo:(id)arg1 ;
+(void)cacheFraudScore:(id)arg1 forPurchaseInfo:(id)arg2 ;
+(id)_serverEndpointIdentifierForFraudScoreAction:(unsigned long long)arg1 ;
-(ACAccount *)account;
-(CerKRQOmMu7LBUoc *)scorer;
-(id)runTask;
-(void)setScorer:(CerKRQOmMu7LBUoc *)arg1 ;
-(id)initWithAction:(unsigned long long)arg1 account:(id)arg2 bag:(id)arg3 ;
-(BOOL)_deviceSupportsFraudScores;
-(id)_generateFraudScore;
-(id)_createScorerWithError:(id*)arg1 ;
-(unsigned long long)action;
-(id<AMSBagProtocol>)bag;
-(id)initWithPurchaseInfo:(id)arg1 bag:(id)arg2 ;
@end

