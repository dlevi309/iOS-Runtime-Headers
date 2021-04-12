/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBWidgetPersonalizationFeatureCTRPair : PBCodable <NSCopying> {

	float _ctr;
	NSString* _personalizationFeatureId;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasPersonalizationFeatureId; 
@property (nonatomic,retain) NSString * personalizationFeatureId;              //@synthesize personalizationFeatureId=_personalizationFeatureId - In the implementation block
@property (assign,nonatomic) BOOL hasCtr; 
@property (assign,nonatomic) float ctr;                                        //@synthesize ctr=_ctr - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPersonalizationFeatureId:(NSString *)arg1 ;
-(BOOL)hasPersonalizationFeatureId;
-(void)setCtr:(float)arg1 ;
-(void)setHasCtr:(BOOL)arg1 ;
-(BOOL)hasCtr;
-(NSString *)personalizationFeatureId;
-(float)ctr;
@end

