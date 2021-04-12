/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
*/

#import <ActivityAchievements/ActivityAchievements-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ACHCodableColor : PBCodable <NSCopying> {

	double _blue;
	double _green;
	double _red;
	SCD_Struct_AC1 _has;

}

@property (assign,nonatomic) BOOL hasRed; 
@property (assign,nonatomic) double red;                 //@synthesize red=_red - In the implementation block
@property (assign,nonatomic) BOOL hasGreen; 
@property (assign,nonatomic) double green;               //@synthesize green=_green - In the implementation block
@property (assign,nonatomic) BOOL hasBlue; 
@property (assign,nonatomic) double blue;                //@synthesize blue=_blue - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(double)red;
-(double)green;
-(double)blue;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBlue:(double)arg1 ;
-(void)setGreen:(double)arg1 ;
-(void)setRed:(double)arg1 ;
-(void)setHasRed:(BOOL)arg1 ;
-(BOOL)hasRed;
-(void)setHasGreen:(BOOL)arg1 ;
-(BOOL)hasGreen;
-(void)setHasBlue:(BOOL)arg1 ;
-(BOOL)hasBlue;
@end

