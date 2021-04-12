/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
*/

#import <HIDAnalytics/HIDAnalytics-Structs.h>
#import <HIDAnalytics/HIDAnalyticsEvent.h>

@class HIDAnalyticsHistogramEventField;

@interface HIDAnalyticsHistogramEvent : HIDAnalyticsEvent {

	HIDAnalyticsHistogramEventField* _field;
	BOOL _isUpdated;

}
-(id)initWithAttributes:(id)arg1 description:(id)arg2 ;
-(void)setValue:(id)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2 ;
-(void)addField:(id)arg1 ;
-(void)addHistogramFieldWithSegments:(id)arg1 segments:(HIDAnalyticsHistogramSegmentConfig*)arg2 count:(long long)arg3 ;
-(id)value;
@end

