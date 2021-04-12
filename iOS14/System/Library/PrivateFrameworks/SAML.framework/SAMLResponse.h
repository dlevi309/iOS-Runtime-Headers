/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)assertions;
-(id)subject;
-(id)userName;
-(NSDictionary *)attributes;
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

