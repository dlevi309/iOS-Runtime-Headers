/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dateFormatter;
-(NSString *)publisher;
-(id)init;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithSoftwareUpdate:(id)arg1 publisher:(id)arg2 ;
-(HMSoftwareUpdate *)softwareUpdate;
@end

