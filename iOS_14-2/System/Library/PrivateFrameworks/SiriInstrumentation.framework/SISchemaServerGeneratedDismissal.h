/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaServerGeneratedDismissal : PBCodable {

	int _serverGeneratedDismissalReason;
	SCD_Struct_SI1 _has;

}

@property (assign,nonatomic) int serverGeneratedDismissalReason;                  //@synthesize serverGeneratedDismissalReason=_serverGeneratedDismissalReason - In the implementation block
@property (assign,nonatomic) BOOL hasServerGeneratedDismissalReason; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setServerGeneratedDismissalReason:(int)arg1 ;
-(int)serverGeneratedDismissalReason;
-(BOOL)hasServerGeneratedDismissalReason;
-(void)setHasServerGeneratedDismissalReason:(BOOL)arg1 ;
@end

