/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaPersonalization : PBCodable {

	BOOL _personalDomainsSetup;
	BOOL _appleMusicSubscriber;
	SCD_Struct_SI3 _has;

}

@property (assign,nonatomic) BOOL personalDomainsSetup;                 //@synthesize personalDomainsSetup=_personalDomainsSetup - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalDomainsSetup; 
@property (assign,nonatomic) BOOL appleMusicSubscriber;                 //@synthesize appleMusicSubscriber=_appleMusicSubscriber - In the implementation block
@property (assign,nonatomic) BOOL hasAppleMusicSubscriber; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPersonalDomainsSetup:(BOOL)arg1 ;
-(void)setAppleMusicSubscriber:(BOOL)arg1 ;
-(BOOL)personalDomainsSetup;
-(BOOL)appleMusicSubscriber;
-(BOOL)hasPersonalDomainsSetup;
-(void)setHasPersonalDomainsSetup:(BOOL)arg1 ;
-(BOOL)hasAppleMusicSubscriber;
-(void)setHasAppleMusicSubscriber:(BOOL)arg1 ;
@end

