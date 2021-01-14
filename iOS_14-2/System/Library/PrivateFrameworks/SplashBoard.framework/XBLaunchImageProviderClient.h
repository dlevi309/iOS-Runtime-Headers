/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)generateImageWithContext:(id)arg1 captureInfo:(id*)arg2 error:(id*)arg3 ;
@end

