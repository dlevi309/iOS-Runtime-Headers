/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)type;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(unsigned long long)size;
-(NSString *)category;
-(int)processIdentifier;
-(unsigned long long)timeToLive;
-(NSString *)sender;
-(NSString *)process;
-(NSString *)formatString;
-(OSLogEventBacktrace *)backtrace;
-(unsigned long long)signpostType;
-(unsigned long long)threadIdentifier;
-(NSString *)subsystem;
-(unsigned long long)logType;
-(unsigned long long)activityIdentifier;
-(NSString *)composedMessage;
-(OSLogEventDecomposedMessage *)decomposedMessage;
-(unsigned long long)traceIdentifier;
-(timeval*)unixDate;
-(timezone*)unixTimeZone;
-(unsigned long long)parentActivityIdentifier;
-(unsigned long long)transitionActivityIdentifier;
-(NSUUID *)bootUUID;
-(unsigned long long)continuousNanosecondsSinceBoot;
-(unsigned long long)machContinuousTimestamp;
-(NSUUID *)processImageUUID;
-(const char*)processImageUUIDBytes;
-(NSString *)processImagePath;
-(NSUUID *)senderImageUUID;
-(const char*)senderImageUUIDBytes;
-(NSString *)senderImagePath;
-(unsigned long long)senderImageOffset;
-(unsigned long long)signpostIdentifier;
-(unsigned long long)signpostScope;
-(NSString *)signpostName;
-(unsigned long long)creatorActivityIdentifier;
-(unsigned long long)creatorProcessUniqueIdentifier;
-(unsigned long long)lossStartMachContinuousTimestamp;
-(timeval*)lossStartUnixDate;
-(timezone*)lossStartUnixTimeZone;
-(unsigned long long)lossEndMachContinuousTimestamp;
-(timeval*)lossEndUnixDate;
-(timezone*)lossEndUnixTimeZone;
-(SCD_Struct_OS0)lossCount;

@end

