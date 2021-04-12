/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSDate, NSNumber;

@interface SAPhoneSearch : SADomainCommand

@property (nonatomic,copy) NSArray * contacts; 
@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSNumber * faceTime; 
@property (nonatomic,copy) NSNumber * faceTimeAudio; 
@property (nonatomic,copy) NSNumber * isNew; 
@property (nonatomic,copy) NSNumber * last; 
@property (nonatomic,copy) NSNumber * missed; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSDate * start; 
@property (nonatomic,copy) NSNumber * voiceMail; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)start;
-(id)groupIdentifier;
-(NSDate *)end;
-(NSArray *)contacts;
-(void)setStart:(NSDate *)arg1 ;
-(void)setEnd:(NSDate *)arg1 ;
-(void)setLast:(NSNumber *)arg1 ;
-(NSNumber *)last;
-(void)setContacts:(NSArray *)arg1 ;
-(NSNumber *)isNew;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)outgoing;
-(void)setIsNew:(NSNumber *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSNumber *)faceTime;
-(void)setFaceTime:(NSNumber *)arg1 ;
-(NSNumber *)faceTimeAudio;
-(void)setFaceTimeAudio:(NSNumber *)arg1 ;
-(NSNumber *)missed;
-(void)setMissed:(NSNumber *)arg1 ;
-(NSNumber *)voiceMail;
-(void)setVoiceMail:(NSNumber *)arg1 ;
@end

