/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)assertions;
-(SAMLSignature *)signature;
-(NSString *)issuer;
-(NSString *)consent;
-(NSString *)identifier;
-(NSString *)destination;
-(SAMLStatus *)status;
-(BOOL)assertionMeetsConditions:(id*)arg1 ;
-(NSDate *)issueInstant;
-(id)authnStatement;
-(NSString *)relatedRequest;
@end

