/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAnalyticsReporting.h>

@protocol SXAnalyticsReporting;
@class NSString;

@interface SXAnalyticsReporterProxy : NSObject <SXAnalyticsReporting> {

	id<SXAnalyticsReporting> _analyticsReporter;

}

@property (nonatomic,__weak,readonly) id<SXAnalyticsReporting> analyticsReporter;              //@synthesize analyticsReporter=_analyticsReporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reportEvent:(id)arg1 ;
-(id<SXAnalyticsReporting>)analyticsReporter;
-(id)initWithAnalyticsReporter:(id)arg1 ;
@end

