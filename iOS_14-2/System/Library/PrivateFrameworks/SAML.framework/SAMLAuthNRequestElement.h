/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLSubject, SAMLNameIdPolicy, SAMLConditions, SAMLRequestedAuthNContext, SAMLScoping;

@interface SAMLAuthNRequestElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,retain) NSString * destination; 
@property (nonatomic,readonly) NSString * consent; 
@property (assign,nonatomic) BOOL forceAuthN; 
@property (assign,nonatomic) BOOL isPassive; 
@property (nonatomic,retain) NSString * providerName; 
@property (nonatomic,retain) NSString * issuer; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,retain) SAMLSubject * subject; 
@property (nonatomic,retain) SAMLNameIdPolicy * nameIdPolicy; 
@property (nonatomic,retain) SAMLConditions * conditions; 
@property (nonatomic,readonly) SAMLRequestedAuthNContext * context; 
@property (nonatomic,retain) SAMLScoping * scoping; 
+(id)createElement:(id*)arg1 ;
-(SAMLConditions *)conditions;
-(void)setConditions:(SAMLConditions *)arg1 ;
-(SAMLSubject *)subject;
-(SAMLSignature *)signature;
-(void)setDestination:(NSString *)arg1 ;
-(NSString *)issuer;
-(SAMLRequestedAuthNContext *)context;
-(void)setIssuer:(NSString *)arg1 ;
-(NSString *)consent;
-(NSString *)identifier;
-(void)setProviderName:(NSString *)arg1 ;
-(void)setSubject:(SAMLSubject *)arg1 ;
-(NSString *)destination;
-(SAMLScoping *)scoping;
-(NSString *)providerName;
-(NSDate *)issueInstant;
-(BOOL)forceAuthN;
-(void)setForceAuthN:(BOOL)arg1 ;
-(BOOL)isPassive;
-(void)setIsPassive:(BOOL)arg1 ;
-(SAMLNameIdPolicy *)nameIdPolicy;
-(void)setNameIdPolicy:(SAMLNameIdPolicy *)arg1 ;
-(void)setScoping:(SAMLScoping *)arg1 ;
@end

