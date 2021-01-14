/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>

@class HMDAccessorySettingGroupMetadata, NSString, NSArray;

@interface HMDAccessorySettingsMetadata : HMFObject <HMFObject> {

	HMDAccessorySettingGroupMetadata* _rootGroup;

}

@property (readonly) HMDAccessorySettingGroupMetadata * rootGroup;                //@synthesize rootGroup=_rootGroup - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSString *)propertyDescription;
-(HMDAccessorySettingGroupMetadata *)rootGroup;
@end

