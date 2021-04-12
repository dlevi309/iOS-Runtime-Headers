/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

