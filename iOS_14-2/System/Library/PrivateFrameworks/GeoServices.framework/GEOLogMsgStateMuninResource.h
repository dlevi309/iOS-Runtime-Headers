/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgStateMuninResource : PBCodable <NSCopying> {

	NSString* _assetBucket;
	unsigned _levelOfDetail;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) BOOL hasAssetBucket; 
@property (nonatomic,retain) NSString * assetBucket; 
@property (assign,nonatomic) BOOL hasLevelOfDetail; 
@property (assign,nonatomic) unsigned levelOfDetail; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(NSString *)assetBucket;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAssetBucket;
-(unsigned)levelOfDetail;
-(void)setHasLevelOfDetail:(BOOL)arg1 ;
-(BOOL)hasLevelOfDetail;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setAssetBucket:(NSString *)arg1 ;
-(void)setLevelOfDetail:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

