/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/REMSortingStyleReadonlyProtocol.h>

@class NSString, REMStore, REMSmartListStorage, REMResolutionTokenMap, NSData, REMObjectID, NSArray;

@interface REMSmartList : NSObject <REMObjectIDProviding, REMSortingStyleReadonlyProtocol> {

	REMStore* _store;
	REMSmartListStorage* _storage;

}

@property (nonatomic,copy) REMSmartListStorage * storage;                               //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) REMResolutionTokenMap * resolutionTokenMap; 
@property (nonatomic,readonly) NSData * resolutionTokenMapData; 
@property (assign,nonatomic) BOOL isPersisted; 
@property (nonatomic,readonly) REMStore * store;                                        //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,copy) NSString * smartListTag; 
@property (nonatomic,retain) NSArray * ordering; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,readonly) NSString * sortingStyle; 
@property (nonatomic,readonly) long long sortingDirection; 
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
+(id)newObjectID;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setStorage:(REMSmartListStorage *)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(REMObjectID *)remObjectID;
-(REMStore *)store;
-(REMSmartListStorage *)storage;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)debugDescription;
-(id)initWithStore:(id)arg1 storage:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

