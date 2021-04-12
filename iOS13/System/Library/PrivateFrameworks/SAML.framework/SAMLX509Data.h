/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)certificate;
-(NSNumber *)serialNumber;
-(NSString *)issuerName;
-(NSData *)ski;
-(NSString *)subjectName;
-(NSData *)crl;
@end

