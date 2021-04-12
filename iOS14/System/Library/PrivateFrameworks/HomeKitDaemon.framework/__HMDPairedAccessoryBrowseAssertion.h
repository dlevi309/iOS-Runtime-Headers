/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFAssertion.h>

@class HMDAccessoryBrowser;

@interface __HMDPairedAccessoryBrowseAssertion : HMFAssertion {

	HMDAccessoryBrowser* _accessoryBrowser;

}

@property (__weak,readonly) HMDAccessoryBrowser * accessoryBrowser;              //@synthesize accessoryBrowser=_accessoryBrowser - In the implementation block
-(id)initWithName:(id)arg1 ;
-(HMDAccessoryBrowser *)accessoryBrowser;
-(void)invalidate;
-(id)initWithAccessoryBrowser:(id)arg1 reason:(id)arg2 ;
@end

