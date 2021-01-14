/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/XMLWrapperDoc.h>

@class NSData, SAMLAuthNRequestElement, NSString;

@interface SAMLAuthNRequest : XMLWrapperDoc {

	NSData* _schemaData;
	SAMLAuthNRequestElement* _requestElement;

}

@property (nonatomic,retain) SAMLAuthNRequestElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,retain) NSString * issuer; 
-(NSString *)issuer;
-(void)setIssuer:(NSString *)arg1 ;
-(void)setProviderName:(id)arg1 ;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLAuthNRequestElement *)requestElement;
-(void)setSubjectFromResponse:(id)arg1 ;
-(void)setRequestElement:(SAMLAuthNRequestElement *)arg1 ;
-(void)setForceAuthN:(BOOL)arg1 ;
-(void)setIsPassive:(BOOL)arg1 ;
@end

