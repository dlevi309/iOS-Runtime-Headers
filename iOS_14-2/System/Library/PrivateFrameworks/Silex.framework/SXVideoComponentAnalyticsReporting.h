/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAnalyticsReporting.h>

@protocol SXAnalyticsReporting;
@class SXVideoComponent, NSString;

@interface SXVideoComponentAnalyticsReporting : NSObject <SXAnalyticsReporting> {

	SXVideoComponent* _component;
	id<SXAnalyticsReporting> _analyticsReporting;

}

@property (nonatomic,readonly) SXVideoComponent * component;                                    //@synthesize component=_component - In the implementation block
@property (nonatomic,__weak,readonly) id<SXAnalyticsReporting> analyticsReporting;              //@synthesize analyticsReporting=_analyticsReporting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXAnalyticsReporting>)analyticsReporting;
-(void)reportEvent:(id)arg1 ;
-(SXVideoComponent *)component;
-(id)initWithComponent:(id)arg1 analyticsProviding:(id)arg2 ;
@end

