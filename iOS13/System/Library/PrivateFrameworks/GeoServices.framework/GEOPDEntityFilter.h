/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDEntityFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _includeName;
	BOOL _includeSpokenNames;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasIncludeSpokenNames; 
@property (assign,nonatomic) BOOL includeSpokenNames; 
@property (assign,nonatomic) BOOL hasIncludeName; 
@property (assign,nonatomic) BOOL includeName; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(BOOL)includeSpokenNames;
-(void)setIncludeSpokenNames:(BOOL)arg1 ;
-(void)setHasIncludeSpokenNames:(BOOL)arg1 ;
-(BOOL)hasIncludeSpokenNames;
-(BOOL)includeName;
-(void)setIncludeName:(BOOL)arg1 ;
-(void)setHasIncludeName:(BOOL)arg1 ;
-(BOOL)hasIncludeName;
@end

