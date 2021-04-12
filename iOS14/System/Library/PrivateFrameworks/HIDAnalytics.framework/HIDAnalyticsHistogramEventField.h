/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
*/

#import <HIDAnalytics/HIDAnalytics-Structs.h>
#import <HIDAnalytics/HIDAnalyticsEventFieldProtocol.h>

@class NSString;

@interface HIDAnalyticsHistogramEventField : NSObject <HIDAnalyticsEventFieldProtocol> {

	unsigned char _segmentCount;
	HIDAnalyticsHistogramSegment* _segments;
	NSString* _fieldName;

}

@property (readonly) NSString * fieldName;                          //@synthesize fieldName=_fieldName - In the implementation block
@property (retain) id value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createBuckets:(HIDAnalyticsHistogramSegmentConfig*)arg1 count:(long long)arg2 ;
-(void)setValue:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 segments:(HIDAnalyticsHistogramSegmentConfig*)arg2 count:(long long)arg3 ;
-(void)setIntegerValue:(unsigned long long)arg1 ;
-(NSString *)fieldName;
-(id)value;
-(void)dealloc;
@end

