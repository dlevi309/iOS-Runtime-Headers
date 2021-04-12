/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <libobjc.A.dylib/TKProtocolTokenWatcherHost.h>

@class TKTokenWatcher;

@interface TKTokenWatcherProxy : NSObject <TKProtocolTokenWatcherHost> {

	TKTokenWatcher* _watcher;

}
-(void)insertedToken:(id)arg1 ;
-(void)removedToken:(id)arg1 ;
-(id)initWithWatcher:(id)arg1 ;
@end

