/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PHAssetCreationRequestPlaceholderSupportNotificationManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _assetAvailabilityHandlers;

}
+(id)sharedManager;
-(id)init;
-(void)_onQueueSync:(/*^block*/id)arg1 ;
-(void)callCompletionHandlerForAssetUUID:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)assetAvailableNotification:(id)arg1 ;
-(void)registerAssetAvailabilityHandler:(/*^block*/id)arg1 forAssetUUID:(id)arg2 ;
-(void)unregisterAssetAvailabilityHandlerForAssetUUID:(id)arg1 ;
@end

