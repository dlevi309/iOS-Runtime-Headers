/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MRPlaybackQueueClient : NSObject {

	NSMutableDictionary* _controllers;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithQueue:(id)arg1 ;
-(void)_handlePlayerPathRemovedNotification:(id)arg1 ;
-(void)_handleApplicationRemovedNotification:(id)arg1 ;
-(id)subscriptionControllerForPlayerPath:(id)arg1 ;
-(void)_handleOriginRemovedNotification:(id)arg1 ;
-(void)dealloc;
@end

