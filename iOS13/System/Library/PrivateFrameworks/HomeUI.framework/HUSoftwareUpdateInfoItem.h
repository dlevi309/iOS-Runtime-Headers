/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@class HMSoftwareUpdate, NSString;

@interface HUSoftwareUpdateInfoItem : HFItem <HFHomeKitItemProtocol> {

	HMSoftwareUpdate* _softwareUpdate;
	NSString* _publisher;

}

@property (nonatomic,readonly) HMSoftwareUpdate * softwareUpdate;              //@synthesize softwareUpdate=_softwareUpdate - In the implementation block
@property (nonatomic,readonly) NSString * publisher;                           //@synthesize publisher=_publisher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id)init;
-(NSString *)publisher;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMSoftwareUpdate *)softwareUpdate;
-(id)initWithSoftwareUpdate:(id)arg1 publisher:(id)arg2 ;
@end

