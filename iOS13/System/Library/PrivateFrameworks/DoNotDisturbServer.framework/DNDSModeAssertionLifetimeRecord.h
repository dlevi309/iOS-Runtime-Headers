/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModeAssertionStoreRecordDictionaryEncoding.h>

@class NSString, NSNumber;

@interface DNDSModeAssertionLifetimeRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {

	NSString* _lifetimeType;
	NSString* _eventUniqueID;
	NSNumber* _occurrenceDate;
	NSNumber* _onlyDuringEvent;
	NSNumber* _startDate;
	NSNumber* _endDate;
	NSString* _scheduleIdentifier;
	NSString* _behavior;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * lifetimeType;                    //@synthesize lifetimeType=_lifetimeType - In the implementation block
@property (nonatomic,retain) NSString * eventUniqueID;                   //@synthesize eventUniqueID=_eventUniqueID - In the implementation block
@property (nonatomic,retain) NSNumber * occurrenceDate;                  //@synthesize occurrenceDate=_occurrenceDate - In the implementation block
@property (nonatomic,retain) NSNumber * onlyDuringEvent;                 //@synthesize onlyDuringEvent=_onlyDuringEvent - In the implementation block
@property (nonatomic,retain) NSNumber * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSNumber * endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSString * scheduleIdentifier;              //@synthesize scheduleIdentifier=_scheduleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * behavior;                        //@synthesize behavior=_behavior - In the implementation block
+(id)recordForDictionary:(id)arg1 keys:(const SCD_Struct_DN9*)arg2 ;
+(id)recordForAssertionLifetime:(id)arg1 ;
-(id)object;
-(NSNumber *)startDate;
-(NSNumber *)endDate;
-(void)setStartDate:(NSNumber *)arg1 ;
-(void)setEndDate:(NSNumber *)arg1 ;
-(NSString *)behavior;
-(void)setBehavior:(NSString *)arg1 ;
-(NSNumber *)occurrenceDate;
-(NSString *)lifetimeType;
-(NSString *)eventUniqueID;
-(NSString *)scheduleIdentifier;
-(void)setEventUniqueID:(NSString *)arg1 ;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
-(void)setLifetimeType:(NSString *)arg1 ;
-(void)setOnlyDuringEvent:(NSNumber *)arg1 ;
-(void)setOccurrenceDate:(NSNumber *)arg1 ;
-(void)setScheduleIdentifier:(NSString *)arg1 ;
-(NSNumber *)onlyDuringEvent;
@end

