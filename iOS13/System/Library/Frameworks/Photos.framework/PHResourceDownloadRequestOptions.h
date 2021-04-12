/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@interface PHResourceDownloadRequestOptions : NSObject {

	BOOL _treatLivePhotoAsStill;
	BOOL _dontAllowRAW;
	BOOL _downloadAllAssetResources;

}

@property (assign,nonatomic) BOOL treatLivePhotoAsStill;                  //@synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill - In the implementation block
@property (assign,nonatomic) BOOL dontAllowRAW;                           //@synthesize dontAllowRAW=_dontAllowRAW - In the implementation block
@property (assign,nonatomic) BOOL downloadAllAssetResources;              //@synthesize downloadAllAssetResources=_downloadAllAssetResources - In the implementation block
-(id)description;
-(BOOL)treatLivePhotoAsStill;
-(void)setTreatLivePhotoAsStill:(BOOL)arg1 ;
-(BOOL)dontAllowRAW;
-(void)setDontAllowRAW:(BOOL)arg1 ;
-(BOOL)downloadAllAssetResources;
-(void)setDownloadAllAssetResources:(BOOL)arg1 ;
@end

