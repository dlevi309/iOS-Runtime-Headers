/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaCasinoRelationship : PBCodable {

	NSString* _viewIDFrom;
	NSString* _viewIDTo;
	int _casinoFromType;
	SCD_Struct_SI1 _has;
	BOOL _hasViewIDFrom;
	BOOL _hasViewIDTo;

}

@property (nonatomic,copy) NSString * viewIDFrom;                 //@synthesize viewIDFrom=_viewIDFrom - In the implementation block
@property (assign,nonatomic) BOOL hasViewIDFrom;                  //@synthesize hasViewIDFrom=_hasViewIDFrom - In the implementation block
@property (nonatomic,copy) NSString * viewIDTo;                   //@synthesize viewIDTo=_viewIDTo - In the implementation block
@property (assign,nonatomic) BOOL hasViewIDTo;                    //@synthesize hasViewIDTo=_hasViewIDTo - In the implementation block
@property (assign,nonatomic) int casinoFromType;                  //@synthesize casinoFromType=_casinoFromType - In the implementation block
@property (assign,nonatomic) BOOL hasCasinoFromType; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)viewIDTo;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setViewIDFrom:(NSString *)arg1 ;
-(void)setViewIDTo:(NSString *)arg1 ;
-(void)setCasinoFromType:(int)arg1 ;
-(NSString *)viewIDFrom;
-(int)casinoFromType;
-(BOOL)hasViewIDFrom;
-(BOOL)hasViewIDTo;
-(BOOL)hasCasinoFromType;
-(void)setHasCasinoFromType:(BOOL)arg1 ;
-(void)setHasViewIDFrom:(BOOL)arg1 ;
-(void)setHasViewIDTo:(BOOL)arg1 ;
@end

