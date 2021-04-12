/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateObservers;
-(void)_loadMutedSectionIdentifiers;
-(NSSet *)mutedForTodaySectionIdentifiers;
-(void)_queue_sync;
-(BOOL)isMutedForTodaySectionIdentifier:(id)arg1 ;
-(void)addSectionIdentifiers:(id)arg1 ;
-(void)removeSectionIdentifiers:(id)arg1 ;
-(void)_cleanMuteIdentifiers;
@end

