/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SuggestionsSpotlightMetrics.framework/SuggestionsSpotlightMetrics
*/


@class SGMContactOpportunityInSpotlight, SGMContactResultInSpotlight, SGMContactResultSelectedInSpotlight, SGMNoResultSelectedInSpotlight, SGMOtherResultSelectedInSpotlight, NSMutableSet;

@interface SGSMMutableSearchState : NSObject {

	SGMContactOpportunityInSpotlight* _contactOpportunity;
	SGMContactResultInSpotlight* _contactResult;
	SGMContactResultSelectedInSpotlight* _contactSelected;
	SGMNoResultSelectedInSpotlight* _noneSelected;
	SGMOtherResultSelectedInSpotlight* _otherSelected;
	unsigned short _contactResultCount;
	unsigned short _contactOpportunityCount;
	unsigned char _contactConversionCount;
	unsigned char _contactLossCount;
	unsigned short _curatedOrPseudoContactOpportunityCount;
	unsigned char _otherSelectedCount;
	unsigned char _nonOpportunityCount;
	BOOL _justEngaged;
	NSMutableSet* _resultsSeen;

}
-(id)init;
-(id)description;
-(void)commit;
-(void)resetCounts;
-(BOOL)isFirstTimeSeeingResult:(id)arg1 ;
-(void)resetConversionCounts;
-(void)scoreAsNonOpportunity;
-(void)scoreAsOtherConversion;
-(void)scoreAsContactResult;
-(void)scoreAsContactOpportunity;
-(void)scoreAsCuratedOrPseudoContactOpportunity;
-(void)scoreAsContactConversion;
-(void)scoreAsContactLoss;
-(void)setJustEngaged;
-(void)resetJustEngaged;
-(BOOL)justEngaged;
@end

