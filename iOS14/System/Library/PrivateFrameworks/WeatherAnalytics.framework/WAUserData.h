/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)toDict;
-(NSString *)userID;
-(id)initWithUserID:(id)arg1 userStartDate:(id)arg2 ;
-(NSNumber *)userStartDate;
@end

