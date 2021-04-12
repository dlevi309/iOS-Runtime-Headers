/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDActivityAWDActivityCompanionInvitationEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _action;
	int _failureReason;
	int _stage;
	BOOL _retryExpected;
	BOOL _success;
	SCD_Struct_HD23 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                              //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasFailureReason; 
@property (assign,nonatomic) int failureReason;                         //@synthesize failureReason=_failureReason - In the implementation block
@property (assign,nonatomic) BOOL hasStage; 
@property (assign,nonatomic) int stage;                                 //@synthesize stage=_stage - In the implementation block
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action;                                //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL hasRetryExpected; 
@property (assign,nonatomic) BOOL retryExpected;                        //@synthesize retryExpected=_retryExpected - In the implementation block
-(BOOL)success;
-(id)dictionaryRepresentation;
-(void)setSuccess:(BOOL)arg1 ;
-(int)failureReason;
-(id)failureReasonAsString:(int)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(int)stage;
-(void)mergeFrom:(id)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasFailureReason;
-(id)description;
-(void)setStage:(int)arg1 ;
-(void)setFailureReason:(int)arg1 ;
-(BOOL)hasAction;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(void)setHasFailureReason:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasStage;
-(BOOL)isEqual:(id)arg1 ;
-(int)StringAsFailureReason:(id)arg1 ;
-(void)setHasStage:(BOOL)arg1 ;
-(id)stageAsString:(int)arg1 ;
-(int)StringAsStage:(id)arg1 ;
-(void)setRetryExpected:(BOOL)arg1 ;
-(void)setHasRetryExpected:(BOOL)arg1 ;
-(BOOL)hasRetryExpected;
-(BOOL)retryExpected;
@end

