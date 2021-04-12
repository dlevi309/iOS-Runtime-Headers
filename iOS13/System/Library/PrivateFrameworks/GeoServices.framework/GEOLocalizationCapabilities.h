/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOLocalizationCapabilities : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _supportedPhoneticTypes;

}

@property (nonatomic,readonly) unsigned long long supportedPhoneticTypesCount; 
@property (nonatomic,readonly) int* supportedPhoneticTypes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)supportedPhoneticTypesCount;
-(void)clearSupportedPhoneticTypes;
-(int)supportedPhoneticTypeAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedPhoneticType:(int)arg1 ;
-(int*)supportedPhoneticTypes;
-(void)setSupportedPhoneticTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedPhoneticTypesAsString:(int)arg1 ;
-(int)StringAsSupportedPhoneticTypes:(id)arg1 ;
@end

