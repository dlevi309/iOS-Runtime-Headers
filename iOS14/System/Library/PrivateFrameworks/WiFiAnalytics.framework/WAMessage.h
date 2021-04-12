/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary;

@interface WAMessage : NSObject <NSCopying, NSSecureCoding> {

	NSString* _metricName;
	NSMutableDictionary* _metricInfo;
	long long _options;

}

@property (nonatomic,copy) NSString * metricName;                         //@synthesize metricName=_metricName - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * metricInfo;              //@synthesize metricInfo=_metricInfo - In the implementation block
@property (assign,nonatomic) long long options;                           //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)options;
-(void)addFieldForKey:(id)arg1 value:(id)arg2 options:(long long)arg3 ;
-(void)setOptions:(long long)arg1 ;
-(void)setMetricInfo:(NSMutableDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMetricName:(id)arg1 options:(long long)arg2 ;
-(void)setMetricName:(NSString *)arg1 ;
-(NSString *)metricName;
-(NSMutableDictionary *)metricInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

