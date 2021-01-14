/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKFrozenReminderObject.h>

@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {

	REMListChangeItem* _listChange;

}
+(Class)meltedClass;
-(id)publishURL;
-(id)UUID;
-(id)_list;
-(unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)arg1 ;
-(id)remObjectID;
-(id)unlocalizedTitle;
-(BOOL)_applyChanges:(id)arg1 error:(id*)arg2 ;
-(id)sharees;
-(id)hexColorStringFromREMColor:(id)arg1 ;
-(id)calendarIdentifier;
-(int)flags;
-(id)externalID;
-(BOOL)isColorDisplayOnly;
-(id)uniqueIdentifier;
-(id)frozenReminderSource;
-(id)colorStringRaw;
-(id)sharedOwnerName;
-(int)displayOrder;
-(id)symbolicColorName;
-(BOOL)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)REMColorFromEKHexColorString:(id)arg1 ;
-(BOOL)isPublished;
-(unsigned long long)sharingStatus;
-(int)allowedEntities;
-(id)initNewListInStore:(id)arg1 ;
-(id)updateListWithSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)_account;
-(id)title;
-(id)source;
@end

