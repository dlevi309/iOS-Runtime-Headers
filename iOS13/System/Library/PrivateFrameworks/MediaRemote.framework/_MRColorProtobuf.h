/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRColorProtobuf : PBCodable <NSCopying> {

	float _alpha;
	float _blue;
	float _green;
	float _red;
	SCD_Struct_MR15 _has;

}

@property (assign,nonatomic) BOOL hasRed; 
@property (assign,nonatomic) float red;                  //@synthesize red=_red - In the implementation block
@property (assign,nonatomic) BOOL hasGreen; 
@property (assign,nonatomic) float green;                //@synthesize green=_green - In the implementation block
@property (assign,nonatomic) BOOL hasBlue; 
@property (assign,nonatomic) float blue;                 //@synthesize blue=_blue - In the implementation block
@property (assign,nonatomic) BOOL hasAlpha; 
@property (assign,nonatomic) float alpha;                //@synthesize alpha=_alpha - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(float)red;
-(float)green;
-(float)blue;
-(float)alpha;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(void)setBlue:(float)arg1 ;
-(void)setGreen:(float)arg1 ;
-(void)setRed:(float)arg1 ;
-(void)setHasAlpha:(BOOL)arg1 ;
-(BOOL)hasAlpha;
-(void)setHasRed:(BOOL)arg1 ;
-(BOOL)hasRed;
-(void)setHasGreen:(BOOL)arg1 ;
-(BOOL)hasGreen;
-(void)setHasBlue:(BOOL)arg1 ;
-(BOOL)hasBlue;
@end

