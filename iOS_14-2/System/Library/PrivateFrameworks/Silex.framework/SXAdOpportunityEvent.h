/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)shown;
-(BOOL)expanded;
-(void)setBannerView:(SXADBannerView *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(SXADBannerView *)bannerView;
-(void)setShown:(BOOL)arg1 ;
-(NSString *)componentIdentifier;
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(void)setPositionInArticle:(double)arg1 ;
-(void)setOpportunityError:(int)arg1 ;
-(int)opportunityError;
-(void)setOpportunityIdentifier:(NSString *)arg1 ;
-(double)positionInArticle;
-(NSString *)opportunityIdentifier;
@end

