/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEONavdAnalyticsReporter;
@interface GEONavdAnalyticsManager : NSObject {

	id<GEONavdAnalyticsReporter> _analyticsReporter;

}

@property (nonatomic,retain) id<GEONavdAnalyticsReporter> analyticsReporter;              //@synthesize analyticsReporter=_analyticsReporter - In the implementation block
+(id)sharedManager;
-(id<GEONavdAnalyticsReporter>)analyticsReporter;
-(void)setAnalyticsReporter:(id<GEONavdAnalyticsReporter>)arg1 ;
@end

