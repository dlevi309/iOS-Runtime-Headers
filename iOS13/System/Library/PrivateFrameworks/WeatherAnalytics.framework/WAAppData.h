/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString, NSNumber;

@interface WAAppData : NSObject <AADataEventType> {

	NSString* _appVersion;
	NSNumber* _appBuild;

}

@property (nonatomic,readonly) NSString * appVersion;              //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * appBuild;                //@synthesize appBuild=_appBuild - In the implementation block
+(id)dataName;
-(NSString *)appVersion;
-(NSNumber *)appBuild;
-(id)toDict;
-(id)initWithAppVersion:(id)arg1 appBuild:(id)arg2 ;
@end

