/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSXPCConnection;

@interface WLKExternalMediaContentManager : NSObject {

	NSXPCConnection* _connection;

}
+(id)sharedManager;
-(id)init;
-(id)_init;
-(id)_proxy;
-(id)_connection;
-(void)_deletePlaybackActivityWithIdentifier:(id)arg1 bundleID:(id)arg2 ;
-(void)deletePlaybackActivityWithIdentifier:(id)arg1 ;
@end

