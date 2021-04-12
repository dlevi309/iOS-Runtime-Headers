/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isValid;
-(NSString *)identifier;
-(SAMLKeyInfo *)keyInfo;
-(SAMLSignedInfo *)signedInfo;
-(NSData *)signatureValue;
-(NSString *)signatureValueId;
@end

