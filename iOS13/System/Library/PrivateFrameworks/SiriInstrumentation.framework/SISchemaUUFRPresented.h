/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaViewContainer, NSString, NSData;

@interface SISchemaUUFRPresented : PBCodable {

	int _errorCode;
	SISchemaViewContainer* _viewContainer;
	NSString* _errorDomain;

}

@property (nonatomic,retain) SISchemaViewContainer * viewContainer;              //@synthesize viewContainer=_viewContainer - In the implementation block
@property (nonatomic,copy) NSString * errorDomain;                               //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) int errorCode;                                      //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)errorCode;
-(NSString *)errorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setViewContainer:(SISchemaViewContainer *)arg1 ;
-(SISchemaViewContainer *)viewContainer;
@end

