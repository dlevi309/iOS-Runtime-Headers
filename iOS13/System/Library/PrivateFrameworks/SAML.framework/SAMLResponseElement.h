/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLStatus, NSArray;

@interface SAMLResponseElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * relatedRequest; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,readonly) NSString * destination; 
@property (nonatomic,readonly) NSString * consent; 
@property (nonatomic,readonly) NSString * issuer; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,readonly) SAMLStatus * status; 
@property (nonatomic,readonly) NSArray * assertions; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(SAMLStatus *)status;
-(NSString *)destination;
-(SAMLSignature *)signature;
-(NSString *)issuer;
-(NSArray *)assertions;
-(NSString *)consent;
-(BOOL)assertionMeetsConditions:(id*)arg1 ;
-(NSDate *)issueInstant;
-(id)authnStatement;
-(NSString *)relatedRequest;
@end

