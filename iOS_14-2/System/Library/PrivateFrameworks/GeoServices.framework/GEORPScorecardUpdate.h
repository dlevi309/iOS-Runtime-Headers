/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEORPScorecard;

@interface GEORPScorecardUpdate : PBCodable <NSCopying> {

	GEORPScorecard* _scorecard;
	int _action;
	struct {
		unsigned has_action : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasScorecard; 
@property (nonatomic,retain) GEORPScorecard * scorecard; 
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasAction:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasAction;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(GEORPScorecard *)scorecard;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasScorecard;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(void)setScorecard:(GEORPScorecard *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

