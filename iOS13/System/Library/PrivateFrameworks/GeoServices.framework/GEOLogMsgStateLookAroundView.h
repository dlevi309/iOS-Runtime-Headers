/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLocation *)location;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)heading;
-(void)setHeading:(unsigned)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(void)setHasHeading:(BOOL)arg1 ;
-(BOOL)hasHeading;
-(double)zoomLevel;
-(void)setZoomLevel:(double)arg1 ;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(BOOL)hasZoomLevel;
-(unsigned)numberPoisInView;
-(void)setNumberPoisInView:(unsigned)arg1 ;
-(void)setHasNumberPoisInView:(BOOL)arg1 ;
-(BOOL)hasNumberPoisInView;
-(BOOL)isLabelingShown;
-(void)setIsLabelingShown:(BOOL)arg1 ;
-(void)setHasIsLabelingShown:(BOOL)arg1 ;
-(BOOL)hasIsLabelingShown;
@end

