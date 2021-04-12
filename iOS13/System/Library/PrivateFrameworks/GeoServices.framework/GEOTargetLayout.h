/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTargetLayout : PBCodable <NSCopying> {

	int _layoutInfo;
	int _layoutStyle;
	int _uiTarget;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasUiTarget; 
@property (assign,nonatomic) int uiTarget; 
@property (assign,nonatomic) BOOL hasLayoutInfo; 
@property (assign,nonatomic) int layoutInfo; 
@property (assign,nonatomic) BOOL hasLayoutStyle; 
@property (assign,nonatomic) int layoutStyle; 
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
-(void)setLayoutStyle:(int)arg1 ;
-(int)layoutStyle;
-(int)layoutInfo;
-(void)setLayoutInfo:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasLayoutInfo:(BOOL)arg1 ;
-(BOOL)hasLayoutInfo;
-(id)layoutInfoAsString:(int)arg1 ;
-(int)StringAsLayoutInfo:(id)arg1 ;
-(void)setHasLayoutStyle:(BOOL)arg1 ;
-(BOOL)hasLayoutStyle;
-(id)layoutStyleAsString:(int)arg1 ;
-(int)StringAsLayoutStyle:(id)arg1 ;
-(int)uiTarget;
-(void)setUiTarget:(int)arg1 ;
-(void)setHasUiTarget:(BOOL)arg1 ;
-(BOOL)hasUiTarget;
-(id)uiTargetAsString:(int)arg1 ;
-(int)StringAsUiTarget:(id)arg1 ;
@end

