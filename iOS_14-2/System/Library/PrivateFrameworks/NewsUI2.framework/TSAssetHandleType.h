/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

@class NSString, UIImage;


@protocol TSAssetHandleType
@property (readonly,nonatomic) NSString * filePath; 
@property (readonly,nonatomic) id<TSAssetDataProviderType> assetDataProvider; 
@property (readonly,nonatomic) UIImage * fallbackImage; 
@property (readonly,nonatomic) NSString * uniqueKey; 
@optional
-(id<TSAssetDataProviderType>)assetDataProvider;

@required
-(NSString *)uniqueKey;
-(NSString *)filePath;
-(UIImage *)fallbackImage;
-(void)downloadWithGroup:(id)arg1;

@end

