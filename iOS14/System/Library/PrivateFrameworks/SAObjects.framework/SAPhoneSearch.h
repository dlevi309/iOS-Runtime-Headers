/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)isNew;
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(NSDate *)end;
-(id)groupIdentifier;
-(NSNumber *)outgoing;
-(id)encodedClassName;
-(NSDate *)start;
-(BOOL)requiresResponse;
-(void)setIsNew:(NSNumber *)arg1 ;
-(NSNumber *)missed;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(void)setEnd:(NSDate *)arg1 ;
-(void)setLast:(NSNumber *)arg1 ;
-(BOOL)mutatingCommand;
-(NSNumber *)last;
-(NSNumber *)voiceMail;
-(NSNumber *)faceTime;
-(void)setFaceTime:(NSNumber *)arg1 ;
-(NSNumber *)faceTimeAudio;
-(void)setFaceTimeAudio:(NSNumber *)arg1 ;
-(void)setMissed:(NSNumber *)arg1 ;
-(void)setStart:(NSDate *)arg1 ;
-(void)setVoiceMail:(NSNumber *)arg1 ;
@end

