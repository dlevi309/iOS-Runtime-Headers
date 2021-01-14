/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventTileSetState : PBCodable <NSCopying> {

	double _durationInOldState;
	double _newCoverage;
	double _oldCoverage;
	int _tileSetStateType;
	struct {
		unsigned has_durationInOldState : 1;
		unsigned has_newCoverage : 1;
		unsigned has_oldCoverage : 1;
		unsigned has_tileSetStateType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState; 
@property (assign,nonatomic) BOOL hasTileSetStateType; 
@property (assign,nonatomic) int tileSetStateType; 
@property (assign,nonatomic) BOOL hasOldCoverage; 
@property (assign,nonatomic) double oldCoverage; 
@property (assign,nonatomic) BOOL hasNewCoverage; 
@property (assign,nonatomic) double newCoverage; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setDurationInOldState:(double)arg1 ;
-(unsigned long long)hash;
-(double)durationInOldState;
-(BOOL)hasDurationInOldState;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(void)setOldCoverage:(double)arg1 ;
-(void)setTileSetStateType:(int)arg1 ;
-(void)setNewCoverage:(double)arg1 ;
-(int)tileSetStateType;
-(void)setHasTileSetStateType:(BOOL)arg1 ;
-(BOOL)hasTileSetStateType;
-(id)tileSetStateTypeAsString:(int)arg1 ;
-(double)oldCoverage;
-(int)StringAsTileSetStateType:(id)arg1 ;
-(void)setHasOldCoverage:(BOOL)arg1 ;
-(BOOL)hasOldCoverage;
-(double)newCoverage;
-(BOOL)hasNewCoverage;
-(void)setHasNewCoverage:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

