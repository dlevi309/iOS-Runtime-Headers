/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLSignedInfo, NSData, SAMLKeyInfo;

@interface SAMLSignature : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) SAMLSignedInfo * signedInfo; 
@property (nonatomic,readonly) NSData * signatureValue; 
@property (nonatomic,readonly) NSString * signatureValueId; 
@property (nonatomic,readonly) SAMLKeyInfo * keyInfo; 
+(id)createElement:(id*)arg1 ;
-(SAMLKeyInfo *)keyInfo;
-(BOOL)isValid;
-(NSString *)identifier;
-(SAMLSignedInfo *)signedInfo;
-(NSData *)signatureValue;
-(NSString *)signatureValueId;
@end

