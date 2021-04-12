/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<SXAnalyticsReporting>)analyticsReporter;
-(void)reportEvent:(id)arg1 ;
-(id)initWithAnalyticsReporter:(id)arg1 ;
@end

