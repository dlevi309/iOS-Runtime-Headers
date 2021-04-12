/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLocation;

@interface GEOLogMsgStateLookAroundView : PBCodable <NSCopying> {

	GEOLocation* _location;
	double _zoomLevel;
	unsigned _heading;
	unsigned _numberPoisInView;
	BOOL _isLabelingShown;
	struct {
		unsigned has_zoomLevel : 1;
		unsigned has_heading : 1;
		unsigned has_numberPoisInView : 1;
		unsigned has_isLabelingShown : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasHeading; 
@property (assign,nonatomic) unsigned heading; 
@property (assign,nonatomic) BOOL hasZoomLevel; 
@property (assign,nonatomic) double zoomLevel; 
@property (assign,nonatomic) BOOL hasNumberPoisInView; 
@property (assign,nonatomic) unsigned numberPoisInView; 
@property (assign,nonatomic) BOOL hasIsLabelingShown; 
@property (assign,nonatomic) BOOL isLabelingShown; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)heading;
-(double)zoomLevel;
-(void)readAll:(BOOL)arg1 ;
-(void)setZoomLevel:(double)arg1 ;
-(id)jsonRepresentation;
-(GEOLocation *)location;
-(unsigned)numberPoisInView;
-(void)setHasNumberPoisInView:(BOOL)arg1 ;
-(BOOL)hasNumberPoisInView;
-(BOOL)isLabelingShown;
-(void)setHasIsLabelingShown:(BOOL)arg1 ;
-(BOOL)hasIsLabelingShown;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasLocation;
-(unsigned long long)hash;
-(void)setHasHeading:(BOOL)arg1 ;
-(void)setNumberPoisInView:(unsigned)arg1 ;
-(void)setIsLabelingShown:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasZoomLevel;
-(void)setHeading:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasHeading;
@end

