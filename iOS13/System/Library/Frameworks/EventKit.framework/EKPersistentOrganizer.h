/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@class NSString, NSURL;

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * emailAddress; 
@property (nonatomic,retain) NSURL * address; 
@property (assign,getter=isCurrentUser,nonatomic) BOOL currentUser; 
+(id)relations;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
+(id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(void)setCurrentUser:(BOOL)arg1 ;
-(BOOL)isCurrentUser;
-(int)entityType;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
@end

