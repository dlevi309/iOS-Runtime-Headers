/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSArray, SISchemaSiriResponseContext, NSData;

@interface SISchemaUUFRCompletion : PBCodable {

	int _completionStatus;
	NSArray* _homeKitAccessoryResponses;
	SISchemaSiriResponseContext* _siriResponseContext;
	SCD_Struct_SI1 _has;
	BOOL _hasSiriResponseContext;

}

@property (assign,nonatomic) int completionStatus;                                           //@synthesize completionStatus=_completionStatus - In the implementation block
@property (assign,nonatomic) BOOL hasCompletionStatus; 
@property (nonatomic,copy) NSArray * homeKitAccessoryResponses;                              //@synthesize homeKitAccessoryResponses=_homeKitAccessoryResponses - In the implementation block
@property (nonatomic,retain) SISchemaSiriResponseContext * siriResponseContext;              //@synthesize siriResponseContext=_siriResponseContext - In the implementation block
@property (assign,nonatomic) BOOL hasSiriResponseContext;                                    //@synthesize hasSiriResponseContext=_hasSiriResponseContext - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(int)completionStatus;
-(void)setCompletionStatus:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCompletionStatus;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSiriResponseContext:(SISchemaSiriResponseContext *)arg1 ;
-(void)addHomeKitAccessoryResponse:(id)arg1 ;
-(SISchemaSiriResponseContext *)siriResponseContext;
-(NSArray *)homeKitAccessoryResponses;
-(void)setHasCompletionStatus:(BOOL)arg1 ;
-(void)clearHomeKitAccessoryResponse;
-(unsigned long long)homeKitAccessoryResponseCount;
-(id)homeKitAccessoryResponseAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSiriResponseContext;
-(void)setHomeKitAccessoryResponses:(NSArray *)arg1 ;
-(void)setHasSiriResponseContext:(BOOL)arg1 ;
@end

