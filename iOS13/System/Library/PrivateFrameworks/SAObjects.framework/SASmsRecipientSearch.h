/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SASmsRecipientSearch : SADomainCommand

@property (assign,nonatomic) BOOL clientShouldResolvePhonesAndEmails; 
@property (nonatomic,copy) NSArray * recipients; 
+(id)recipientSearch;
+(id)recipientSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(BOOL)clientShouldResolvePhonesAndEmails;
-(void)setClientShouldResolvePhonesAndEmails:(BOOL)arg1 ;
@end

