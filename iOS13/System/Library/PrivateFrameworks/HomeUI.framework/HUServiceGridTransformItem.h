/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFHomeKitTransformItem.h>
#import <libobjc.A.dylib/HFServiceVendor.h>
#import <libobjc.A.dylib/HFActionBuilderFactory.h>

@class NSString, NSSet;

@interface HUServiceGridTransformItem : HFHomeKitTransformItem <HFServiceVendor, HFActionBuilderFactory>

@property (nonatomic,readonly) HFItem*<HFHomeKitItemProtocol>*<HFServiceVendor>*<HFActionBuilderFactory> sourceServicePickerItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * services; 
-(NSSet *)services;
-(id)accessories;
-(BOOL)containsActions;
-(id)currentStateActionBuildersForHome:(id)arg1 ;
-(BOOL)actionsMayRequireDeviceUnlock;
-(HFItem*<HFHomeKitItemProtocol>*<HFServiceVendor>*<HFActionBuilderFactory>)sourceServicePickerItem;
@end

