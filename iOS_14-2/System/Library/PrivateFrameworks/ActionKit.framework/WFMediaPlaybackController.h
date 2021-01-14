/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@interface WFMediaPlaybackController : NSObject
+(id)bundleIdentifierForMediaPlaybackApplication:(unsigned long long)arg1 ;
+(id)songPropertySet;
-(id)init;
-(void)getLocalPlaybackCapabilityWithCompletion:(/*^block*/id)arg1 ;
-(void)getCurrentlyPlayingMediaWithCompletion:(/*^block*/id)arg1 ;
-(void)getPreferredPlaybackOriginWithCompletion:(/*^block*/id)arg1 ;
-(void)getPreferredMediaControlOriginWithCompletion:(/*^block*/id)arg1 ;
-(void)queueMediaItems:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)queueiTunesStoreItems:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)queueItemsWithIdentifierSets:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearQueueWithCompletion:(/*^block*/id)arg1 ;
-(void)getActivePlayerPathWithCompletion:(/*^block*/id)arg1 ;
-(void)getPreferredPlaybackDestinationForPlaybackArchive:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getPreferredMediaControlDestinationForOutputDeviceUIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

