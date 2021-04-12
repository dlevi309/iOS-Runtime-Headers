/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaSiriResponseContext : PBCodable {

	NSString* _dialogPhase;
	int _presentationType;
	int _siriResponseMode;
	SCD_Struct_SI3 _has;
	BOOL _hasDialogPhase;

}

@property (nonatomic,copy) NSString * dialogPhase;                  //@synthesize dialogPhase=_dialogPhase - In the implementation block
@property (assign,nonatomic) BOOL hasDialogPhase;                   //@synthesize hasDialogPhase=_hasDialogPhase - In the implementation block
@property (assign,nonatomic) int presentationType;                  //@synthesize presentationType=_presentationType - In the implementation block
@property (assign,nonatomic) BOOL hasPresentationType; 
@property (assign,nonatomic) int siriResponseMode;                  //@synthesize siriResponseMode=_siriResponseMode - In the implementation block
@property (assign,nonatomic) BOOL hasSiriResponseMode; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)dialogPhase;
-(void)setPresentationType:(int)arg1 ;
-(int)presentationType;
-(void)setDialogPhase:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSiriResponseMode:(int)arg1 ;
-(int)siriResponseMode;
-(BOOL)hasDialogPhase;
-(BOOL)hasPresentationType;
-(void)setHasPresentationType:(BOOL)arg1 ;
-(BOOL)hasSiriResponseMode;
-(void)setHasSiriResponseMode:(BOOL)arg1 ;
-(void)setHasDialogPhase:(BOOL)arg1 ;
@end

