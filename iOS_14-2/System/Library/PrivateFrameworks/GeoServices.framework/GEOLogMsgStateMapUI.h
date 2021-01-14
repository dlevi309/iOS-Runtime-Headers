/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMultiTabsState;

@interface GEOLogMsgStateMapUI : PBCodable <NSCopying> {

	GEOMultiTabsState* _multiTabsState;
	int _layoutInfo;
	int _layoutStyle;
	BOOL _landscape;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasLayoutInfo; 
@property (assign,nonatomic) int layoutInfo; 
@property (nonatomic,readonly) BOOL hasMultiTabsState; 
@property (nonatomic,retain) GEOMultiTabsState * multiTabsState; 
@property (assign,nonatomic) BOOL hasLayoutStyle; 
@property (assign,nonatomic) int layoutStyle; 
@property (assign,nonatomic) BOOL hasLandscape; 
@property (assign,nonatomic) BOOL landscape; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasLayoutInfo;
-(id)dictionaryRepresentation;
-(void)setLayoutStyle:(int)arg1 ;
-(BOOL)hasLayoutStyle;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)layoutStyleAsString:(int)arg1 ;
-(int)layoutStyle;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)landscape;
-(int)layoutInfo;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasLandscape;
-(id)description;
-(void)setHasLandscape:(BOOL)arg1 ;
-(void)setHasLayoutInfo:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(id)layoutInfoAsString:(int)arg1 ;
-(void)setLayoutInfo:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)StringAsLayoutInfo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasLayoutStyle:(BOOL)arg1 ;
-(int)StringAsLayoutStyle:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setMultiTabsState:(GEOMultiTabsState *)arg1 ;
-(BOOL)hasMultiTabsState;
-(BOOL)isEqual:(id)arg1 ;
-(GEOMultiTabsState *)multiTabsState;
-(void)setLandscape:(BOOL)arg1 ;
@end

