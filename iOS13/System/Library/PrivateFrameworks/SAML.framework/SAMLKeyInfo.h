/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(NSString *)keyName;
-(SAMLSignatureKeyValue *)keyValue;
-(SAMLKeyRetrievalMethod *)retrievalMethod;
-(SAMLX509Data *)x509Data;
-(SAMLPGPData *)pgpData;
-(NSData *)spkiSexpData;
-(NSString *)mgmtData;
@end

