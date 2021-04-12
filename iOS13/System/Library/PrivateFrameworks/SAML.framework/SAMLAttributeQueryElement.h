/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLSubject, NSArray;

@interface SAMLAttributeQueryElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,readonly) NSString * destination; 
@property (nonatomic,readonly) NSString * consent; 
@property (nonatomic,retain) NSString * channelId; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,retain) SAMLSubject * subject; 
@property (nonatomic,readonly) NSArray * samlAttributes; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(NSString *)destination;
-(SAMLSubject *)subject;
-(void)setSubject:(SAMLSubject *)arg1 ;
-(SAMLSignature *)signature;
-(void)addAttribute:(id)arg1 ;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
-(NSString *)consent;
-(NSDate *)issueInstant;
-(NSArray *)samlAttributes;
@end

