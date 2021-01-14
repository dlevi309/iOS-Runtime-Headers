/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString;

@interface WAReferralData : NSObject <AADataEventType> {

	NSString* _referringApplication;
	NSString* _referringUrl;

}

@property (nonatomic,readonly) NSString * referringApplication;              //@synthesize referringApplication=_referringApplication - In the implementation block
@property (nonatomic,readonly) NSString * referringUrl;                      //@synthesize referringUrl=_referringUrl - In the implementation block
+(id)dataName;
-(NSString *)referringUrl;
-(id)toDict;
-(NSString *)referringApplication;
-(id)initWithReferringApplication:(id)arg1 referringUrl:(id)arg2 ;
@end

