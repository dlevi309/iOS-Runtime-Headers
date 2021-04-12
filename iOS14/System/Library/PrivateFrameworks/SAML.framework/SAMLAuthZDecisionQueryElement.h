/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLSubject, NSArray, SAMLEvidence;

@interface SAMLAuthZDecisionQueryElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,retain) NSString * destination; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,readonly) NSString * consent; 
@property (nonatomic,retain) NSString * resource; 
@property (nonatomic,retain) NSString * channelId; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,retain) SAMLSubject * subject; 
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,retain) SAMLEvidence * evidence; 
+(id)createElement:(id*)arg1 ;
-(SAMLSubject *)subject;
-(SAMLSignature *)signature;
-(void)setDestination:(NSString *)arg1 ;
-(void)setResource:(NSString *)arg1 ;
-(NSArray *)actions;
-(void)addAction:(id)arg1 ;
-(NSString *)resource;
-(NSString *)channelId;
-(NSString *)consent;
-(NSString *)identifier;
-(void)setChannelId:(NSString *)arg1 ;
-(void)setSubject:(SAMLSubject *)arg1 ;
-(NSString *)destination;
-(NSDate *)issueInstant;
-(SAMLEvidence *)evidence;
-(void)setEvidence:(SAMLEvidence *)arg1 ;
@end

