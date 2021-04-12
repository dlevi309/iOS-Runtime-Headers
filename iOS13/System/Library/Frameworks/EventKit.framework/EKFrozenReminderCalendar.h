/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKFrozenReminderObject.h>

@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {

	REMListChangeItem* _listChange;

}
+(Class)meltedClass;
-(id)_list;
-(id)calendarIdentifier;
-(int)flags;
-(id)source;
-(id)UUID;
-(id)title;
-(id)uniqueIdentifier;
-(id)_account;
-(id)externalID;
-(int)allowedEntities;
-(id)symbolicColorName;
-(int)displayOrder;
-(unsigned long long)sharingStatus;
-(BOOL)isPublished;
-(id)sharedOwnerName;
-(id)sharees;
-(id)remObjectID;
-(id)initNewListInStore:(id)arg1 ;
-(BOOL)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)colorString;
-(BOOL)isColorDisplayOnly;
-(id)publishedURL;
-(id)hexColorStringFromREMColor:(id)arg1 ;
-(unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)arg1 ;
-(id)frozenReminderSource;
-(id)REMColorFromEKHexColorString:(id)arg1 ;
-(id)updateListWithSaveRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_applyChanges:(id)arg1 error:(id*)arg2 ;
@end

