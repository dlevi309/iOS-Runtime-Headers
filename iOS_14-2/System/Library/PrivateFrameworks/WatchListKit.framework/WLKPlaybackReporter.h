/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


#import <WatchListKit/WatchListKit-Structs.h>
@class NSXPCConnection;

@interface WLKPlaybackReporter : NSObject {

	NSXPCConnection* _xpcConnection;
	os_unfair_lock_s _xpcLock;

}
-(id)init;
-(void)_invalidationHandler;
-(id)_connection;
-(void)endPlaybackSession:(id)arg1 ;
-(void)reportPlayback:(id)arg1 sessionID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reportPlayback:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

