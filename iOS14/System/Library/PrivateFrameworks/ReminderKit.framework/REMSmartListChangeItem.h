/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMConflictResolving.h>
#import <libobjc.A.dylib/REMSaveRequestTrackedValue.h>
#import <libobjc.A.dylib/REMSortingStyleReadWriteProtocol.h>

@class REMSaveRequest, REMSmartListStorage, REMChangedKeysObserver, REMObjectID, NSArray, NSString, REMResolutionTokenMap, NSData;

@interface REMSmartListChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMSortingStyleReadWriteProtocol> {

	REMSaveRequest* _saveRequest;
	REMSmartListStorage* _storage;
	REMChangedKeysObserver* _changedKeysObserver;

}

@property (nonatomic,retain) REMChangedKeysObserver * changedKeysObserver;              //@synthesize changedKeysObserver=_changedKeysObserver - In the implementation block
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,retain) REMObjectID * objectID; 
@property (nonatomic,retain) NSArray * ordering; 
@property (assign,nonatomic) BOOL isPersisted; 
@property (nonatomic,copy,readonly) REMSmartListStorage * storage;                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) REMSaveRequest * saveRequest;                            //@synthesize saveRequest=_saveRequest - In the implementation block
@property (nonatomic,copy) NSString * smartListTag; 
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap; 
@property (nonatomic,retain) NSData * resolutionTokenMapData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * sortingStyle; 
@property (assign,nonatomic) long long sortingDirection; 
+(void)initialize;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)changedKeys;
-(REMSmartListStorage *)storage;
-(double)maxEnd;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(REMSaveRequest *)saveRequest;
-(double)minStart;
-(id)initWithSaveRequest:(id)arg1 storage:(id)arg2 observeInitialValues:(BOOL)arg3 ;
-(REMChangedKeysObserver *)changedKeysObserver;
-(id)resolutionTokenKeyForChangedKey:(id)arg1 ;
-(id)shallowCopyWithSaveRequest:(id)arg1 ;
-(void)setChangedKeysObserver:(REMChangedKeysObserver *)arg1 ;
-(id)initWithSaveRequest:(id)arg1 storage:(id)arg2 changedKeysObserver:(id)arg3 ;
-(id)dictionaryFromOrdering:(id)arg1 ;
-(void)update:(id)arg1 start:(double)arg2 stride:(double)arg3 orderLookup:(id)arg4 ;
-(void)resetOrderingWithReminderIDs:(id)arg1 start:(double)arg2 ;
-(void)cleanupOrderingWithReminderIDs:(id)arg1 ;
-(void)moveRemindersWithIDs:(id)arg1 beforeReminderWithID:(id)arg2 ;
-(void)moveRemindersWithIDs:(id)arg1 afterReminderWithID:(id)arg2 ;
@end

