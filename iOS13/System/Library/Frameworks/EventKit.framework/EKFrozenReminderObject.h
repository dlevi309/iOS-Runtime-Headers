/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKPersistentObject.h>

@class EKChangeSet, EKReminderStore, NSArray;

@interface EKFrozenReminderObject : EKPersistentObject {

	EKChangeSet* _changeSet;
	EKReminderStore* _reminderStore;
	id _remObject;
	NSArray* _path;

}

@property (nonatomic,readonly) EKChangeSet * uncommittedChanges; 
@property (nonatomic,copy) NSArray * path;                                    //@synthesize path=_path - In the implementation block
+(Class)frozenClass;
+(BOOL)canCommitSelf;
+(id)uniqueIdentifierForREMObject:(id)arg1 ;
+(Class)meltedClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithObject:(id)arg1 ;
-(NSArray *)path;
-(void)setPath:(NSArray *)arg1 ;
-(id)uniqueIdentifier;
-(id)changeSet;
-(BOOL)isFrozen;
-(BOOL)isNew;
-(int)entityType;
-(id)remObjectID;
-(BOOL)isPartialObject;
-(EKChangeSet *)uncommittedChanges;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3 ;
-(id)REMObject;
-(id)updateParentToCommitSelf:(id)arg1 ;
-(BOOL)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)frozenObject;
-(BOOL)existsInStore;
-(id)existingMeltedObject;
-(BOOL)isPropertyUnavailable:(id)arg1 ;
-(BOOL)isCompletelyEqual:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2 ;
-(id)semanticIdentifier;
-(id)valueForSingleValueKey:(id)arg1 backingValue:(/*^block*/id)arg2 ;
-(id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2 ;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 ;
-(id)updatedFrozenObjectWithChanges:(id)arg1 ;
@end

