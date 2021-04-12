/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAML-Structs.h>
#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLNameId, NSDate;

@interface SAMLSubjectConfirmation : SAMLBaseElement

@property (nonatomic,readonly) NSString * method; 
@property (nonatomic,readonly) SAMLNameId * nameId; 
@property (nonatomic,readonly) NSDate * notBefore; 
@property (nonatomic,readonly) NSDate * notOnOrAfter; 
@property (nonatomic,readonly) NSString * recipient; 
@property (nonatomic,readonly) NSString * inResponseTo; 
@property (nonatomic,readonly) NSString * address; 
+(id)createElement:(id*)arg1 ;
-(NSString *)method;
-(NSString *)address;
-(SAMLNameId *)nameId;
-(NSString *)recipient;
-(NSDate *)notBefore;
-(NSDate *)notOnOrAfter;
-(xmlNode*)xmlNode:(id*)arg1 ;
-(NSString *)inResponseTo;
@end

