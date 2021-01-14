/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableDictionary;

@interface GEOThrottlerAnalyticsFormatter : NSObject {

	NSMutableDictionary* _throttlerAggregatedInfo;

}
+(id)sharedThrottlerFormatter;
-(void)addThrottledReqForKeyPath:(id)arg1 at:(id)arg2 ;
-(id)init;
-(BOOL)hasInitialInfoForKeyPath:(id)arg1 ;
-(int)networkServiceForRequestKind:(SCD_Struct_GE91)arg1 ;
-(int)throttleTypeForString:(id)arg1 ;
-(void)captureThrottledReqsForKeyPath:(id)arg1 maxReqCount:(id)arg2 policyTimeWindow:(double)arg3 ;
-(int)throttleModeForString:(id)arg1 ;
-(void)setRequestInfoForKeyPath:(id)arg1 at:(id)arg2 kind:(SCD_Struct_GE91)arg3 appId:(id)arg4 ;
-(BOOL)hasThrottledInfoForKeyPath:(id)arg1 ;
@end

