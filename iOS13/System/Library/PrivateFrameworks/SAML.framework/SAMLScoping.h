/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)proxyCount;
-(void)addRequesterId:(id)arg1 ;
-(NSArray *)requesterIds;
-(NSString *)getComplete;
-(NSArray *)idpList;
@end

