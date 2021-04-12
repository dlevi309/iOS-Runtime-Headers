/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLNameId;

@interface SAMLLogoutRequestElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,retain) NSString * destination; 
@property (nonatomic,readonly) NSString * consent; 
@property (nonatomic,retain) NSString * reason; 
@property (nonatomic,retain) NSDate * notOnOrAfter; 
@property (nonatomic,retain) NSString * issuer; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,readonly) SAMLNameId * nameId; 
@property (nonatomic,retain) NSString * sessionIndex; 
+(id)createElement:(id*)arg1 ;
-(SAMLSignature *)signature;
-(void)setDestination:(NSString *)arg1 ;
-(NSString *)issuer;
-(void)setIssuer:(NSString *)arg1 ;
-(SAMLNameId *)nameId;
-(NSString *)reason;
-(NSString *)consent;
-(NSString *)identifier;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)destination;
-(NSString *)sessionIndex;
-(void)setSessionIndex:(NSString *)arg1 ;
-(NSDate *)notOnOrAfter;
-(NSDate *)issueInstant;
-(void)setNotOnOrAfter:(NSDate *)arg1 ;
@end

