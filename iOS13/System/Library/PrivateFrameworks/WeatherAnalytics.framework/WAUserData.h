/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString, NSNumber;

@interface WAUserData : NSObject <AADataEventType> {

	NSString* _userID;
	NSNumber* _userStartDate;

}

@property (nonatomic,readonly) NSString * userID;                     //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) NSNumber * userStartDate;              //@synthesize userStartDate=_userStartDate - In the implementation block
+(id)dataName;
-(NSString *)userID;
-(NSNumber *)userStartDate;
-(id)toDict;
-(id)initWithUserID:(id)arg1 userStartDate:(id)arg2 ;
@end

