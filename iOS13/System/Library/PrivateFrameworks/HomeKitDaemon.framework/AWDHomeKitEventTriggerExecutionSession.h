/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDHomeKitEventTriggerExecutionSession : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _endEvents;
	int _executionState;
	int _resultErrorCode;
	NSString* _sessionID;
	NSMutableArray* _triggerEvents;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionID; 
@property (nonatomic,retain) NSString * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * triggerEvents;              //@synthesize triggerEvents=_triggerEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray * endEvents;                  //@synthesize endEvents=_endEvents - In the implementation block
@property (assign,nonatomic) BOOL hasExecutionState; 
@property (assign,nonatomic) int executionState;                          //@synthesize executionState=_executionState - In the implementation block
@property (assign,nonatomic) BOOL hasResultErrorCode; 
@property (assign,nonatomic) int resultErrorCode;                         //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
+(Class)triggerEventsType;
+(Class)endEventsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(NSMutableArray *)endEvents;
-(void)setTriggerEvents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)triggerEvents;
-(void)setResultErrorCode:(int)arg1 ;
-(void)setHasResultErrorCode:(BOOL)arg1 ;
-(BOOL)hasResultErrorCode;
-(int)resultErrorCode;
-(void)addTriggerEvents:(id)arg1 ;
-(void)addEndEvents:(id)arg1 ;
-(unsigned long long)triggerEventsCount;
-(void)clearTriggerEvents;
-(id)triggerEventsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)endEventsCount;
-(void)clearEndEvents;
-(id)endEventsAtIndex:(unsigned long long)arg1 ;
-(int)executionState;
-(void)setExecutionState:(int)arg1 ;
-(void)setHasExecutionState:(BOOL)arg1 ;
-(BOOL)hasExecutionState;
-(id)executionStateAsString:(int)arg1 ;
-(int)StringAsExecutionState:(id)arg1 ;
-(void)setEndEvents:(NSMutableArray *)arg1 ;
@end

