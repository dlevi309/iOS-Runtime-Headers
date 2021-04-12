/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasPersonalizationMethod; 
@property (assign,nonatomic) int personalizationMethod;                                                   //@synthesize personalizationMethod=_personalizationMethod - In the implementation block
@property (nonatomic,readonly) BOOL hasRelativeConfig; 
@property (nonatomic,retain) NTPBRelativePersonalizedSectionPresenceConfig * relativeConfig;              //@synthesize relativeConfig=_relativeConfig - In the implementation block
@property (nonatomic,readonly) BOOL hasAbsoluteConfig; 
@property (nonatomic,retain) NTPBAbsolutePersonalizedSectionPresenceConfig * absoluteConfig;              //@synthesize absoluteConfig=_absoluteConfig - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPersonalizationMethod:(int)arg1 ;
-(void)setAbsoluteConfig:(NTPBAbsolutePersonalizedSectionPresenceConfig *)arg1 ;
-(void)setRelativeConfig:(NTPBRelativePersonalizedSectionPresenceConfig *)arg1 ;
-(int)personalizationMethod;
-(void)setHasPersonalizationMethod:(BOOL)arg1 ;
-(BOOL)hasPersonalizationMethod;
-(BOOL)hasRelativeConfig;
-(BOOL)hasAbsoluteConfig;
-(NTPBRelativePersonalizedSectionPresenceConfig *)relativeConfig;
-(NTPBAbsolutePersonalizedSectionPresenceConfig *)absoluteConfig;
@end

