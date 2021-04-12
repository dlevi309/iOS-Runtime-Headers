/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXNotificationsPBContentFeatures : PBCodable <NSCopying> {

	float _maxEntityScore;
	float _sumCount;
	float _titleMatch;
	float _uniqueCount;
	SCD_Struct_AT1 _has;

}

@property (assign,nonatomic) BOOL hasSumCount; 
@property (assign,nonatomic) float sumCount;                      //@synthesize sumCount=_sumCount - In the implementation block
@property (assign,nonatomic) BOOL hasTitleMatch; 
@property (assign,nonatomic) float titleMatch;                    //@synthesize titleMatch=_titleMatch - In the implementation block
@property (assign,nonatomic) BOOL hasUniqueCount; 
@property (assign,nonatomic) float uniqueCount;                   //@synthesize uniqueCount=_uniqueCount - In the implementation block
@property (assign,nonatomic) BOOL hasMaxEntityScore; 
@property (assign,nonatomic) float maxEntityScore;                //@synthesize maxEntityScore=_maxEntityScore - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSumCount:(float)arg1 ;
-(void)setHasSumCount:(BOOL)arg1 ;
-(BOOL)hasSumCount;
-(void)setTitleMatch:(float)arg1 ;
-(void)setHasTitleMatch:(BOOL)arg1 ;
-(BOOL)hasTitleMatch;
-(void)setUniqueCount:(float)arg1 ;
-(void)setHasUniqueCount:(BOOL)arg1 ;
-(BOOL)hasUniqueCount;
-(void)setMaxEntityScore:(float)arg1 ;
-(void)setHasMaxEntityScore:(BOOL)arg1 ;
-(BOOL)hasMaxEntityScore;
-(float)sumCount;
-(float)titleMatch;
-(float)uniqueCount;
-(float)maxEntityScore;
@end

