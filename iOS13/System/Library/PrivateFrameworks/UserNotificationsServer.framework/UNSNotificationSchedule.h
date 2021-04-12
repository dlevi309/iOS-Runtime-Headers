/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class NSDate;

@interface UNSNotificationSchedule : NSObject {

	NSDate* _previousTriggerDate;

}

@property (nonatomic,retain) NSDate * previousTriggerDate;              //@synthesize previousTriggerDate=_previousTriggerDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)_dateFormatter;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setPreviousTriggerDate:(NSDate *)arg1 ;
-(NSDate *)previousTriggerDate;
@end

