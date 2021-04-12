/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NPSManager, NSObject;

@interface BPSNotificationMuteSettingsManager : NSObject {

	NSMutableDictionary* _mutedSectionIdentifiersForDay;
	NPSManager* _npsManager;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedNotificationMuteSettingsManager;
-(id)init;
-(void)dealloc;
-(void)_loadMutedSectionIdentifiers;
-(void)_updateObservers;
-(id)mutedForTodaySectionIdentifiers;
-(void)_queue_sync;
-(BOOL)isMutedForTodaySectionIdentifier:(id)arg1 ;
-(void)addSectionIdentifiers:(id)arg1 ;
-(void)removeSectionIdentifiers:(id)arg1 ;
@end

