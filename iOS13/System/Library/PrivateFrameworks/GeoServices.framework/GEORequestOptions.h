/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE99 _flags;

}

@property (nonatomic,readonly) NSArray * surchargeTypes; 
@property (nonatomic,readonly) unsigned long long selectedSurchargeTypeIndex; 
@property (nonatomic,readonly) id<GEOSurchargeType> selectedSurchargeType; 
@property (nonatomic,retain) NSMutableArray * requestOptions; 
@property (assign,nonatomic) BOOL hasOptionUsed; 
@property (assign,nonatomic) int optionUsed; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)requestOptionType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequestOptions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)requestOptions;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasOptionUsed;
-(int)optionUsed;
-(unsigned long long)selectedSurchargeTypeIndex;
-(NSArray *)surchargeTypes;
-(id<GEOSurchargeType>)selectedSurchargeType;
-(void)addRequestOption:(id)arg1 ;
-(unsigned long long)requestOptionsCount;
-(void)clearRequestOptions;
-(id)requestOptionAtIndex:(unsigned long long)arg1 ;
-(void)setOptionUsed:(int)arg1 ;
-(void)setHasOptionUsed:(BOOL)arg1 ;
@end

