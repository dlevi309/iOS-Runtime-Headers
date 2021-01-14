/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@class NSString;

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (nonatomic,retain) NSString * displayNameRaw; 
@property (nonatomic,retain) NSString * emailAddress; 
@property (nonatomic,retain) NSString * URL; 
@property (assign,nonatomic) BOOL isCurrentUser; 
+(id)relations;
+(id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
-(int)entityType;
-(BOOL)isCurrentUser;
-(id)owner;
-(void)setScheduleAgent:(long long)arg1 ;
-(id)description;
-(void)setIsCurrentUser:(BOOL)arg1 ;
-(void)setOwner:(id)arg1 ;
-(long long)scheduleAgent;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

