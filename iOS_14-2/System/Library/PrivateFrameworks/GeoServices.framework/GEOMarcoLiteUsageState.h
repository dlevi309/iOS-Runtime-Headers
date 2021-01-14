/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOMarcoLiteUsageState : PBCodable <NSCopying> {

	int _stateExitReason;
	unsigned _stateTime;
	int _stateType;
	unsigned _stateValue;
	struct {
		unsigned has_stateExitReason : 1;
		unsigned has_stateTime : 1;
		unsigned has_stateType : 1;
		unsigned has_stateValue : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStateType; 
@property (assign,nonatomic) int stateType; 
@property (assign,nonatomic) BOOL hasStateValue; 
@property (assign,nonatomic) unsigned stateValue; 
@property (assign,nonatomic) BOOL hasStateTime; 
@property (assign,nonatomic) unsigned stateTime; 
@property (assign,nonatomic) BOOL hasStateExitReason; 
@property (assign,nonatomic) int stateExitReason; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)stateValue;
-(void)setStateValue:(unsigned)arg1 ;
-(void)setStateExitReason:(int)arg1 ;
-(void)setHasStateValue:(BOOL)arg1 ;
-(BOOL)hasStateValue;
-(void)setHasStateTime:(BOOL)arg1 ;
-(BOOL)hasStateTime;
-(int)stateExitReason;
-(void)setHasStateExitReason:(BOOL)arg1 ;
-(BOOL)hasStateExitReason;
-(id)stateExitReasonAsString:(int)arg1 ;
-(void)setHasStateType:(BOOL)arg1 ;
-(int)StringAsStateExitReason:(id)arg1 ;
-(unsigned)stateTime;
-(int)StringAsStateType:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setStateTime:(unsigned)arg1 ;
-(id)description;
-(int)stateType;
-(unsigned long long)hash;
-(void)setStateType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasStateType;
-(id)stateTypeAsString:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

