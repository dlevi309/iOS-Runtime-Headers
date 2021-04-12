/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

