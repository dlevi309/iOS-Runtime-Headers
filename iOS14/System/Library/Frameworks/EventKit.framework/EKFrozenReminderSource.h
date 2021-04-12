/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKFrozenReminderObject.h>

@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) REMAccount * remAccount; 
+(Class)meltedClass;
-(void)setLastSyncError:(unsigned long long)arg1 ;
-(id)lastSyncStartDate;
-(id)defaultAlarmOffset;
-(id)lastSyncEndDate;
-(void)setLastSyncStartDate:(id)arg1 ;
-(id)delegatedAccountOwnerStoreID;
-(unsigned long long)lastSyncError;
-(long long)sourceType;
-(id)UUID;
-(int)flags;
-(id)externalID;
-(void)setLastSyncEndDate:(id)arg1 ;
-(REMAccount *)remAccount;
-(id)meltedObjectInStore:(id)arg1 ;
-(BOOL)disabled;
-(id)title;
-(NSString *)sourceIdentifier;
@end

