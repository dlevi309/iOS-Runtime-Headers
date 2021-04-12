/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOSurchargeOption.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PBUnknownFields, NSMutableArray;

@interface GEORequestOptions : PBCodable <GEOSurchargeOption, NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _requestOptions;
	int _optionUsed;
	struct {
		unsigned has_optionUsed : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSArray * surchargeTypes; 
@property (nonatomic,readonly) unsigned long long selectedSurchargeTypeIndex; 
@property (nonatomic,readonly) id<GEOSurchargeType> selectedSurchargeType; 
@property (nonatomic,retain) NSMutableArray * requestOptions; 
@property (assign,nonatomic) BOOL hasOptionUsed; 
@property (assign,nonatomic) int optionUsed; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)requestOptionType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addRequestOption:(id)arg1 ;
-(void)setOptionUsed:(int)arg1 ;
-(unsigned long long)requestOptionsCount;
-(void)clearRequestOptions;
-(id)requestOptionAtIndex:(unsigned long long)arg1 ;
-(void)setRequestOptions:(NSMutableArray *)arg1 ;
-(void)setHasOptionUsed:(BOOL)arg1 ;
-(BOOL)hasOptionUsed;
-(id)description;
-(unsigned long long)hash;
-(NSMutableArray *)requestOptions;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)optionUsed;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)surchargeTypes;
-(unsigned long long)selectedSurchargeTypeIndex;
-(id<GEOSurchargeType>)selectedSurchargeType;
@end

