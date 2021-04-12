/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)landscape;
-(void)setLayoutStyle:(int)arg1 ;
-(int)layoutStyle;
-(void)setLandscape:(BOOL)arg1 ;
-(int)layoutInfo;
-(void)setLayoutInfo:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasLandscape:(BOOL)arg1 ;
-(BOOL)hasLandscape;
-(GEOMultiTabsState *)multiTabsState;
-(void)setMultiTabsState:(GEOMultiTabsState *)arg1 ;
-(void)setHasLayoutInfo:(BOOL)arg1 ;
-(BOOL)hasLayoutInfo;
-(id)layoutInfoAsString:(int)arg1 ;
-(int)StringAsLayoutInfo:(id)arg1 ;
-(BOOL)hasMultiTabsState;
-(void)setHasLayoutStyle:(BOOL)arg1 ;
-(BOOL)hasLayoutStyle;
-(id)layoutStyleAsString:(int)arg1 ;
-(int)StringAsLayoutStyle:(id)arg1 ;
@end

