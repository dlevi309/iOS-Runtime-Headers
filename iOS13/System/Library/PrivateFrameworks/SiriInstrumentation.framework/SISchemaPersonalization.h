/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaPersonalization : PBCodable {

	BOOL _personalDomainsSetup;
	BOOL _appleMusicSubscriber;

}

@property (assign,nonatomic) BOOL personalDomainsSetup;              //@synthesize personalDomainsSetup=_personalDomainsSetup - In the implementation block
@property (assign,nonatomic) BOOL appleMusicSubscriber;              //@synthesize appleMusicSubscriber=_appleMusicSubscriber - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setPersonalDomainsSetup:(BOOL)arg1 ;
-(void)setAppleMusicSubscriber:(BOOL)arg1 ;
-(BOOL)personalDomainsSetup;
-(BOOL)appleMusicSubscriber;
@end

