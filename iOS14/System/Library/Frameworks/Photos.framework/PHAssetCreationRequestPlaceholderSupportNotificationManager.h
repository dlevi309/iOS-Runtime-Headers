/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)assetAvailableNotification:(id)arg1 ;
-(void)callCompletionHandlerForAssetUUID:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)registerAssetAvailabilityHandler:(/*^block*/id)arg1 forAssetUUID:(id)arg2 ;
-(void)unregisterAssetAvailabilityHandlerForAssetUUID:(id)arg1 ;
@end

