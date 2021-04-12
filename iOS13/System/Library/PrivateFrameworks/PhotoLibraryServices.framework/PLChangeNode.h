/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLChangePublisher;
@class NSURL, PLLibraryServicesManager, NSString, PLUpdatedOrderKeys, PLCoreDataChangeMerger, PLDelayedSaveActionsProcessor;

@interface PLChangeNode : NSObject {

	NSURL* _libraryUrl;
	PLLibraryServicesManager* _libraryServicesManager;
	unsigned char _nodeUUID[16];
	NSString* _nodeUUIDShortString;
	PLUpdatedOrderKeys* _updatedOrderKeys;
	PLCoreDataChangeMerger* _changeMerger;
	id<PLChangePublisher> _changePublisher;
	PLDelayedSaveActionsProcessor* _delayedSaveActionsProcessor;

}
-(void)dealloc;
-(void)invalidate;
-(id)photoLibrary;
-(void)disconnectManagedObjectContext:(id)arg1 ;
-(void)connectManagedObjectContext:(id)arg1 ;
-(id)initWithLibraryURL:(id)arg1 changeMerger:(id)arg2 changePublisher:(id)arg3 libraryServicesManager:(id)arg4 ;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)_isInvalidRemoteChangeEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)distributeRemoteContextDidSaveEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3 ;
-(void)publishChangesForDidSaveObjectIDsNotification:(id)arg1 ;
@end

