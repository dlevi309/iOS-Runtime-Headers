/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKFrozenReminderObject.h>

@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) REMAccount * remAccount; 
+(Class)meltedClass;
-(int)flags;
-(id)UUID;
-(id)title;
-(long long)sourceType;
-(NSString *)sourceIdentifier;
-(id)externalID;
-(id)lastSyncEndDate;
-(unsigned long long)lastSyncError;
-(REMAccount *)remAccount;
-(id)meltedObjectInStore:(id)arg1 ;
-(id)delegatedAccountOwnerStoreID;
-(id)lastSyncStartDate;
-(void)setLastSyncError:(unsigned long long)arg1 ;
-(void)setLastSyncStartDate:(id)arg1 ;
-(void)setLastSyncEndDate:(id)arg1 ;
@end

