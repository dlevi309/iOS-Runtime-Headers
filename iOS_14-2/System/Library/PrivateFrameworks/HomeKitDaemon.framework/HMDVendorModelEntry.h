/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMDAccessoryVersion, NSArray;

@interface HMDVendorModelEntry : HMFObject {

	NSString* _model;
	NSString* _manufacturer;
	NSString* _appBundleID;
	NSString* _appStoreID;
	HMDAccessoryVersion* _firmwareVersion;
	NSString* _productData;
	NSArray* _productDataAlternates;

}

@property (nonatomic,readonly) NSString * model;                                   //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSString * manufacturer;                            //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) NSString * appBundleID;                             //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,readonly) NSString * appStoreID;                              //@synthesize appStoreID=_appStoreID - In the implementation block
@property (nonatomic,readonly) HMDAccessoryVersion * firmwareVersion;              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) NSString * productData;                             //@synthesize productData=_productData - In the implementation block
@property (nonatomic,readonly) NSArray * productDataAlternates;                    //@synthesize productDataAlternates=_productDataAlternates - In the implementation block
-(NSString *)appBundleID;
-(HMDAccessoryVersion *)firmwareVersion;
-(long long)compare:(id)arg1 ;
-(NSString *)model;
-(NSString *)manufacturer;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(NSString *)productData;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)appStoreID;
-(NSArray *)productDataAlternates;
-(id)initWithManufacturer:(id)arg1 model:(id)arg2 appBundleID:(id)arg3 appStoreID:(id)arg4 firmwareVersion:(id)arg5 productData:(id)arg6 productDataAlternates:(id)arg7 ;
@end

