/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentViewPostProcessor.h>

@protocol SXComponentExposureMonitor, SXAnalyticsReportingProvider;
@class NSMapTable, NSString;

@interface SXExposureComponentViewPostProcessor : NSObject <SXComponentViewPostProcessor> {

	id<SXComponentExposureMonitor> _monitor;
	id<SXAnalyticsReportingProvider> _analyticsReporterProvider;
	NSMapTable* _exposedEvents;

}

@property (nonatomic,readonly) id<SXComponentExposureMonitor> monitor;                                  //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,readonly) id<SXAnalyticsReportingProvider> analyticsReporterProvider;              //@synthesize analyticsReporterProvider=_analyticsReporterProvider - In the implementation block
@property (nonatomic,readonly) NSMapTable * exposedEvents;                                              //@synthesize exposedEvents=_exposedEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXComponentExposureMonitor>)monitor;
-(NSMapTable *)exposedEvents;
-(void)processComponent:(id)arg1 view:(id)arg2 ;
-(id)initWithExposureMonitor:(id)arg1 analyticsReportingProvider:(id)arg2 ;
-(id<SXAnalyticsReportingProvider>)analyticsReporterProvider;
@end

