/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
*/

#import <MobileSoftwareUpdate/MSUUpdateBrainLoader.h>

@class MAAsset;

@interface MSUUpdateBrainAssetLoader : MSUUpdateBrainLoader {

	MAAsset* _updateAsset;

}

@property (nonatomic,retain) MAAsset * updateAsset;              //@synthesize updateAsset=_updateAsset - In the implementation block
-(void)dealloc;
-(MAAsset *)updateAsset;
-(BOOL)cancel:(id*)arg1 ;
-(id)initWithUpdateAsset:(id)arg1 ;
-(void)loadUpdateBrainWithMAOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)adjustMAOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)adjustOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)purgeUpdateBrains:(id*)arg1 ;
-(long long)requiredDiskSpace:(id*)arg1 ;
-(void)setUpdateAsset:(MAAsset *)arg1 ;
@end

