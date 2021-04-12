/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)photoLibrary;
-(BOOL)_isInvalidRemoteChangeEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectManagedObjectContext:(id)arg1 ;
-(void)disconnectManagedObjectContext:(id)arg1 ;
-(void)invalidate;
-(void)publishChangesForDidSaveObjectIDsNotification:(id)arg1 ;
-(void)distributeRemoteContextDidSaveEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3 ;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithLibraryURL:(id)arg1 changeMerger:(id)arg2 changePublisher:(id)arg3 libraryServicesManager:(id)arg4 ;
-(void)dealloc;
@end

