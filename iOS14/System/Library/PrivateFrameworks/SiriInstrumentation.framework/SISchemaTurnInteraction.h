/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaTurnInteraction : PBCodable {

	NSString* _interactionId;
	BOOL _hasInteractionId;

}

@property (nonatomic,copy) NSString * interactionId;              //@synthesize interactionId=_interactionId - In the implementation block
@property (assign,nonatomic) BOOL hasInteractionId;               //@synthesize hasInteractionId=_hasInteractionId - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasInteractionId;
-(void)setHasInteractionId:(BOOL)arg1 ;
@end

