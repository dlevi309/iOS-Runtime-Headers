/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFHomeKitTransformItem.h>
#import <libobjc.A.dylib/HFServiceVendor.h>
#import <libobjc.A.dylib/HFActionBuilderFactory.h>

@class NSSet, NSString;

@interface HUServiceGridTransformItem : HFHomeKitTransformItem <HFServiceVendor, HFActionBuilderFactory>

@property (nonatomic,readonly) HFItem*<HFHomeKitItemProtocol>*<HFServiceVendor>*<HFActionBuilderFactory> sourceServicePickerItem; 
@property (nonatomic,readonly) NSSet * services; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)services;
-(BOOL)actionsMayRequireDeviceUnlock;
-(BOOL)containsActions;
-(id)accessories;
-(id)currentStateActionBuildersForHome:(id)arg1 ;
-(HFItem*<HFHomeKitItemProtocol>*<HFServiceVendor>*<HFActionBuilderFactory>)sourceServicePickerItem;
@end

