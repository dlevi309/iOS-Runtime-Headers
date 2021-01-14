/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString;

@interface WAAppData : NSObject <AADataEventType> {

	NSString* _appVersion;
	NSString* _appBuildNumber;

}

@property (nonatomic,readonly) NSString * appVersion;                  //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,readonly) NSString * appBuildNumber;              //@synthesize appBuildNumber=_appBuildNumber - In the implementation block
+(id)dataName;
-(NSString *)appBuildNumber;
-(id)toDict;
-(NSString *)appVersion;
-(id)initWithAppVersion:(id)arg1 appBuildNumber:(id)arg2 ;
@end

