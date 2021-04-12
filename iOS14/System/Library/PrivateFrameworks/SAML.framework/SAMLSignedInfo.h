/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAML-Structs.h>
#import <SAML/SAMLBaseElement.h>

@class NSString, NSNumber, NSArray;

@interface SAMLSignedInfo : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * canonicalizationMethod; 
@property (nonatomic,readonly) NSNumber * signatureMethodLength; 
@property (nonatomic,readonly) NSString * signatureMethod; 
@property (nonatomic,readonly) NSArray * references; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(NSArray *)references;
-(NSString *)signatureMethod;
-(xmlNode*)xmlNode:(id*)arg1 ;
-(NSString *)canonicalizationMethod;
-(NSNumber *)signatureMethodLength;
@end

