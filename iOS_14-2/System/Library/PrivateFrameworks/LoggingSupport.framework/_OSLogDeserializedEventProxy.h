/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSLogEventProxy.h>

@class NSDictionary, _OSLogEventSerializationMetadata;

@interface _OSLogDeserializedEventProxy : OSLogEventProxy {

	BOOL _unixDateNeedsLookup;
	BOOL _unixTimeZoneNeedsLookup;
	timezone _unixTimeZone;
	timeval _unixDate;
	BOOL _lossStartUnixDateNeedsLookup;
	BOOL _lossStartUnixTimeZoneNeedsLookup;
	timeval _lossStartUnixDate;
	timezone _lossStartUnixTimeZone;
	BOOL _lossEndUnixDateNeedsLookup;
	BOOL _lossEndUnixTimeZoneNeedsLookup;
	timeval _lossEndUnixDate;
	timezone _lossEndUnixTimeZone;
	BOOL _needsTypeLookup;
	NSDictionary* _curEventDictionary;
	_OSLogEventSerializationMetadata* _metadata;
	unsigned long long _type;

}

@property (nonatomic,retain) _OSLogEventSerializationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSDictionary * curEventDictionary;                        //@synthesize curEventDictionary=_curEventDictionary - In the implementation block
@property (assign,nonatomic) BOOL needsTypeLookup;                                     //@synthesize needsTypeLookup=_needsTypeLookup - In the implementation block
-(id)process;
-(unsigned long long)signpostType;
-(unsigned long long)logType;
-(unsigned long long)threadIdentifier;
-(id)timeZone;
-(id)formatString;
-(id)senderImagePath;
-(id)sender;
-(SCD_Struct_OS0)lossCount;
-(int)processIdentifier;
-(id)subsystem;
-(BOOL)needsTypeLookup;
-(const char*)processImageUUIDBytes;
-(unsigned long long)size;
-(id)processImagePath;
-(unsigned long long)senderImageOffset;
-(void)setNeedsTypeLookup:(BOOL)arg1 ;
-(id)category;
-(void)_populate_timeval:(timeval*)arg1 withDict:(id)arg2 ;
-(unsigned long long)transitionActivityIdentifier;
-(unsigned long long)signpostScope;
-(void)setMetadata:(_OSLogEventSerializationMetadata *)arg1 ;
-(void)setCurEventDictionary:(NSDictionary *)arg1 ;
-(timezone*)unixTimeZone;
-(unsigned long long)timeToLive;
-(id)backtrace;
-(id)senderImageUUID;
-(unsigned long long)lossEndMachContinuousTimestamp;
-(unsigned long long)machContinuousTimestamp;
-(timezone*)lossStartUnixTimeZone;
-(const char*)senderImageUUIDBytes;
-(unsigned long long)creatorProcessUniqueIdentifier;
-(unsigned long long)parentActivityIdentifier;
-(unsigned long long)type;
-(unsigned long long)activityIdentifier;
-(id)signpostName;
-(NSDictionary *)curEventDictionary;
-(unsigned long long)signpostIdentifier;
-(void)_populate_timezone:(timezone*)arg1 withDict:(id)arg2 ;
-(id)processImageUUID;
-(timeval*)unixDate;
-(timeval*)lossEndUnixDate;
-(void)_resetNeedsLookup;
-(unsigned long long)creatorActivityIdentifier;
-(id)composedMessage;
-(id)date;
-(timezone*)lossEndUnixTimeZone;
-(unsigned long long)continuousNanosecondsSinceBoot;
-(_OSLogEventSerializationMetadata *)metadata;
-(unsigned long long)lossStartMachContinuousTimestamp;
-(id)bootUUID;
-(unsigned long long)traceIdentifier;
-(timeval*)lossStartUnixDate;
-(id)_frameForDict:(id)arg1 ;
-(id)decomposedMessage;
@end

