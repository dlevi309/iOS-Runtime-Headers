/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventCuratedCollectionStats : PBCodable <NSCopying> {

	SCD_Struct_GE92* _savedCollectionMuids;

}

@property (nonatomic,readonly) unsigned long long savedCollectionMuidsCount; 
@property (nonatomic,readonly) unsigned long long* savedCollectionMuids; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)savedCollectionMuidsCount;
-(void)clearSavedCollectionMuids;
-(unsigned long long)savedCollectionMuidsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long*)savedCollectionMuids;
-(void)setSavedCollectionMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)addSavedCollectionMuids:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

