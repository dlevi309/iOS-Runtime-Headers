/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)reason;
-(NSString *)identifier;
-(NSString *)destination;
-(void)setDestination:(NSString *)arg1 ;
-(SAMLSignature *)signature;
-(NSString *)issuer;
-(void)setReason:(NSString *)arg1 ;
-(void)setIssuer:(NSString *)arg1 ;
-(NSString *)sessionIndex;
-(void)setSessionIndex:(NSString *)arg1 ;
-(NSString *)consent;
-(NSDate *)notOnOrAfter;
-(NSDate *)issueInstant;
-(SAMLNameId *)nameId;
-(void)setNotOnOrAfter:(NSDate *)arg1 ;
@end

