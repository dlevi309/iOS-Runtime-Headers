/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)durationInOldState;
-(void)setDurationInOldState:(double)arg1 ;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(BOOL)hasDurationInOldState;
-(int)tileSetStateType;
-(void)setTileSetStateType:(int)arg1 ;
-(void)setHasTileSetStateType:(BOOL)arg1 ;
-(BOOL)hasTileSetStateType;
-(id)tileSetStateTypeAsString:(int)arg1 ;
-(int)StringAsTileSetStateType:(id)arg1 ;
-(double)oldCoverage;
-(void)setOldCoverage:(double)arg1 ;
-(void)setHasOldCoverage:(BOOL)arg1 ;
-(BOOL)hasOldCoverage;
-(double)newCoverage;
-(void)setNewCoverage:(double)arg1 ;
-(void)setHasNewCoverage:(BOOL)arg1 ;
-(BOOL)hasNewCoverage;
@end

