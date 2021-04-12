/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTrafficPath;

@interface GEOTrafficTrafficColor : PBCodable <NSCopying> {

	GEOTrafficPath* _path;
	int _color;
	struct {
		unsigned has_color : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPath; 
@property (nonatomic,retain) GEOTrafficPath * path; 
@property (assign,nonatomic) BOOL hasColor; 
@property (assign,nonatomic) int color; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOTrafficPath *)path;
-(id)dictionaryRepresentation;
-(void)setPath:(GEOTrafficPath *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)color;
-(void)setColor:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasColor;
-(void)setHasColor:(BOOL)arg1 ;
-(id)colorAsString:(int)arg1 ;
-(int)StringAsColor:(id)arg1 ;
-(BOOL)hasPath;
@end

