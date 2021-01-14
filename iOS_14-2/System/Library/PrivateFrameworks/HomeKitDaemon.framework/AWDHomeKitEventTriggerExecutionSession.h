/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_AW2 _has;

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
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)setTriggerEvents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)triggerEvents;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)endEvents;
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

