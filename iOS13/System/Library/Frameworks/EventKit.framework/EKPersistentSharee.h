/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentSharee : EKPersistentObject
+(id)relations;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOwner:(id)arg1 ;
-(id)UUID;
-(id)address;
-(void)setUUID:(id)arg1 ;
-(id)displayName;
-(id)owner;
-(void)setDisplayName:(id)arg1 ;
-(void)setAddress:(id)arg1 ;
-(id)firstName;
-(id)lastName;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(id)externalID;
-(void)setExternalID:(id)arg1 ;
-(int)entityType;
-(int)shareeStatus;
-(int)shareeAccessLevel;
-(void)setShareeAccessLevel:(int)arg1 ;
-(void)setShareeStatus:(int)arg1 ;
@end

