/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <SymptomAnalytics/ObjectAnalytics.h>

@interface UsageAnalytics : ObjectAnalytics
-(id)initWithWorkspace:(id)arg1 withCache:(BOOL)arg2 ;
-(id)init;
-(id)allUsageMarkersWithTag:(unsigned)arg1 ;
-(id)allUsageMarkersWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 ;
-(id)usageMarkersWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 fromDate:(id)arg3 untilDate:(id)arg4 ;
-(id)lastHappenedWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 ;
-(id)usageMarkersWithTag:(unsigned)arg1 fromDate:(id)arg2 untilDate:(id)arg3 ;
-(id)lastHappenedWithTag:(unsigned)arg1 ;
@end

