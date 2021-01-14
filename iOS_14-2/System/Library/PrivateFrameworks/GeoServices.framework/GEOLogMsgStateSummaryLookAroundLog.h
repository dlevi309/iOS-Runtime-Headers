/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateSummaryLookAroundLog : PBCodable <NSCopying> {

	unsigned _durationSec;
	BOOL _hadMoveActions;
	BOOL _hadPanActions;
	BOOL _hadPoiTapActions;
	BOOL _hadShareActions;
	BOOL _hadZoomActions;
	struct {
		unsigned has_durationSec : 1;
		unsigned has_hadMoveActions : 1;
		unsigned has_hadPanActions : 1;
		unsigned has_hadPoiTapActions : 1;
		unsigned has_hadShareActions : 1;
		unsigned has_hadZoomActions : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDurationSec; 
@property (assign,nonatomic) unsigned durationSec; 
@property (assign,nonatomic) BOOL hasHadPanActions; 
@property (assign,nonatomic) BOOL hadPanActions; 
@property (assign,nonatomic) BOOL hasHadZoomActions; 
@property (assign,nonatomic) BOOL hadZoomActions; 
@property (assign,nonatomic) BOOL hasHadMoveActions; 
@property (assign,nonatomic) BOOL hadMoveActions; 
@property (assign,nonatomic) BOOL hasHadPoiTapActions; 
@property (assign,nonatomic) BOOL hadPoiTapActions; 
@property (assign,nonatomic) BOOL hasHadShareActions; 
@property (assign,nonatomic) BOOL hadShareActions; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)durationSec;
-(BOOL)hasDurationSec;
-(void)setHasDurationSec:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hadPanActions;
-(void)setHasHadPanActions:(BOOL)arg1 ;
-(BOOL)hasHadPanActions;
-(BOOL)hadZoomActions;
-(void)setHasHadZoomActions:(BOOL)arg1 ;
-(BOOL)hasHadZoomActions;
-(BOOL)hadMoveActions;
-(void)setHasHadMoveActions:(BOOL)arg1 ;
-(BOOL)hasHadMoveActions;
-(BOOL)hadPoiTapActions;
-(void)setHasHadPoiTapActions:(BOOL)arg1 ;
-(BOOL)hasHadPoiTapActions;
-(BOOL)hadShareActions;
-(void)setHasHadShareActions:(BOOL)arg1 ;
-(BOOL)hasHadShareActions;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setDurationSec:(unsigned)arg1 ;
-(void)setHadPanActions:(BOOL)arg1 ;
-(void)setHadMoveActions:(BOOL)arg1 ;
-(void)setHadZoomActions:(BOOL)arg1 ;
-(void)setHadPoiTapActions:(BOOL)arg1 ;
-(void)setHadShareActions:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

