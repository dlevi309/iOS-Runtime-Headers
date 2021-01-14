/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSNumber, NSData;

@interface SAMLX509Data : SAMLBaseElement

@property (nonatomic,readonly) NSString * issuerName; 
@property (nonatomic,readonly) NSNumber * serialNumber; 
@property (nonatomic,readonly) NSData * ski; 
@property (nonatomic,readonly) NSString * subjectName; 
@property (nonatomic,readonly) NSData * certificate; 
@property (nonatomic,readonly) NSData * crl; 
+(id)createElement:(id*)arg1 ;
-(NSNumber *)serialNumber;
-(NSData *)ski;
-(NSData *)crl;
-(NSString *)issuerName;
-(NSData *)certificate;
-(NSString *)subjectName;
@end

