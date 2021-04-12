/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAnalyticsReportingContainer.h>

@protocol SXAnalyticsReportingContainer <SXAnalyticsReportingProvider>
@required
-(void)registerAnalyticsReporting:(id)arg1;

@end


@protocol SXAnalyticsReporting;
@class NSString;

@interface SXAnalyticsReportingContainer : NSObject <SXAnalyticsReportingContainer> {

	id<SXAnalyticsReporting> _analyticsReporting;

}

@property (nonatomic,readonly) id<SXAnalyticsReporting> analyticsReporting;              //@synthesize analyticsReporting=_analyticsReporting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerAnalyticsReporting:(id)arg1 ;
-(id<SXAnalyticsReporting>)analyticsReporting;
@end

