/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

@class NSString;


@protocol HMFSystemInfoProductInfoDataSource <NSObject>
@property (nonatomic,readonly) long long productPlatform; 
@property (nonatomic,readonly) long long productClass; 
@property (nonatomic,readonly) long long productVariant; 
@property (nonatomic,copy,readonly) NSString * modelIdentifier; 
@required
-(long long)productClass;
-(long long)productVariant;
-(NSString *)modelIdentifier;
-(long long)productPlatform;

@end

