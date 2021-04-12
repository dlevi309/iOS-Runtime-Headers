/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface EKChangeSet : NSObject <NSCopying> {

	BOOL _skipsPersistentObjectCopy;
	BOOL _isNew;
	BOOL _isModified;
	BOOL _isSaved;
	BOOL _isDeleted;
	BOOL _isUndeleted;
	NSMutableDictionary* _singleValueChanges;
	NSMutableDictionary* _multiValueAdditions;
	NSMutableDictionary* _multiValueRemovals;

}

@property (nonatomic,retain) NSMutableDictionary * singleValueChanges;               //@synthesize singleValueChanges=_singleValueChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * multiValueAdditions;              //@synthesize multiValueAdditions=_multiValueAdditions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * multiValueRemovals;               //@synthesize multiValueRemovals=_multiValueRemovals - In the implementation block
@property (assign,nonatomic) BOOL isNew;                                             //@synthesize isNew=_isNew - In the implementation block
@property (assign,nonatomic) BOOL isModified;                                        //@synthesize isModified=_isModified - In the implementation block
@property (assign,nonatomic) BOOL isSaved;                                           //@synthesize isSaved=_isSaved - In the implementation block
@property (assign,nonatomic) BOOL isDeleted;                                         //@synthesize isDeleted=_isDeleted - In the implementation block
@property (assign,nonatomic) BOOL isUndeleted;                                       //@synthesize isUndeleted=_isUndeleted - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)addChanges:(id)arg1 ;
-(BOOL)hasChanges;
-(BOOL)hasUnsavedChanges;
-(BOOL)isDeleted;
-(id)changedKeys;
-(void)setIsDeleted:(BOOL)arg1 ;
-(id)summary;
-(BOOL)isModified;
-(BOOL)isNew;
-(BOOL)isEffectivelyEqual:(id)arg1 ;
-(BOOL)isSaved;
-(void)forceChangeValue:(id)arg1 forKey:(id)arg2 ;
-(void)setSkipsPersistentObjectCopy:(BOOL)arg1 ;
-(void)changeSingleValue:(id)arg1 forKey:(id)arg2 basedOn:(id)arg3 ;
-(BOOL)hasUnsavedChangeForKey:(id)arg1 ;
-(id)valueForSingleValueKey:(id)arg1 basedOn:(id)arg2 ;
-(BOOL)skipsPersistentObjectCopy;
-(void)addChangesAndUpdateUniqueMultiValueObjects:(id)arg1 ;
-(void)replaceUniqueMultiValueObjectsWithUpdatedObjects:(id)arg1 ;
-(BOOL)hasUnsavedMultiValueRemovalForKey:(id)arg1 ;
-(NSMutableDictionary *)multiValueRemovals;
-(BOOL)hasUnsavedMultiValueAdditionForKey:(id)arg1 ;
-(NSMutableDictionary *)multiValueAdditions;
-(id)valuesForMultiValueKey:(id)arg1 basedOnSet:(id)arg2 ;
-(id)initWithChangeSet:(id)arg1 ;
-(NSMutableDictionary *)singleValueChanges;
-(id)initWithSingleValueChanges:(id)arg1 multiValueAdditions:(id)arg2 multiValueRemovals:(id)arg3 ;
-(id)_initWithChangeSet:(id)arg1 filter:(/*^block*/id)arg2 ;
-(void)setIsNew:(BOOL)arg1 ;
-(void)setIsModified:(BOOL)arg1 ;
-(void)setIsSaved:(BOOL)arg1 ;
-(BOOL)isUndeleted;
-(void)setIsUndeleted:(BOOL)arg1 ;
-(void)setSingleValueChanges:(NSMutableDictionary *)arg1 ;
-(void)setMultiValueAdditions:(NSMutableDictionary *)arg1 ;
-(void)setMultiValueRemovals:(NSMutableDictionary *)arg1 ;
-(void)rollbackChanges;
-(id)changedSingleValueKeys;
-(id)changedMultiValueKeys;
-(BOOL)_isNewAndUnsaved;
-(id)valueForSingleValueKey:(id)arg1 basedOn:(id)arg2 and:(id)arg3 ;
-(void)changeSingleValue:(id)arg1 forKey:(id)arg2 basedOn:(id)arg3 and:(id)arg4 ;
-(void)removeFromChanges:(id)arg1 forMultiValueKey:(id)arg2 basedOn:(id)arg3 ;
-(void)addToChanges:(id)arg1 forMultiValueKey:(id)arg2 basedOn:(id)arg3 ;
-(id)_semanticIdentifierToObjectMapForObjects:(id)arg1 ;
-(void)_cleanupEmptySetsForMultiValueKey:(id)arg1 ;
-(id)initWithChangeSet:(id)arg1 changesToSkip:(id)arg2 ;
-(id)initWithChangeSet:(id)arg1 changesToKeep:(id)arg2 ;
-(void)markChangesAsSaved;
-(id)unsavedMultiValueAddedObjectsForKey:(id)arg1 ;
-(id)unsavedMultiValueRemovedObjectsForKey:(id)arg1 ;
-(id)valuesForMultiValueKey:(id)arg1 basedOn:(id)arg2 ;
-(BOOL)isUniqueAddedObject:(id)arg1 forKey:(id)arg2 ;
-(void)replaceMultiChangeAddedObject:(id)arg1 withObject:(id)arg2 forKey:(id)arg3 ;
@end

