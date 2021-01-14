/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SASmsRecipientSearch : SADomainCommand

@property (assign,nonatomic) BOOL clientShouldResolvePhonesAndEmails; 
@property (nonatomic,copy) NSArray * recipients; 
+(id)recipientSearch;
+(id)recipientSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)recipients;
-(id)groupIdentifier;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)clientShouldResolvePhonesAndEmails;
-(void)setClientShouldResolvePhonesAndEmails:(BOOL)arg1 ;
-(BOOL)mutatingCommand;
@end

