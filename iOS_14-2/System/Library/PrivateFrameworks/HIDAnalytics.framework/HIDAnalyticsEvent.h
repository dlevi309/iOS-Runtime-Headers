/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
*/


#import <HIDAnalytics/HIDAnalytics-Structs.h>
@class NSMutableDictionary, NSString, NSDictionary;

@interface HIDAnalyticsEvent : NSObject {

	NSMutableDictionary* _fields;
	BOOL _isUpdated;
	BOOL _isLogged;
	NSString* _name;
	NSDictionary* _desc;

}

@property (retain) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * desc;              //@synthesize desc=_desc - In the implementation block
@property (assign) BOOL isLogged;                    //@synthesize isLogged=_isLogged - In the implementation block
-(void)setDesc:(NSDictionary *)arg1 ;
-(id)initWithAttributes:(id)arg1 description:(id)arg2 ;
-(NSDictionary *)desc;
-(void)activate;
-(NSString *)name;
-(void)setValue:(id)arg1 ;
-(void)setIsLogged:(BOOL)arg1 ;
-(id)description;
-(void)setIntegerValue:(unsigned long long)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2 ;
-(void)addField:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)cancel;
-(void)addHistogramFieldWithSegments:(id)arg1 segments:(HIDAnalyticsHistogramSegmentConfig*)arg2 count:(long long)arg3 ;
-(id)value;
-(BOOL)isLogged;
@end

