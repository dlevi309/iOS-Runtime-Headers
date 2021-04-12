/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaSiriResponseContext, NSData;

@interface SISchemaUUFRFatalError : PBCodable {

	NSString* _errorDomain;
	int _errorCode;
	SISchemaSiriResponseContext* _siriResponseContext;
	SCD_Struct_SI1 _has;
	BOOL _hasErrorDomain;
	BOOL _hasSiriResponseContext;

}

@property (nonatomic,copy) NSString * errorDomain;                                           //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorDomain;                                            //@synthesize hasErrorDomain=_hasErrorDomain - In the implementation block
@property (assign,nonatomic) int errorCode;                                                  //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (nonatomic,retain) SISchemaSiriResponseContext * siriResponseContext;              //@synthesize siriResponseContext=_siriResponseContext - In the implementation block
@property (assign,nonatomic) BOOL hasSiriResponseContext;                                    //@synthesize hasSiriResponseContext=_hasSiriResponseContext - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(NSData *)jsonData;
-(int)errorCode;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setSiriResponseContext:(SISchemaSiriResponseContext *)arg1 ;
-(SISchemaSiriResponseContext *)siriResponseContext;
-(BOOL)hasSiriResponseContext;
-(void)setHasSiriResponseContext:(BOOL)arg1 ;
-(void)setHasErrorDomain:(BOOL)arg1 ;
@end

