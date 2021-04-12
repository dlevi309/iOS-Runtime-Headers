/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)stateType;
-(void)setStateType:(int)arg1 ;
-(void)setHasStateType:(BOOL)arg1 ;
-(BOOL)hasStateType;
-(id)stateTypeAsString:(int)arg1 ;
-(int)StringAsStateType:(id)arg1 ;
-(unsigned)stateValue;
-(void)setStateValue:(unsigned)arg1 ;
-(void)setHasStateValue:(BOOL)arg1 ;
-(BOOL)hasStateValue;
-(unsigned)stateTime;
-(void)setStateTime:(unsigned)arg1 ;
-(void)setHasStateTime:(BOOL)arg1 ;
-(BOOL)hasStateTime;
-(int)stateExitReason;
-(void)setStateExitReason:(int)arg1 ;
-(void)setHasStateExitReason:(BOOL)arg1 ;
-(BOOL)hasStateExitReason;
-(id)stateExitReasonAsString:(int)arg1 ;
-(int)StringAsStateExitReason:(id)arg1 ;
@end

