/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(NSString *)destination;
-(void)setDestination:(NSString *)arg1 ;
-(SAMLSubject *)subject;
-(void)setSubject:(SAMLSubject *)arg1 ;
-(SAMLSignature *)signature;
-(void)addAction:(id)arg1 ;
-(NSArray *)actions;
-(NSString *)resource;
-(void)setResource:(NSString *)arg1 ;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
-(void)setEvidence:(SAMLEvidence *)arg1 ;
-(SAMLEvidence *)evidence;
-(NSString *)consent;
-(NSDate *)issueInstant;
@end

