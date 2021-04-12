/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
*/

#import <HIDAnalytics/HIDAnalytics-Structs.h>
#import <HIDAnalytics/HIDAnalyticsEvent.h>

@class HIDAnalyticsHistogramEventField;

@interface HIDAnalyticsHistogramEvent : HIDAnalyticsEvent {

	HIDAnalyticsHistogramEventField* _field;
	BOOL _isUpdated;

}
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 ;
-(void)addField:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 description:(id)arg2 ;
-(void)addHistogramFieldWithSegments:(id)arg1 segments:(HIDAnalyticsHistogramSegmentConfig*)arg2 count:(long long)arg3 ;
-(void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2 ;
@end

