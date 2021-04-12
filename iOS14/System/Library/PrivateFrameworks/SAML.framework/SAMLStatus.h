/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class SAMLStatusCode, NSString;

@interface SAMLStatus : SAMLBaseElement

@property (nonatomic,readonly) SAMLStatusCode * statusCode; 
@property (nonatomic,readonly) NSString * statusMessage; 
@property (nonatomic,readonly) NSString * statusDetail; 
+(id)createElement:(id*)arg1 ;
-(SAMLStatusCode *)statusCode;
-(NSString *)statusDetail;
-(NSString *)statusMessage;
-(id)status;
@end

