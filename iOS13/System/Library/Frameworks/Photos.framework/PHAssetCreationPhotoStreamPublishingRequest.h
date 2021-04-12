/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSURL, PLManagedAsset;

@interface PHAssetCreationPhotoStreamPublishingRequest : NSObject {

	NSURL* _fileURL;
	PLManagedAsset* _asset;

}

@property (nonatomic,copy) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) PLManagedAsset * asset;              //@synthesize asset=_asset - In the implementation block
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(PLManagedAsset *)asset;
-(void)setAsset:(PLManagedAsset *)arg1 ;
@end

