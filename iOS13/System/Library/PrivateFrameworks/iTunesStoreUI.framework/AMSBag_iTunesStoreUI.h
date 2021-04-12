/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <libobjc.A.dylib/AMSDeviceOfferBagContract.h>

@class AMSBagValue, NSString;

@interface AMSBag_iTunesStoreUI : NSObject <AMSDeviceOfferBagContract>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AMSBagValue * appleMusicDeviceOfferDeepLink; 
@property (nonatomic,readonly) AMSBagValue * iCloudDeviceOfferDeepLink; 
-(AMSBagValue *)appleMusicDeviceOfferDeepLink;
-(AMSBagValue *)iCloudDeviceOfferDeepLink;
@end

