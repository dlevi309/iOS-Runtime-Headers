/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <libobjc.A.dylib/OSLogEventProvider.h>

@class NSString, NSDate, NSTimeZone, NSUUID, OSLogEventBacktrace, OSLogEventDecomposedMessage;

@interface OSLogEventProxy : NSObject <OSLogEventProvider> {

	SCD_Struct_OS13* _eint;
	os_activity_map_sRef _aid_map;
	SCD_Struct_OS18* _event;
	unsigned long long _efv;
	os_timesync_db_sRef _tsdb;
	int _uuiddbfd;
	timezone _tz;
	BOOL _sensitive;
	BOOL _trackActivities;
	unsigned long long _thread;
	unsigned long long _retainCount;
	NSString* _processImagePath;
	NSString* _senderImagePath;
	OSLogEventBacktrace* _backtrace;
	NSString* _logMessage;
	BOOL _logMessageIsHidden;
	OSLogEventDecomposedMessage* _decomposedMessage;
	unsigned long long _uuidi;

}

@property (nonatomic,readonly) unsigned _oversizeIdentifier; 
@property (assign,nonatomic) unsigned long long _timesyncRangeUUIDIndex;                         //@synthesize uuidi=_uuidi - In the implementation block
@property (nonatomic,readonly) NSString * composedMessage; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long logType; 
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) unsigned long long timeToLive; 
@property (nonatomic,readonly) unsigned long long traceIdentifier; 
@property (nonatomic,readonly) unsigned long long threadIdentifier; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) timeval* unixDate; 
@property (nonatomic,readonly) timezone* unixTimeZone; 
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,readonly) unsigned long long activityIdentifier; 
@property (nonatomic,readonly) unsigned long long parentActivityIdentifier; 
@property (nonatomic,readonly) unsigned long long transitionActivityIdentifier; 
@property (nonatomic,readonly) NSUUID * bootUUID; 
@property (nonatomic,readonly) unsigned long long continuousNanosecondsSinceBoot; 
@property (nonatomic,readonly) unsigned long long machContinuousTimestamp; 
@property (nonatomic,readonly) NSUUID * processImageUUID; 
@property (nonatomic,readonly) const char* processImageUUIDBytes; 
@property (nonatomic,readonly) NSString * processImagePath; 
@property (nonatomic,readonly) NSString * process; 
@property (nonatomic,readonly) NSUUID * senderImageUUID; 
@property (nonatomic,readonly) const char* senderImageUUIDBytes; 
@property (nonatomic,readonly) NSString * senderImagePath; 
@property (nonatomic,readonly) NSString * sender; 
@property (nonatomic,readonly) unsigned long long senderImageOffset; 
@property (nonatomic,readonly) OSLogEventBacktrace * backtrace; 
@property (nonatomic,readonly) NSString * subsystem; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * formatString; 
@property (nonatomic,readonly) OSLogEventDecomposedMessage * decomposedMessage; 
@property (nonatomic,readonly) unsigned long long signpostIdentifier; 
@property (nonatomic,readonly) unsigned long long signpostType; 
@property (nonatomic,readonly) unsigned long long signpostScope; 
@property (nonatomic,readonly) NSString * signpostName; 
@property (nonatomic,readonly) unsigned long long creatorActivityIdentifier; 
@property (nonatomic,readonly) unsigned long long creatorProcessUniqueIdentifier; 
@property (nonatomic,readonly) unsigned long long lossStartMachContinuousTimestamp; 
@property (nonatomic,readonly) timeval* lossStartUnixDate; 
@property (nonatomic,readonly) timezone* lossStartUnixTimeZone; 
@property (nonatomic,readonly) unsigned long long lossEndMachContinuousTimestamp; 
@property (nonatomic,readonly) timeval* lossEndUnixDate; 
@property (nonatomic,readonly) timezone* lossEndUnixTimeZone; 
@property (nonatomic,readonly) SCD_Struct_OS0 lossCount; 
+(id)_make;
-(NSString *)process;
-(unsigned long long)signpostType;
-(unsigned long long)logType;
-(unsigned long long)threadIdentifier;
-(NSTimeZone *)timeZone;
-(NSString *)formatString;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSString *)senderImagePath;
-(NSString *)sender;
-(oneway void)release;
-(BOOL)_shouldIncludeSensitive;
-(unsigned long long)processUniqueIdentifier;
-(SCD_Struct_OS0)lossCount;
-(int)processIdentifier;
-(id)init;
-(NSString *)subsystem;
-(const char*)processImageUUIDBytes;
-(void)_setIncludeSensitive:(BOOL)arg1 ;
-(unsigned long long)size;
-(id)retain;
-(void)_setThreadCrumb;
-(NSString *)processImagePath;
-(unsigned long long)senderImageOffset;
-(void)set_timesyncRangeUUIDIndex:(unsigned long long)arg1 ;
-(NSString *)category;
-(unsigned long long)transitionActivityIdentifier;
-(unsigned long long)signpostScope;
-(void)_assertBalanced;
-(void)_setDoNotTrackActivites:(BOOL)arg1 ;
-(void)_setTimesyncDatabase:(os_timesync_db_sRef)arg1 ;
-(unsigned)processIdentifierVersion;
-(timezone*)unixTimeZone;
-(unsigned long long)timeToLive;
-(OSLogEventBacktrace *)backtrace;
-(id)description;
-(NSUUID *)senderImageUUID;
-(unsigned long long)lossEndMachContinuousTimestamp;
-(unsigned long long)machContinuousTimestamp;
-(timezone*)lossStartUnixTimeZone;
-(const char*)senderImageUUIDBytes;
-(unsigned long long)_timesyncRangeUUIDIndex;
-(unsigned long long)creatorProcessUniqueIdentifier;
-(unsigned long long)parentActivityIdentifier;
-(id)formatArguments;
-(unsigned long long)type;
-(unsigned long long)activityIdentifier;
-(BOOL)_setLogEvent:(SCD_Struct_OS18*)arg1 rangeUUIDIndex:(unsigned long long)arg2 machTimebase:(mach_timebase_info*)arg3 ;
-(NSString *)signpostName;
-(unsigned long long)signpostIdentifier;
-(NSUUID *)processImageUUID;
-(timeval*)unixDate;
-(timeval*)lossEndUnixDate;
-(oneway void)_unmake;
-(void)_setUUIDDBFileDescriptor:(int)arg1 ;
-(unsigned long long)creatorActivityIdentifier;
-(void)_setFallbackTimezone;
-(NSString *)composedMessage;
-(NSDate *)date;
-(void)_setBuffer:(const void*)arg1 size:(unsigned long long)arg2 privateBuffer:(const void*)arg3 privateSize:(unsigned long long)arg4 ;
-(void)_fillFromXPCEventObject:(id)arg1 ;
-(timezone*)lossEndUnixTimeZone;
-(unsigned long long)continuousNanosecondsSinceBoot;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(unsigned long long)lossStartMachContinuousTimestamp;
-(unsigned)_oversizeIdentifier;
-(NSUUID *)bootUUID;
-(unsigned long long)traceIdentifier;
-(timeval*)lossStartUnixDate;
-(OSLogEventDecomposedMessage *)decomposedMessage;
@end

