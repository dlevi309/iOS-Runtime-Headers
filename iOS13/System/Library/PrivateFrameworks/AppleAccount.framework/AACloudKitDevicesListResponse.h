/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSArray;

@interface AACloudKitDevicesListResponse : AAResponse {

	NSArray* _incompatibleDevices;
	NSArray* _needUpgradeDevices;
	NSArray* _incompatibleDeviceNames;
	NSArray* _needUpgradeDeviceNames;

}

@property (nonatomic,readonly) NSArray * incompatibleDevices;                  //@synthesize incompatibleDevices=_incompatibleDevices - In the implementation block
@property (nonatomic,readonly) NSArray * needUpgradeDevices;                   //@synthesize needUpgradeDevices=_needUpgradeDevices - In the implementation block
@property (nonatomic,readonly) NSArray * incompatibleDeviceNames;              //@synthesize incompatibleDeviceNames=_incompatibleDeviceNames - In the implementation block
@property (nonatomic,readonly) NSArray * needUpgradeDeviceNames;               //@synthesize needUpgradeDeviceNames=_needUpgradeDeviceNames - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSArray *)incompatibleDevices;
-(NSArray *)needUpgradeDevices;
-(NSArray *)incompatibleDeviceNames;
-(NSArray *)needUpgradeDeviceNames;
@end

