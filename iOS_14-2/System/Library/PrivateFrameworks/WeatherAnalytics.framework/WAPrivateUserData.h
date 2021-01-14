/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString;

@interface WAPrivateUserData : NSObject <AADataEventType> {

	NSString* _privateUserID;

}

@property (nonatomic,readonly) NSString * privateUserID;              //@synthesize privateUserID=_privateUserID - In the implementation block
+(id)dataName;
-(id)toDict;
-(id)initWithPrivateUserID:(id)arg1 ;
-(NSString *)privateUserID;
@end

