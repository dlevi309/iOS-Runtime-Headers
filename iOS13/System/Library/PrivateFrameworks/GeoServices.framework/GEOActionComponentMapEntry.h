/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOActionComponentMapEntry : PBCodable <NSCopying> {

	SCD_Struct_GE1* _placeDataComponents;
	int _actionComponent;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasActionComponent; 
@property (assign,nonatomic) int actionComponent; 
@property (nonatomic,readonly) unsigned long long placeDataComponentsCount; 
@property (nonatomic,readonly) int* placeDataComponents; 
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
-(unsigned long long)placeDataComponentsCount;
-(void)clearPlaceDataComponents;
-(int)placeDataComponentsAtIndex:(unsigned long long)arg1 ;
-(void)addPlaceDataComponents:(int)arg1 ;
-(int)actionComponent;
-(void)setActionComponent:(int)arg1 ;
-(void)setHasActionComponent:(BOOL)arg1 ;
-(BOOL)hasActionComponent;
-(id)actionComponentAsString:(int)arg1 ;
-(int)StringAsActionComponent:(id)arg1 ;
-(int*)placeDataComponents;
-(void)setPlaceDataComponents:(int*)arg1 count:(unsigned long long)arg2 ;
@end

