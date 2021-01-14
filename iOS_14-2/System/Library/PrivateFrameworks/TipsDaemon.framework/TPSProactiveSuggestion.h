/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/


@class ATXProactiveSuggestionClientModel, TPSTipStatusController, NSArray;

@interface TPSProactiveSuggestion : NSObject {

	ATXProactiveSuggestionClientModel* _clientModel;
	TPSTipStatusController* _tipStatusController;
	NSArray* _eligibleTips;

}

@property (nonatomic,retain) NSArray * eligibleTips;              //@synthesize eligibleTips=_eligibleTips - In the implementation block
-(id)suggestions;
-(void)invalidateSuggestions;
-(id)initWithTipStatusController:(id)arg1 ;
-(NSArray *)eligibleTips;
-(id)suggestionFromTip:(id)arg1 ;
-(void)sendSuggestions:(id)arg1 ;
-(long long)frequencyControlledConfidenceRatingForTip:(id)arg1 withScore:(float)arg2 ;
-(float)scoreForTip:(id)arg1 ;
-(void)sendSuggestions;
-(void)setEligibleTips:(NSArray *)arg1 ;
@end

