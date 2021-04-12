/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/XMLWrapperDoc.h>

@class SAMLResponseElement, NSDictionary, NSString;

@interface SAMLResponse : XMLWrapperDoc {

	SAMLResponseElement* _responseElement;

}

@property (nonatomic,retain) SAMLResponseElement * responseElement;              //@synthesize responseElement=_responseElement - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,readonly) NSString * selectedProvider; 
-(id)userName;
-(NSDictionary *)attributes;
-(id)subject;
-(id)assertions;
-(id)statusCodes;
-(BOOL)isValid:(id*)arg1 ;
-(id)authenticationTTL;
-(BOOL)hasValidAuthentication;
-(void)setAuthenticationTTL:(id)arg1 ;
-(BOOL)assertionMeetsConditions:(id*)arg1 ;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLResponseElement *)responseElement;
-(id)attributeValuesForName:(id)arg1 ;
-(id)primaryStatusCode;
-(NSString *)selectedProvider;
-(id)authenticationSessionId;
-(long long)expectedAction;
-(id)authorizationStatusForResource:(id)arg1 ;
-(void)setResponseElement:(SAMLResponseElement *)arg1 ;
@end

