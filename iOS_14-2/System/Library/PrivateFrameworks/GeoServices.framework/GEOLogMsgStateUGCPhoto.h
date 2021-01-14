/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateUGCPhoto : PBCodable <NSCopying> {

	SCD_Struct_GE90* _photoSources;

}

@property (nonatomic,readonly) unsigned long long photoSourcesCount; 
@property (nonatomic,readonly) int* photoSources; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)addPhotoSource:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearPhotoSources;
-(int*)photoSources;
-(unsigned long long)photoSourcesCount;
-(int)photoSourceAtIndex:(unsigned long long)arg1 ;
-(void)setPhotoSources:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)photoSourcesAsString:(int)arg1 ;
-(int)StringAsPhotoSources:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

