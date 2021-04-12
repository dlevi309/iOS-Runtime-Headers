/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString, NSNumber, NSArray, SASmsGroupName;

@interface SASmsSearch : SADomainCommand

@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSArray * senders; 
@property (nonatomic,retain) SASmsGroupName * smsGroup; 
@property (nonatomic,copy) NSDate * start; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSNumber * unread; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)start;
-(id)groupIdentifier;
-(NSDate *)end;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setStart:(NSDate *)arg1 ;
-(void)setEnd:(NSDate *)arg1 ;
-(NSArray *)senders;
-(void)setSenders:(NSArray *)arg1 ;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)outgoing;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(SASmsGroupName *)smsGroup;
-(void)setSmsGroup:(SASmsGroupName *)arg1 ;
-(NSNumber *)unread;
-(void)setUnread:(NSNumber *)arg1 ;
@end

