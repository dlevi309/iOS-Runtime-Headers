/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/XMLWrapperDoc.h>

@class NSData, SAMLAttributeQueryElement, NSString;

@interface SAMLAttributeQuery : XMLWrapperDoc {

	NSData* _schemaData;
	SAMLAttributeQueryElement* _requestElement;

}

@property (nonatomic,retain) SAMLAttributeQueryElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,readonly) NSString * channelId; 
-(NSString *)channelId;
-(void)addAttribute:(id)arg1 ;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLAttributeQueryElement *)requestElement;
-(void)setSubjectFromResponse:(id)arg1 ;
-(void)setRequestElement:(SAMLAttributeQueryElement *)arg1 ;
-(void)addAttribute:(id)arg1 values:(id)arg2 ;
@end

