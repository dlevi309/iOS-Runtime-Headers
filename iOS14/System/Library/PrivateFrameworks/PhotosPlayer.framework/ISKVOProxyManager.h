/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ISKVOProxyManager : NSObject {

	NSMutableDictionary* _recordsByIdentifier;
	NSObject*<OS_dispatch_queue> _recordsQueue;

}
+(id)sharedManager;
-(id)init;
-(id)addProxyWithTarget:(id)arg1 queue:(id)arg2 keyPaths:(id)arg3 delegate:(id)arg4 ;
-(void)removeProxyWithIdentifier:(id)arg1 ;
@end

