/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SGDCKTimeRange : PBCodable <NSCopying> {

	double _end;
	long long _endUTCOffsetSeconds;
	double _start;
	long long _startUTCOffsetSeconds;
	BOOL _floating;
	SCD_Struct_SG5 _has;

}

@property (assign,nonatomic) BOOL hasStart; 
@property (assign,nonatomic) double start;                                 //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) BOOL hasEnd; 
@property (assign,nonatomic) double end;                                   //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) BOOL hasStartUTCOffsetSeconds; 
@property (assign,nonatomic) long long startUTCOffsetSeconds;              //@synthesize startUTCOffsetSeconds=_startUTCOffsetSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasEndUTCOffsetSeconds; 
@property (assign,nonatomic) long long endUTCOffsetSeconds;                //@synthesize endUTCOffsetSeconds=_endUTCOffsetSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasFloating; 
@property (assign,nonatomic) BOOL floating;                                //@synthesize floating=_floating - In the implementation block
-(id)dictionaryRepresentation;
-(double)end;
-(void)setFloating:(BOOL)arg1 ;
-(BOOL)hasEnd;
-(BOOL)floating;
-(double)start;
-(BOOL)hasStart;
-(void)setHasEnd:(BOOL)arg1 ;
-(void)setHasStart:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setEnd:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)startUTCOffsetSeconds;
-(long long)endUTCOffsetSeconds;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStart:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStartUTCOffsetSeconds:(long long)arg1 ;
-(void)setHasStartUTCOffsetSeconds:(BOOL)arg1 ;
-(BOOL)hasStartUTCOffsetSeconds;
-(void)setEndUTCOffsetSeconds:(long long)arg1 ;
-(void)setHasEndUTCOffsetSeconds:(BOOL)arg1 ;
-(BOOL)hasEndUTCOffsetSeconds;
-(void)setHasFloating:(BOOL)arg1 ;
-(BOOL)hasFloating;
@end

