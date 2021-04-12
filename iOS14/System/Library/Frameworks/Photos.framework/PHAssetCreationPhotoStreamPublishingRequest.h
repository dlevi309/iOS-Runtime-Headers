/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSURL, PLManagedAsset;

@interface PHAssetCreationPhotoStreamPublishingRequest : NSObject {

	NSURL* _fileURL;
	PLManagedAsset* _asset;

}

@property (nonatomic,copy) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) PLManagedAsset * asset;              //@synthesize asset=_asset - In the implementation block
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)asset;
-(NSURL *)fileURL;
@end

