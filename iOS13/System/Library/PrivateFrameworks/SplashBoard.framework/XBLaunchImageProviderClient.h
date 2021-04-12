/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <BaseBoard/BSBaseXPCClient.h>

@class XBApplicationLaunchCompatibilityInfo;

@interface XBLaunchImageProviderClient : BSBaseXPCClient {

	XBApplicationLaunchCompatibilityInfo* _appInfo;

}
+(void)preheatServiceWithTimeout:(double)arg1 ;
-(id)init;
-(id)initWithApplicationInfo:(id)arg1 ;
-(unsigned)generateImageWithContext:(id)arg1 error:(id*)arg2 ;
@end

