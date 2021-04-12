/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class NSString, NSURL;

@interface WFAttribution : NSObject

@property (readonly) NSString * sourceName; 
@property (readonly) NSString * localizedSourceAttribution; 
@property (readonly) NSURL * sourceAttributionURL; 
+(id)platformSpecializedWeatherSourceAttributionURLForTrafficParameter:(id)arg1 ;
+(id)weatherSourceAttributionURLForTrafficParameter:(id)arg1 ;
+(id)sharedAttribution;
-(NSString *)sourceName;
-(NSURL *)sourceAttributionURL;
-(NSString *)localizedSourceAttribution;
-(id)sourceAttributionImageForStyle:(unsigned long long)arg1 ;
@end

