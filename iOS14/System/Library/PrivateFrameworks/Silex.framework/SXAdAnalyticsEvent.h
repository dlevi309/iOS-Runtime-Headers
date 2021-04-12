/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSString;

@interface SXAdAnalyticsEvent : SXAnalyticsEvent {

	NSString* _adCampaign;
	NSString* _adLine;
	NSString* _adCreative;
	NSString* _impressionIdentifier;
	double _impressionThreshold;

}

@property (nonatomic,readonly) NSString * adCampaign;                        //@synthesize adCampaign=_adCampaign - In the implementation block
@property (nonatomic,readonly) NSString * adLine;                            //@synthesize adLine=_adLine - In the implementation block
@property (nonatomic,readonly) NSString * adCreative;                        //@synthesize adCreative=_adCreative - In the implementation block
@property (nonatomic,readonly) NSString * impressionIdentifier;              //@synthesize impressionIdentifier=_impressionIdentifier - In the implementation block
@property (nonatomic,readonly) double impressionThreshold;                   //@synthesize impressionThreshold=_impressionThreshold - In the implementation block
-(NSString *)adLine;
-(double)impressionThreshold;
-(id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5 ;
-(NSString *)adCampaign;
-(NSString *)adCreative;
-(NSString *)impressionIdentifier;
@end

