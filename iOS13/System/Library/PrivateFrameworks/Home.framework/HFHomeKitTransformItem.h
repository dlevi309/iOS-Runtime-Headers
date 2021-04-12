/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFTransformItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/HFAccessoryVendor.h>

@class NSString;

@interface HFHomeKitTransformItem : HFTransformItem <HFHomeKitItemProtocol, HFAccessoryVendor>

@property (nonatomic,readonly) HFItem*<HFHomeKitItemProtocol> sourceHomeKitItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id)accessories;
-(id<HFHomeKitObject>)homeKitObject;
-(HFItem*<HFHomeKitItemProtocol>)sourceHomeKitItem;
@end

