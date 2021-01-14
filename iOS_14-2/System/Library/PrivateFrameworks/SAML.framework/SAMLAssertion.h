/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SAMLConditions *)conditions;
-(SAMLSubject *)subject;
-(SAMLSignature *)signature;
-(NSString *)issuer;
-(SAMLAdvice *)advice;
-(BOOL)isValid:(id*)arg1 ;
-(NSString *)identifier;
-(NSArray *)authorizations;
-(NSDate *)issueInstant;
-(NSArray *)samlAttributes;
-(SAMLAuthNStatement *)authentication;
-(id)authorizationForResource:(id)arg1 ;
-(BOOL)meetsConditions:(id*)arg1 ;
-(BOOL)isValidForRequestor:(id)arg1 ;
@end

