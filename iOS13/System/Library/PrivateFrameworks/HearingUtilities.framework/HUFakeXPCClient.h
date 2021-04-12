/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <HearingCore/HCXPCClient.h>

@interface HUFakeXPCClient : HCXPCClient {

	/*^block*/id _updateBlock;

}
-(BOOL)sendMessage:(id)arg1 withError:(id*)arg2 ;
-(BOOL)wantsUpdatesForIdentifier:(unsigned long long)arg1 ;
-(void)registerMessageBlock:(/*^block*/id)arg1 ;
@end

