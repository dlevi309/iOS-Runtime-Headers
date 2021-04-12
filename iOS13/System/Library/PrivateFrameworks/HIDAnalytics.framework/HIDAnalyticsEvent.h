/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
*/


#import <HIDAnalytics/HIDAnalytics-Structs.h>
@class NSMutableDictionary, NSString, NSDictionary;

@interface HIDAnalyticsEvent : NSObject {

	NSMutableDictionary* _fields;
	BOOL _isUpdated;
	NSString* _name;
	NSDictionary* _desc;

}

@property (retain) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * desc;              //@synthesize desc=_desc - In the implementation block
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)cancel;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 ;
-(void)addField:(id)arg1 ;
-(void)activate;
-(NSDictionary *)desc;
-(void)setDesc:(NSDictionary *)arg1 ;
-(id)initWithAttributes:(id)arg1 description:(id)arg2 ;
-(void)addHistogramFieldWithSegments:(id)arg1 segments:(HIDAnalyticsHistogramSegmentConfig*)arg2 count:(long long)arg3 ;
-(void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2 ;
@end

