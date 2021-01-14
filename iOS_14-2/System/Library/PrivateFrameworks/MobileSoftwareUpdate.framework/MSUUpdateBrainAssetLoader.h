/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
*/

#import <MobileSoftwareUpdate/MSUUpdateBrainLoader.h>

@class MAAsset;

@interface MSUUpdateBrainAssetLoader : MSUUpdateBrainLoader {

	MAAsset* _updateAsset;

}

@property (nonatomic,retain) MAAsset * updateAsset;              //@synthesize updateAsset=_updateAsset - In the implementation block
-(BOOL)cancel:(id*)arg1 ;
-(MAAsset *)updateAsset;
-(void)dealloc;
-(id)initWithUpdateAsset:(id)arg1 ;
-(void)loadUpdateBrainWithMAOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)adjustMAOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)adjustOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)purgeUpdateBrains:(id*)arg1 ;
-(long long)requiredDiskSpace:(id*)arg1 ;
-(void)setUpdateAsset:(MAAsset *)arg1 ;
@end

