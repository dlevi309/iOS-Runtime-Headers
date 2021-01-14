/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString, NSDate;

@interface AAEventData : NSObject <AADataEventType> {

	 eventID;
	 eventPath;
	 sessionID;
	 appSessionID;

}

@property (readonly,nonatomic) NSString * eventID; 
@property (readonly,nonatomic) NSDate * eventDate; 
@property (readonly,nonatomic) NSString * eventPath; 
@property (readonly,nonatomic) NSString * sessionID; 
@property (readonly,nonatomic) NSString * appSessionID; 
+(id)dataName;
-(NSString *)eventID;
-(id)toDict;
-(NSString *)sessionID;
-(id)init;
-(NSString *)eventPath;
-(NSString *)appSessionID;
-(NSDate *)eventDate;
@end

