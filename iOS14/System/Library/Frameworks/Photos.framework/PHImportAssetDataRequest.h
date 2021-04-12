/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PFCanceler, PHImportAsset;

@interface PHImportAssetDataRequest : NSObject {

	PFCanceler* _canceler;
	/*^block*/id _cancelBlock;
	PHImportAsset* _asset;

}

@property (nonatomic,copy) id cancelBlock;                                //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,retain) PHImportAsset * asset;                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PHImportAsset * requestAsset; 
-(void)setAsset:(PHImportAsset *)arg1 ;
-(BOOL)isCanceled;
-(PHImportAsset *)asset;
-(id)initWithAsset:(id)arg1 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(PHImportAsset *)requestAsset;
-(void)cancel;
@end

