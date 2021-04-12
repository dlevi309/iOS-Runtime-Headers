/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setProviderName:(id)arg1 ;
-(void)setIssuer:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLAuthNRequestElement *)requestElement;
-(void)setSubjectFromResponse:(id)arg1 ;
-(void)setRequestElement:(SAMLAuthNRequestElement *)arg1 ;
-(void)setForceAuthN:(BOOL)arg1 ;
-(void)setIsPassive:(BOOL)arg1 ;
@end

