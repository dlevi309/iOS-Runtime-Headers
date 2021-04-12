/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSXPCConnection;

@interface WLKExternalMediaContentManager : NSObject {

	NSXPCConnection* _connection;

}
+(id)sharedManager;
-(id)init;
-(id)_connection;
-(id)_init;
-(id)_proxy;
-(void)deletePlaybackActivityWithIdentifier:(id)arg1 ;
-(void)_deletePlaybackActivityWithIdentifier:(id)arg1 bundleID:(id)arg2 ;
@end

