/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaPersonalization, NSData;

@interface SISchemaEnrolledUserState : PBCodable {

	NSString* _siriLinkedSpeechID;
	SISchemaPersonalization* _personalization;
	BOOL _hasSiriLinkedSpeechID;
	BOOL _hasPersonalization;

}

@property (nonatomic,copy) NSString * siriLinkedSpeechID;                            //@synthesize siriLinkedSpeechID=_siriLinkedSpeechID - In the implementation block
@property (assign,nonatomic) BOOL hasSiriLinkedSpeechID;                             //@synthesize hasSiriLinkedSpeechID=_hasSiriLinkedSpeechID - In the implementation block
@property (nonatomic,retain) SISchemaPersonalization * personalization;              //@synthesize personalization=_personalization - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalization;                                //@synthesize hasPersonalization=_hasPersonalization - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(void)setPersonalization:(SISchemaPersonalization *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(SISchemaPersonalization *)personalization;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPersonalization;
-(void)setHasPersonalization:(BOOL)arg1 ;
-(void)setSiriLinkedSpeechID:(NSString *)arg1 ;
-(NSString *)siriLinkedSpeechID;
-(BOOL)hasSiriLinkedSpeechID;
-(void)setHasSiriLinkedSpeechID:(BOOL)arg1 ;
@end

