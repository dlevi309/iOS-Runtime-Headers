/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)type;
-(NSString *)identifier;
-(NSArray *)transforms;
-(NSString *)uri;
-(NSString *)digestMethod;
-(NSData *)digestValue;
@end

