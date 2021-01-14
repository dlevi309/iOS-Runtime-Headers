/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSArray, NSData;

@interface SAMLSignatureReference : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * uri; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSArray * transforms; 
@property (nonatomic,readonly) NSString * digestMethod; 
@property (nonatomic,readonly) NSData * digestValue; 
+(id)createElement:(id*)arg1 ;
-(NSString *)uri;
-(NSArray *)transforms;
-(NSString *)type;
-(NSString *)identifier;
-(NSString *)digestMethod;
-(NSData *)digestValue;
@end

