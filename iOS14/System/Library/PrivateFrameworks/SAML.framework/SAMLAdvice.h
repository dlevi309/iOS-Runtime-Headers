/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class SAMLAssertion, NSString;

@interface SAMLAdvice : SAMLBaseElement

@property (nonatomic,retain) SAMLAssertion * assertion; 
@property (nonatomic,retain) NSString * assertionIDRef; 
@property (nonatomic,retain) NSString * assertionURIRef; 
+(id)createElement:(id*)arg1 ;
-(void)setAssertion:(SAMLAssertion *)arg1 ;
-(SAMLAssertion *)assertion;
-(NSString *)assertionURIRef;
-(NSString *)assertionIDRef;
-(void)setAssertionIDRef:(NSString *)arg1 ;
-(void)setAssertionURIRef:(NSString *)arg1 ;
@end

