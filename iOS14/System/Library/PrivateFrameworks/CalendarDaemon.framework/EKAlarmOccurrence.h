/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@class CADObjectID, NSDate, NSTimeZone, NSURL, NSString;

@interface EKAlarmOccurrence : NSObject {

	CADObjectID* _alarmID;
	CADObjectID* _ownerID;
	NSDate* _ownerDate;
	NSTimeZone* _ownerTimeZone;
	NSURL* _ownerURI;
	NSDate* _fireDate;
	NSString* _externalID;
	NSDate* _acknowledgedDate;

}

@property (nonatomic,readonly) CADObjectID * alarmID;                   //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,readonly) CADObjectID * ownerID;                   //@synthesize ownerID=_ownerID - In the implementation block
@property (nonatomic,readonly) NSDate * ownerDate;                      //@synthesize ownerDate=_ownerDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * ownerTimeZone;              //@synthesize ownerTimeZone=_ownerTimeZone - In the implementation block
@property (nonatomic,readonly) NSURL * ownerURI;                        //@synthesize ownerURI=_ownerURI - In the implementation block
@property (nonatomic,readonly) NSDate * fireDate;                       //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                   //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSDate * acknowledgedDate;               //@synthesize acknowledgedDate=_acknowledgedDate - In the implementation block
+(id)alarmOccurrenceWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSDate *)fireDate;
-(NSString *)externalID;
-(void)encodeWithCoder:(id)arg1 ;
-(CADObjectID *)ownerID;
-(CADObjectID *)alarmID;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)acknowledgedDate;
-(NSDate *)ownerDate;
-(NSURL *)ownerURI;
-(NSTimeZone *)ownerTimeZone;
-(id)initWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8 ;
@end

