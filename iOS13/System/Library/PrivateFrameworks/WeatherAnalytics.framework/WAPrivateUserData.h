/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)privateUserID;
-(id)initWithPrivateUserID:(id)arg1 ;
@end

