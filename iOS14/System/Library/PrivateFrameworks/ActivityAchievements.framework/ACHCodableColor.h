/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setGreen:(double)arg1 ;
-(double)red;
-(BOOL)hasRed;
-(BOOL)hasBlue;
-(void)setRed:(double)arg1 ;
-(void)setHasBlue:(BOOL)arg1 ;
-(void)setHasGreen:(BOOL)arg1 ;
-(void)setHasRed:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(double)blue;
-(BOOL)hasGreen;
-(unsigned long long)hash;
-(double)green;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBlue:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

