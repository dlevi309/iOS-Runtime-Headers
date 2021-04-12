/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOImageServiceRequest : PBRequest <NSCopying> {

	NSMutableArray* _imageIds;
	unsigned _height;
	unsigned _width;
	SCD_Struct_GE123 _flags;

}

@property (nonatomic,retain) NSMutableArray * imageIds; 
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) unsigned width; 
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) unsigned height; 
+(Class)imageIdType;
+(BOOL)isValid:(id)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(unsigned)width;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasWidth;
-(unsigned)requestTypeCode;
-(NSMutableArray *)imageIds;
-(void)setWidth:(unsigned)arg1 ;
-(unsigned long long)imageIdsCount;
-(void)addImageId:(id)arg1 ;
-(void)clearImageIds;
-(id)imageIdAtIndex:(unsigned long long)arg1 ;
-(void)setImageIds:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)height;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

