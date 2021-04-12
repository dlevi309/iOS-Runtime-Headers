/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)reason;
-(NSString *)issuer;
-(void)setReason:(NSString *)arg1 ;
-(void)setIssuer:(NSString *)arg1 ;
-(NSDate *)notOnOrAfter;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLLogoutRequestElement *)requestElement;
-(void)setRequestElement:(SAMLLogoutRequestElement *)arg1 ;
-(void)setNotOnOrAfter:(NSDate *)arg1 ;
@end

