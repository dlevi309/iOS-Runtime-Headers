/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
@class NSXPCConnection;

@interface CarbonComponentScannerXPCClient : NSObject {

	NSXPCConnection* _connection;

}
-(id)xpcConnection;
-(id)init;
-(AudioComponentVector*)initialScan:(id)arg1 ;
-(void)handleConnectionError:(BOOL)arg1 ;
-(void)rescan:(id)arg1 added:(AudioComponentVector*)arg2 removed:(AudioComponentVector*)arg3 ;
@end

