/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDGroundViewLabel : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _groundViewLabelInfos;
	unsigned long long _groundViewLocationId;
	struct {
		unsigned has_groundViewLocationId : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasGroundViewLocationId; 
@property (assign,nonatomic) unsigned long long groundViewLocationId; 
@property (nonatomic,retain) NSMutableArray * groundViewLabelInfos; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)groundViewLabelInfoType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)groundViewLocationId;
-(void)clearGroundViewLabelInfos;
-(void)setHasGroundViewLocationId:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)groundViewLabelInfoAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)groundViewLabelInfosCount;
-(NSMutableArray *)groundViewLabelInfos;
-(void)setGroundViewLocationId:(unsigned long long)arg1 ;
-(void)setGroundViewLabelInfos:(NSMutableArray *)arg1 ;
-(BOOL)hasGroundViewLocationId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addGroundViewLabelInfo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

