/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLAssertion;

@interface SAMLEvidence : SAMLBaseElement

@property (nonatomic,readonly) NSString * assertionIdRef; 
@property (nonatomic,readonly) NSString * assertionURIRef; 
@property (nonatomic,readonly) SAMLAssertion * assertion; 
+(id)createElement:(id*)arg1 ;
-(SAMLAssertion *)assertion;
-(NSString *)assertionIdRef;
-(NSString *)assertionURIRef;
@end

