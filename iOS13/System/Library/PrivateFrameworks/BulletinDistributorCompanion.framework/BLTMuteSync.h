/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NPSManager, NSObject, NSSet;

@interface BLTMuteSync : NSObject {

	NSMutableDictionary* _mutedSectionIdentifiersForDay;
	NPSManager* _npsManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSSet * mutedForTodaySectionIdentifiers; 
-(id)init;
-(void)dealloc;
-(void)_loadMutedSectionIdentifiers;
-(void)_updateObservers;
-(NSSet *)mutedForTodaySectionIdentifiers;
-(void)_queue_sync;
-(BOOL)isMutedForTodaySectionIdentifier:(id)arg1 ;
-(void)addSectionIdentifiers:(id)arg1 ;
-(void)removeSectionIdentifiers:(id)arg1 ;
-(void)_cleanMuteIdentifiers;
@end

