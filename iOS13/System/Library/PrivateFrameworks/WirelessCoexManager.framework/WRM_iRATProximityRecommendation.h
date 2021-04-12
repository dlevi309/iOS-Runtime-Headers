/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
*/


@class WRM_iRATProximityRecommendationLogging;

@interface WRM_iRATProximityRecommendation : NSObject {

	BOOL _linkRecommendationIsValid;
	BOOL _linkIsRecommended;
	int _RecommendationType;
	WRM_iRATProximityRecommendationLogging* _metrics;

}

@property (assign,nonatomic) int RecommendationType;                                        //@synthesize RecommendationType=_RecommendationType - In the implementation block
@property (assign,nonatomic) BOOL linkRecommendationIsValid;                                //@synthesize linkRecommendationIsValid=_linkRecommendationIsValid - In the implementation block
@property (assign,nonatomic) BOOL linkIsRecommended;                                        //@synthesize linkIsRecommended=_linkIsRecommended - In the implementation block
@property (nonatomic,retain) WRM_iRATProximityRecommendationLogging * metrics;              //@synthesize metrics=_metrics - In the implementation block
-(id)init;
-(void)dealloc;
-(WRM_iRATProximityRecommendationLogging *)metrics;
-(void)setMetrics:(WRM_iRATProximityRecommendationLogging *)arg1 ;
-(int)RecommendationType;
-(BOOL)linkIsRecommended;
-(BOOL)linkRecommendationIsValid;
-(void)setRecommendationType:(int)arg1 ;
-(void)setLinkIsRecommended:(BOOL)arg1 ;
-(void)setLinkRecommendationIsValid:(BOOL)arg1 ;
@end

