/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBAbsolutePersonalizedSectionPresenceConfig, NTPBRelativePersonalizedSectionPresenceConfig;

@interface NTPBPersonalizedSectionPresenceConfig : PBCodable <NSCopying> {

	NTPBAbsolutePersonalizedSectionPresenceConfig* _absoluteConfig;
	int _personalizationMethod;
	NTPBRelativePersonalizedSectionPresenceConfig* _relativeConfig;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasPersonalizationMethod; 
@property (assign,nonatomic) int personalizationMethod;                                                   //@synthesize personalizationMethod=_personalizationMethod - In the implementation block
@property (nonatomic,readonly) BOOL hasRelativeConfig; 
@property (nonatomic,retain) NTPBRelativePersonalizedSectionPresenceConfig * relativeConfig;              //@synthesize relativeConfig=_relativeConfig - In the implementation block
@property (nonatomic,readonly) BOOL hasAbsoluteConfig; 
@property (nonatomic,retain) NTPBAbsolutePersonalizedSectionPresenceConfig * absoluteConfig;              //@synthesize absoluteConfig=_absoluteConfig - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasPersonalizationMethod:(BOOL)arg1 ;
-(BOOL)hasPersonalizationMethod;
-(BOOL)hasRelativeConfig;
-(BOOL)hasAbsoluteConfig;
-(NTPBRelativePersonalizedSectionPresenceConfig *)relativeConfig;
-(NTPBAbsolutePersonalizedSectionPresenceConfig *)absoluteConfig;
-(void)mergeFrom:(id)arg1 ;
-(int)personalizationMethod;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPersonalizationMethod:(int)arg1 ;
-(void)setAbsoluteConfig:(NTPBAbsolutePersonalizedSectionPresenceConfig *)arg1 ;
-(void)setRelativeConfig:(NTPBRelativePersonalizedSectionPresenceConfig *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

