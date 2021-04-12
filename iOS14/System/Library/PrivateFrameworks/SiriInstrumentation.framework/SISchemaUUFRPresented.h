/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class SISchemaViewContainer, NSString, NSData;

@interface SISchemaUUFRPresented : PBCodable {

	SISchemaViewContainer* _viewContainer;
	NSString* _errorDomain;
	int _errorCode;
	SCD_Struct_SI1 _has;
	BOOL _hasViewContainer;
	BOOL _hasErrorDomain;

}

@property (nonatomic,retain) SISchemaViewContainer * viewContainer;              //@synthesize viewContainer=_viewContainer - In the implementation block
@property (assign,nonatomic) BOOL hasViewContainer;                              //@synthesize hasViewContainer=_hasViewContainer - In the implementation block
@property (nonatomic,copy) NSString * errorDomain;                               //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorDomain;                                //@synthesize hasErrorDomain=_hasErrorDomain - In the implementation block
@property (assign,nonatomic) int errorCode;                                      //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
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
-(void)setViewContainer:(SISchemaViewContainer *)arg1 ;
-(SISchemaViewContainer *)viewContainer;
-(BOOL)hasViewContainer;
-(void)setHasViewContainer:(BOOL)arg1 ;
-(void)setHasErrorDomain:(BOOL)arg1 ;
@end

