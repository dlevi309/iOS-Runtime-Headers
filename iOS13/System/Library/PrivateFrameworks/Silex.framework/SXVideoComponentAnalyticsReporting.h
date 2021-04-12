/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SXVideoComponent *)component;
-(void)reportEvent:(id)arg1 ;
-(id<SXAnalyticsReporting>)analyticsReporting;
-(id)initWithComponent:(id)arg1 analyticsProviding:(id)arg2 ;
@end

