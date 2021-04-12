/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/XMLWrapperDoc.h>

@class SAMLAuthZDecisionQueryElement, NSString;

@interface SAMLAuthZDecisionQuery : XMLWrapperDoc {

	SAMLAuthZDecisionQueryElement* _requestElement;

}

@property (nonatomic,retain) SAMLAuthZDecisionQueryElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,readonly) NSString * channelId; 
-(void)setResource:(id)arg1 ;
-(void)addAction:(id)arg1 ;
-(NSString *)channelId;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLAuthZDecisionQueryElement *)requestElement;
-(void)setSubjectFromResponse:(id)arg1 ;
-(void)setRequestElement:(SAMLAuthZDecisionQueryElement *)arg1 ;
@end

