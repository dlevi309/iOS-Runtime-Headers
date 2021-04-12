/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

@class NSString, NSDate, NSTimeZone, NSUUID, OSLogEventBacktrace, OSLogEventDecomposedMessage;


@protocol OSLogEventProvider
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
@required
-(NSString *)process;
-(unsigned long long)signpostType;
-(unsigned long long)logType;
-(unsigned long long)threadIdentifier;
-(NSTimeZone *)timeZone;
-(NSString *)formatString;
-(NSString *)senderImagePath;
-(NSString *)sender;
-(SCD_Struct_OS0)lossCount;
-(int)processIdentifier;
-(NSString *)subsystem;
-(const char*)processImageUUIDBytes;
-(unsigned long long)size;
-(NSString *)processImagePath;
-(unsigned long long)senderImageOffset;
-(NSString *)category;
-(unsigned long long)transitionActivityIdentifier;
-(unsigned long long)signpostScope;
-(timezone*)unixTimeZone;
-(unsigned long long)timeToLive;
-(OSLogEventBacktrace *)backtrace;
-(NSUUID *)senderImageUUID;
-(unsigned long long)lossEndMachContinuousTimestamp;
-(unsigned long long)machContinuousTimestamp;
-(timezone*)lossStartUnixTimeZone;
-(const char*)senderImageUUIDBytes;
-(unsigned long long)creatorProcessUniqueIdentifier;
-(unsigned long long)parentActivityIdentifier;
-(unsigned long long)type;
-(unsigned long long)activityIdentifier;
-(NSString *)signpostName;
-(unsigned long long)signpostIdentifier;
-(NSUUID *)processImageUUID;
-(timeval*)unixDate;
-(timeval*)lossEndUnixDate;
-(unsigned long long)creatorActivityIdentifier;
-(NSString *)composedMessage;
-(NSDate *)date;
-(timezone*)lossEndUnixTimeZone;
-(unsigned long long)continuousNanosecondsSinceBoot;
-(unsigned long long)lossStartMachContinuousTimestamp;
-(NSUUID *)bootUUID;
-(unsigned long long)traceIdentifier;
-(timeval*)lossStartUnixDate;
-(OSLogEventDecomposedMessage *)decomposedMessage;

@end

