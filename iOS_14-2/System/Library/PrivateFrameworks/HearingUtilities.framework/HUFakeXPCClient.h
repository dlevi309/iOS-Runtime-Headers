/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <HearingCore/HCXPCClient.h>

@interface HUFakeXPCClient : HCXPCClient {

	/*^block*/id _updateBlock;

}
-(BOOL)sendMessage:(id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)registerMessageBlock:(/*^block*/id)arg1 ;
-(BOOL)wantsUpdatesForIdentifier:(unsigned long long)arg1 ;
@end

