/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)status;
-(NSString *)statusMessage;
-(NSString *)statusDetail;
@end

