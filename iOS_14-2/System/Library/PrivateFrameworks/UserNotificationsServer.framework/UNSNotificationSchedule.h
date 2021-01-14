/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class NSDate;

@interface UNSNotificationSchedule : NSObject {

	NSDate* _previousTriggerDate;

}

@property (nonatomic,retain) NSDate * previousTriggerDate;              //@synthesize previousTriggerDate=_previousTriggerDate - In the implementation block
-(id)_dateFormatter;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPreviousTriggerDate:(NSDate *)arg1 ;
-(NSDate *)previousTriggerDate;
@end

