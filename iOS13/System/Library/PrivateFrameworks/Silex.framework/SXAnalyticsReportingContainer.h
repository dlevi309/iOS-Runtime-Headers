/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXAnalyticsReporting> analyticsReporting;              //@synthesize analyticsReporting=_analyticsReporting - In the implementation block
-(id<SXAnalyticsReporting>)analyticsReporting;
-(void)registerAnalyticsReporting:(id)arg1 ;
@end

