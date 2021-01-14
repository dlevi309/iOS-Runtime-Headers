/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class NSString, NSURL;

@interface WFAttribution : NSObject

@property (readonly) NSString * sourceName; 
@property (readonly) NSString * localizedSourceAttribution; 
@property (readonly) NSURL * sourceAttributionURL; 
+(id)sharedAttribution;
+(id)platformSpecializedWeatherSourceAttributionURLForTrafficParameter:(id)arg1 ;
+(id)weatherSourceAttributionURLForTrafficParameter:(id)arg1 ;
-(id)sourceAttributionImageForStyle:(unsigned long long)arg1 ;
-(NSURL *)sourceAttributionURL;
-(NSString *)localizedSourceAttribution;
-(NSString *)sourceName;
@end

