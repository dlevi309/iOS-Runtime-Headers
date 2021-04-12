/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <libobjc.A.dylib/AMSDeviceOfferBagContract.h>

@class AMSBagValue, NSString;

@interface AMSBag_iTunesStoreUI : NSObject <AMSDeviceOfferBagContract>

@property (nonatomic,readonly) AMSBagValue * appleMusicDeviceOfferDeepLink; 
@property (nonatomic,readonly) AMSBagValue * iCloudDeviceOfferDeepLink; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSBagValue *)iCloudDeviceOfferDeepLink;
-(AMSBagValue *)appleMusicDeviceOfferDeepLink;
@end

