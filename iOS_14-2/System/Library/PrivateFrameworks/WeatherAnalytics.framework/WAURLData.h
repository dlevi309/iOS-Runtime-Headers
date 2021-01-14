/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString;

@interface WAURLData : NSObject <AADataEventType> {

	NSString* _url;

}

@property (nonatomic,readonly) NSString * url;              //@synthesize url=_url - In the implementation block
+(id)dataName;
-(id)toDict;
-(NSString *)url;
-(id)initWithUrl:(id)arg1 ;
@end

