/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOImageServiceResponse : PBCodable <NSCopying> {

	NSMutableArray* _images;
	unsigned _height;
	int _status;
	unsigned _width;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) unsigned width; 
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) unsigned height; 
@property (nonatomic,retain) NSMutableArray * images; 
+(Class)imagesType;
+(BOOL)isValid:(id)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearImages;
-(void)setHasStatus:(BOOL)arg1 ;
-(unsigned)width;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasWidth;
-(void)setImages:(NSMutableArray *)arg1 ;
-(void)setWidth:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)height;
-(unsigned long long)imagesCount;
-(id)statusAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(void)addImages:(id)arg1 ;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(unsigned long long)hash;
-(NSMutableArray *)images;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)imagesAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
@end

