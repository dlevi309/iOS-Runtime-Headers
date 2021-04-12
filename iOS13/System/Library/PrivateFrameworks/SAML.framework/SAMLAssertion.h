/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSDate, NSString, NSArray, SAMLAuthNStatement, SAMLSignature, SAMLSubject, SAMLConditions, SAMLAdvice;

@interface SAMLAssertion : SAMLBaseElement

@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSArray * samlAttributes; 
@property (nonatomic,readonly) SAMLAuthNStatement * authentication; 
@property (nonatomic,readonly) NSArray * authorizations; 
@property (nonatomic,readonly) NSString * issuer; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,readonly) SAMLSubject * subject; 
@property (nonatomic,readonly) SAMLConditions * conditions; 
@property (nonatomic,readonly) SAMLAdvice * advice; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(SAMLSubject *)subject;
-(SAMLSignature *)signature;
-(NSString *)issuer;
-(BOOL)isValid:(id*)arg1 ;
-(SAMLConditions *)conditions;
-(SAMLAdvice *)advice;
-(NSArray *)authorizations;
-(SAMLAuthNStatement *)authentication;
-(NSDate *)issueInstant;
-(NSArray *)samlAttributes;
-(id)authorizationForResource:(id)arg1 ;
-(BOOL)meetsConditions:(id*)arg1 ;
-(BOOL)isValidForRequestor:(id)arg1 ;
@end

