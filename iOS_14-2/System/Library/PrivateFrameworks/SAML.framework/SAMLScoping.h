/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSNumber, NSArray, NSString;

@interface SAMLScoping : SAMLBaseElement

@property (nonatomic,readonly) NSNumber * proxyCount; 
@property (nonatomic,readonly) NSArray * idpList; 
@property (nonatomic,readonly) NSArray * requesterIds; 
@property (nonatomic,readonly) NSString * getComplete; 
+(id)createElement:(id*)arg1 ;
-(NSArray *)idpList;
-(void)addRequesterId:(id)arg1 ;
-(NSNumber *)proxyCount;
-(NSArray *)requesterIds;
-(NSString *)getComplete;
@end

