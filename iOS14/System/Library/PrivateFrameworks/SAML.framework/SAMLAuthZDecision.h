/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)decision;
-(SAMLEvidence *)evidence;
@end

