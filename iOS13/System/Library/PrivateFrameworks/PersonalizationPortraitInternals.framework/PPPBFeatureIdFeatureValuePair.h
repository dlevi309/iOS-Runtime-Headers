/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBFeatureIdFeatureValuePair : PBCodable <NSCopying> {

	NSString* _featureId;
	float _value;
	SCD_Struct_PP1 _has;

}

@property (nonatomic,readonly) BOOL hasFeatureId; 
@property (nonatomic,retain) NSString * featureId;              //@synthesize featureId=_featureId - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) float value;                       //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasValue;
-(NSString *)featureId;
-(void)setFeatureId:(NSString *)arg1 ;
-(BOOL)hasFeatureId;
-(void)setHasValue:(BOOL)arg1 ;
@end

