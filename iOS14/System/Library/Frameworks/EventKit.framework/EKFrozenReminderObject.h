/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(Class)meltedClass;
+(BOOL)canCommitSelf;
+(id)uniqueIdentifierForREMObject:(id)arg1 ;
+(Class)frozenClass;
-(BOOL)isNew;
-(int)entityType;
-(id)changeSet;
-(id)initWithObject:(id)arg1 ;
-(id)semanticIdentifier;
-(id)remObjectID;
-(id)uniqueIdentifier;
-(void)setPath:(NSArray *)arg1 ;
-(NSArray *)path;
-(id)REMObject;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3 ;
-(id)valueForSingleValueKey:(id)arg1 backingValue:(/*^block*/id)arg2 ;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 ;
-(BOOL)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)isPropertyUnavailable:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2 ;
-(BOOL)existsInStore;
-(id)frozenObject;
-(id)existingMeltedObject;
-(BOOL)isCompletelyEqual:(id)arg1 ;
-(BOOL)isPartialObject;
-(EKChangeSet *)uncommittedChanges;
-(id)updateParentToCommitSelf:(id)arg1 ;
-(unsigned long long)hash;
-(id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2 ;
-(id)updatedFrozenObjectWithChanges:(id)arg1 ;
-(BOOL)isFrozen;
-(BOOL)isEqual:(id)arg1 ;
@end

