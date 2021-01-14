/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class SAMLNameId, NSArray;

@interface SAMLSubject : SAMLBaseElement

@property (nonatomic,readonly) SAMLNameId * nameId; 
@property (nonatomic,readonly) NSArray * subjectConfirmations; 
+(id)createElement:(id*)arg1 ;
-(SAMLNameId *)nameId;
-(NSArray *)subjectConfirmations;
@end

