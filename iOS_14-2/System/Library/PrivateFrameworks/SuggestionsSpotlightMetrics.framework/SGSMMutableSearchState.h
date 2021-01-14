/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)commit;
-(void)scoreAsOtherConversion;
-(id)init;
-(void)scoreAsNonOpportunity;
-(void)scoreAsContactResult;
-(BOOL)justEngaged;
-(void)resetJustEngaged;
-(void)setJustEngaged;
-(id)description;
-(void)scoreAsContactConversion;
-(BOOL)isFirstTimeSeeingResult:(id)arg1 ;
-(void)scoreAsCuratedOrPseudoContactOpportunity;
-(void)resetConversionCounts;
-(void)resetCounts;
-(void)scoreAsContactOpportunity;
-(void)scoreAsContactLoss;
@end

