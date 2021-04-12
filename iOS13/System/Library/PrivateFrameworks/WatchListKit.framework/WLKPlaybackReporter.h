/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


#import <WatchListKit/WatchListKit-Structs.h>
@class NSXPCConnection;

@interface WLKPlaybackReporter : NSObject {

	NSXPCConnection* _xpcConnection;
	os_unfair_lock_s _xpcLock;

}
-(id)init;
-(id)_connection;
-(void)_invalidationHandler;
-(void)endPlaybackSession:(id)arg1 ;
-(void)reportPlayback:(id)arg1 sessionID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reportPlayback:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

