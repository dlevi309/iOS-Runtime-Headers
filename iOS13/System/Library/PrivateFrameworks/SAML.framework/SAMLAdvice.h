/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class SAMLAssertion, NSString;

@interface SAMLAdvice : SAMLBaseElement

@property (nonatomic,retain) SAMLAssertion * assertion; 
@property (nonatomic,retain) NSString * assertionIDRef; 
@property (nonatomic,retain) NSString * assertionURIRef; 
+(id)createElement:(id*)arg1 ;
-(SAMLAssertion *)assertion;
-(void)setAssertion:(SAMLAssertion *)arg1 ;
-(NSString *)assertionURIRef;
-(NSString *)assertionIDRef;
-(void)setAssertionIDRef:(NSString *)arg1 ;
-(void)setAssertionURIRef:(NSString *)arg1 ;
@end

