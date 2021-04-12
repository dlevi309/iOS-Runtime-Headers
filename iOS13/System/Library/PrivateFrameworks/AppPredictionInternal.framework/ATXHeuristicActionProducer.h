/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXActionProducer.h>

@protocol ATXActionProducerDelegate;
@class NSString;

@interface ATXHeuristicActionProducer : NSObject <ATXActionProducer> {

	id _expireNotificationHandle;
	id<ATXActionProducerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATXActionProducerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)actionExperienceForScoredHeuristicAction:(id)arg1 ;
+(double)generateScoreForHeuristic:(id)arg1 ;
+(double)computeHeuristicEngagementScoreWithPriorAlpha:(int)arg1 priorBeta:(int)arg2 confirms:(double)arg3 rejects:(double)arg4 totalConfirms:(double)arg5 totalRejects:(double)arg6 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<ATXActionProducerDelegate>)delegate;
-(void)setDelegate:(id<ATXActionProducerDelegate>)arg1 ;
-(id)actionPredictionBlacklist;
-(id)produceActions;
-(id)digitalHealthBlacklist;
-(id)bundleIdForAction:(id)arg1 ;
-(id)blacklistSubstitutionForBundleId:(id)arg1 ;
-(BOOL)isActionBlacklisted:(id)arg1 ;
-(BOOL)userAlreadyEngagedWithAction:(id)arg1 ;
@end

