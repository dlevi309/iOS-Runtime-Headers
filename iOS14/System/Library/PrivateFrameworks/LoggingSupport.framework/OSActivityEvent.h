/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSUUID, NSString, NSDate, NSTimeZone;

@interface OSActivityEvent : NSObject {

	BOOL _persisted;
	int _processID;
	unsigned long long _processUniqueID;
	NSUUID* _processImageUUID;
	NSString* _processImagePath;
	unsigned long long _eventType;
	unsigned long long _parentActivityID;
	unsigned long long _activityID;
	unsigned long long _traceID;
	unsigned long long _threadID;
	unsigned long long _machTimestamp;
	NSDate* _timestamp;
	NSTimeZone* _timezone;
	NSUUID* _senderImageUUID;
	NSString* _senderImagePath;
	NSString* _eventMessage;
	timezone _tz;
	NSString* _timezoneName;
	timeval _timeGMT;

}

@property (nonatomic,readonly) timeval timeGMT;                                  //@synthesize timeGMT=_timeGMT - In the implementation block
@property (nonatomic,readonly) timezone tz;                                      //@synthesize tz=_tz - In the implementation block
@property (nonatomic,retain) NSString * timezoneName;                            //@synthesize timezoneName=_timezoneName - In the implementation block
@property (nonatomic,readonly) int processID;                                    //@synthesize processID=_processID - In the implementation block
@property (nonatomic,readonly) unsigned long long processUniqueID;               //@synthesize processUniqueID=_processUniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * processImageUUID;                   //@synthesize processImageUUID=_processImageUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * processImagePath;                 //@synthesize processImagePath=_processImagePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * process; 
@property (nonatomic,readonly) unsigned long long eventType;                     //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) unsigned long long parentActivityID;              //@synthesize parentActivityID=_parentActivityID - In the implementation block
@property (nonatomic,readonly) unsigned long long activityID;                    //@synthesize activityID=_activityID - In the implementation block
@property (nonatomic,readonly) unsigned long long traceID;                       //@synthesize traceID=_traceID - In the implementation block
@property (nonatomic,readonly) unsigned long long threadID;                      //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,readonly) unsigned long long machTimestamp;                 //@synthesize machTimestamp=_machTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSTimeZone * timezone;                       //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * senderImageUUID;                    //@synthesize senderImageUUID=_senderImageUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderImagePath;                  //@synthesize senderImagePath=_senderImagePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * sender; 
@property (nonatomic,copy) NSString * eventMessage;                              //@synthesize eventMessage=_eventMessage - In the implementation block
@property (nonatomic,readonly) BOOL persisted;                                   //@synthesize persisted=_persisted - In the implementation block
+(id)activityEventFromStreamEntry:(os_activity_stream_entry_s*)arg1 ;
-(NSString *)process;
-(timezone)tz;
-(NSTimeZone *)timezone;
-(NSString *)senderImagePath;
-(NSString *)sender;
-(int)processID;
-(id)properties;
-(unsigned long long)eventType;
-(void)_addProperties:(id)arg1 ;
-(void)fillFromStreamEntry:(os_activity_stream_entry_s*)arg1 eventMessage:(const char*)arg2 persisted:(BOOL)arg3 ;
-(unsigned long long)processUniqueID;
-(unsigned long long)parentActivityID;
-(unsigned long long)activityID;
-(NSString *)eventMessage;
-(void)setEventMessage:(NSString *)arg1 ;
-(NSString *)timezoneName;
-(void)setTimezoneName:(NSString *)arg1 ;
-(NSDate *)timestamp;
-(NSString *)processImagePath;
-(unsigned long long)machTimestamp;
-(void)_initWithProperties:(id)arg1 ;
-(id)description;
-(unsigned long long)traceID;
-(timeval)timeGMT;
-(unsigned long long)threadID;
-(NSUUID *)senderImageUUID;
-(NSUUID *)processImageUUID;
-(BOOL)persisted;
@end
