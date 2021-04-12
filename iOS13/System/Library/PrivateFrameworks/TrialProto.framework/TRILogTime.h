/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TRILogTime : PBCodable <NSCopying> {

	unsigned long long _secondsSince1970;
	int _minutesDstOffset;
	int _secondsFromUtc;
	SCD_Struct_TR4 _has;

}

@property (assign,nonatomic) BOOL hasSecondsSince1970; 
@property (assign,nonatomic) unsigned long long secondsSince1970;              //@synthesize secondsSince1970=_secondsSince1970 - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsFromUtc; 
@property (assign,nonatomic) int secondsFromUtc;                               //@synthesize secondsFromUtc=_secondsFromUtc - In the implementation block
@property (assign,nonatomic) BOOL hasMinutesDstOffset; 
@property (assign,nonatomic) int minutesDstOffset;                             //@synthesize minutesDstOffset=_minutesDstOffset - In the implementation block
+(id)logTimeFromDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSecondsSince1970:(unsigned long long)arg1 ;
-(unsigned long long)secondsSince1970;
-(void)setHasSecondsSince1970:(BOOL)arg1 ;
-(BOOL)hasSecondsSince1970;
-(void)setSecondsFromUtc:(int)arg1 ;
-(void)setHasSecondsFromUtc:(BOOL)arg1 ;
-(BOOL)hasSecondsFromUtc;
-(void)setMinutesDstOffset:(int)arg1 ;
-(void)setHasMinutesDstOffset:(BOOL)arg1 ;
-(BOOL)hasMinutesDstOffset;
-(int)secondsFromUtc;
-(int)minutesDstOffset;
@end

