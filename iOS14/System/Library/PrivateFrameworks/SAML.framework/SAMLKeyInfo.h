/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLSignatureKeyValue, SAMLKeyRetrievalMethod, SAMLX509Data, SAMLPGPData, NSData;

@interface SAMLKeyInfo : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * keyName; 
@property (nonatomic,readonly) SAMLSignatureKeyValue * keyValue; 
@property (nonatomic,readonly) SAMLKeyRetrievalMethod * retrievalMethod; 
@property (nonatomic,readonly) SAMLX509Data * x509Data; 
@property (nonatomic,readonly) SAMLPGPData * pgpData; 
@property (nonatomic,readonly) NSData * spkiSexpData; 
@property (nonatomic,readonly) NSString * mgmtData; 
+(id)createElement:(id*)arg1 ;
-(NSString *)keyName;
-(NSString *)identifier;
-(SAMLSignatureKeyValue *)keyValue;
-(SAMLPGPData *)pgpData;
-(SAMLKeyRetrievalMethod *)retrievalMethod;
-(SAMLX509Data *)x509Data;
-(NSData *)spkiSexpData;
-(NSString *)mgmtData;
@end

