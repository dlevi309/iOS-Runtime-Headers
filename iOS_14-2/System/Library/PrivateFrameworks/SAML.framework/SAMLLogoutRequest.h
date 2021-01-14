/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/XMLWrapperDoc.h>

@class NSData, SAMLLogoutRequestElement, NSString, NSDate;

@interface SAMLLogoutRequest : XMLWrapperDoc {

	NSData* _schemaData;
	SAMLLogoutRequestElement* _requestElement;

}

@property (nonatomic,retain) SAMLLogoutRequestElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,retain) NSString * issuer; 
@property (nonatomic,retain) NSString * reason; 
@property (nonatomic,retain) NSDate * notOnOrAfter; 
-(NSString *)issuer;
-(void)setIssuer:(NSString *)arg1 ;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(NSDate *)notOnOrAfter;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLLogoutRequestElement *)requestElement;
-(void)setRequestElement:(SAMLLogoutRequestElement *)arg1 ;
-(void)setNotOnOrAfter:(NSDate *)arg1 ;
@end

