/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSArray, SAMLEvidence, NSString;

@interface SAMLAuthZDecision : SAMLBaseElement

@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) SAMLEvidence * evidence; 
@property (nonatomic,readonly) NSString * decision; 
@property (nonatomic,readonly) NSString * resource; 
+(id)createElement:(id*)arg1 ;
-(NSArray *)actions;
-(NSString *)resource;
-(SAMLEvidence *)evidence;
-(NSString *)decision;
@end

