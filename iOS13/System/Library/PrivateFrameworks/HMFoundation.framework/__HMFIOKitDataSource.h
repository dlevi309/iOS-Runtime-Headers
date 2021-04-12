/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoSerialNumberDataSource.h>
#import <HMFoundation/HMFSystemInfoProductInfoDataSource.h>

@class NSString;

@interface __HMFIOKitDataSource : HMFObject <HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) long long productPlatform; 
@property (nonatomic,readonly) long long productClass; 
@property (nonatomic,readonly) long long productVariant; 
@property (nonatomic,copy,readonly) NSString * modelIdentifier; 
-(NSString *)modelIdentifier;
-(NSString *)serialNumber;
-(long long)productClass;
-(long long)productVariant;
-(long long)productPlatform;
@end

