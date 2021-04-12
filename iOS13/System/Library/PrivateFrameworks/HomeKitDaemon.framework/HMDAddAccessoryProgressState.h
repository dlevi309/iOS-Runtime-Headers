/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSString, HMAccessoryCategory;

@interface HMDAddAccessoryProgressState : HMFObject {

	NSUUID* _accessoryUUID;
	NSString* _accessoryName;
	NSString* _manufacturerName;
	HMAccessoryCategory* _category;
	unsigned long long _certificationStatus;
	NSString* _productData;

}

@property (nonatomic,readonly) NSUUID * accessoryUUID;                              //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,readonly) NSString * accessoryName;                            //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) NSString * manufacturerName;                         //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (nonatomic,readonly) HMAccessoryCategory * category;                      //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long certificationStatus;              //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (nonatomic,readonly) NSString * productData;                              //@synthesize productData=_productData - In the implementation block
-(HMAccessoryCategory *)category;
-(NSUUID *)accessoryUUID;
-(NSString *)accessoryName;
-(NSString *)manufacturerName;
-(unsigned long long)certificationStatus;
-(NSString *)productData;
-(id)initWithUUID:(id)arg1 accessoryName:(id)arg2 manufacturerName:(id)arg3 category:(id)arg4 certificationStatus:(unsigned long long)arg5 productData:(id)arg6 ;
@end

