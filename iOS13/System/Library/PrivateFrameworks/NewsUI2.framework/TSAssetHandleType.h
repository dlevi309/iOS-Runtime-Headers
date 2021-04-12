/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)filePath;
-(NSString *)uniqueKey;
-(UIImage *)fallbackImage;
-(void)downloadWithGroup:(id)arg1;

@end

