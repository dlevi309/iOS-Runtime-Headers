/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SYLogEngineState : PBCodable <NSCopying> {

	int _type;
	BOOL _buffersSessions;
	BOOL _inSession;
	BOOL _suspended;
	SCD_Struct_SY6 _has;

}

@property (assign,nonatomic) int type;                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasSuspended; 
@property (assign,nonatomic) BOOL suspended;                       //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) BOOL hasInSession; 
@property (assign,nonatomic) BOOL inSession;                       //@synthesize inSession=_inSession - In the implementation block
@property (assign,nonatomic) BOOL hasBuffersSessions; 
@property (assign,nonatomic) BOOL buffersSessions;                 //@synthesize buffersSessions=_buffersSessions - In the implementation block
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSuspended:(BOOL)arg1 ;
-(BOOL)hasSuspended;
-(void)setInSession:(BOOL)arg1 ;
-(void)setHasInSession:(BOOL)arg1 ;
-(BOOL)hasInSession;
-(void)setBuffersSessions:(BOOL)arg1 ;
-(void)setHasBuffersSessions:(BOOL)arg1 ;
-(BOOL)hasBuffersSessions;
-(BOOL)inSession;
-(BOOL)buffersSessions;
@end

