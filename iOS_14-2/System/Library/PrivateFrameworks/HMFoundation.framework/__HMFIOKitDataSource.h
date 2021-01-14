/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoSerialNumberDataSource.h>
#import <HMFoundation/HMFSystemInfoProductInfoDataSource.h>

@class NSString;

@interface __HMFIOKitDataSource : HMFObject <HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource>

@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long productPlatform; 
@property (nonatomic,readonly) long long productClass; 
@property (nonatomic,readonly) long long productVariant; 
@property (nonatomic,copy,readonly) NSString * modelIdentifier; 
-(NSString *)serialNumber;
-(long long)productClass;
-(long long)productVariant;
-(NSString *)modelIdentifier;
-(long long)productPlatform;
@end

