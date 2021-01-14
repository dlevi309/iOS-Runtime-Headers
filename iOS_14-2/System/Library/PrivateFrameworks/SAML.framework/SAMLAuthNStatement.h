/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSDate, NSString;

@interface SAMLAuthNStatement : SAMLBaseElement

@property (nonatomic,readonly) NSDate * authnInstant; 
@property (nonatomic,readonly) NSString * sessionIndex; 
@property (nonatomic,readonly) NSDate * sessionNotOnOrAfter; 
@property (nonatomic,readonly) NSString * authnContextClassRef; 
@property (nonatomic,readonly) NSString * authnContextDecl; 
@property (nonatomic,readonly) NSString * authnContextDeclRef; 
@property (nonatomic,readonly) NSString * authenticatingAuthority; 
@property (nonatomic,readonly) NSString * subjectAddress; 
@property (nonatomic,readonly) NSString * subjectDNSName; 
+(id)createElement:(id*)arg1 ;
-(BOOL)isValid;
-(NSString *)sessionIndex;
-(NSDate *)sessionNotOnOrAfter;
-(NSDate *)authnInstant;
-(NSString *)subjectAddress;
-(NSString *)subjectDNSName;
-(NSString *)authnContextDecl;
-(NSString *)authnContextDeclRef;
-(NSString *)authnContextClassRef;
-(NSString *)authenticatingAuthority;
@end

