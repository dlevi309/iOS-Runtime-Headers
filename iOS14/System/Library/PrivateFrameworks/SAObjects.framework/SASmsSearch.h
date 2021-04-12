/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)recipients;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)subject;
-(NSString *)message;
-(NSDate *)end;
-(id)groupIdentifier;
-(NSNumber *)outgoing;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)senders;
-(NSDate *)start;
-(BOOL)requiresResponse;
-(NSNumber *)unread;
-(void)setSenders:(NSArray *)arg1 ;
-(void)setSmsGroup:(SASmsGroupName *)arg1 ;
-(void)setUnread:(NSNumber *)arg1 ;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(void)setEnd:(NSDate *)arg1 ;
-(BOOL)mutatingCommand;
-(SASmsGroupName *)smsGroup;
-(void)setSubject:(NSString *)arg1 ;
-(void)setStart:(NSDate *)arg1 ;
@end

