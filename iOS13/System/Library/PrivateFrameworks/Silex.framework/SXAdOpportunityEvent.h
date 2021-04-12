/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSString, NSError, SXADBannerView;

@interface SXAdOpportunityEvent : SXAnalyticsEvent {

	BOOL _expanded;
	BOOL _shown;
	int _opportunityError;
	NSString* _opportunityIdentifier;
	double _positionInArticle;
	NSString* _componentIdentifier;
	NSError* _error;
	SXADBannerView* _bannerView;

}

@property (nonatomic,retain) NSString * opportunityIdentifier;              //@synthesize opportunityIdentifier=_opportunityIdentifier - In the implementation block
@property (assign,nonatomic) double positionInArticle;                      //@synthesize positionInArticle=_positionInArticle - In the implementation block
@property (nonatomic,retain) NSString * componentIdentifier;                //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (assign,nonatomic) int opportunityError;                          //@synthesize opportunityError=_opportunityError - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SXADBannerView * bannerView;                   //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                 //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL shown;                                    //@synthesize shown=_shown - In the implementation block
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(NSString *)componentIdentifier;
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(SXADBannerView *)bannerView;
-(void)setBannerView:(SXADBannerView *)arg1 ;
-(BOOL)shown;
-(NSString *)opportunityIdentifier;
-(double)positionInArticle;
-(void)setPositionInArticle:(double)arg1 ;
-(void)setOpportunityError:(int)arg1 ;
-(int)opportunityError;
-(void)setOpportunityIdentifier:(NSString *)arg1 ;
-(void)setShown:(BOOL)arg1 ;
@end

