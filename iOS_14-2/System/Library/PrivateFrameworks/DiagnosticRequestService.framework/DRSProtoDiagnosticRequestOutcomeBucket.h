/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DRSProtoDiagnosticRequestOutcomeBucket : PBCodable <NSCopying> {

	unsigned long long _count;
	int _outcome;
	int _requestState;
	SCD_Struct_DR2 _has;

}

@property (assign,nonatomic) BOOL hasOutcome; 
@property (assign,nonatomic) int outcome;                           //@synthesize outcome=_outcome - In the implementation block
@property (assign,nonatomic) BOOL hasRequestState; 
@property (assign,nonatomic) int requestState;                      //@synthesize requestState=_requestState - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setRequestState:(int)arg1 ;
-(int)requestState;
-(int)outcome;
-(void)setOutcome:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)count;
-(void)setHasOutcome:(BOOL)arg1 ;
-(BOOL)hasOutcome;
-(id)outcomeAsString:(int)arg1 ;
-(int)StringAsOutcome:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasRequestState:(BOOL)arg1 ;
-(BOOL)hasRequestState;
-(id)requestStateAsString:(int)arg1 ;
-(int)StringAsRequestState:(id)arg1 ;
@end

