/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(void)setFeatureId:(NSString *)arg1 ;
-(BOOL)hasFeatureId;
-(void)setValue:(float)arg1 ;
-(NSString *)featureId;
-(id)description;
-(void)setHasValue:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)value;
-(BOOL)isEqual:(id)arg1 ;
@end

