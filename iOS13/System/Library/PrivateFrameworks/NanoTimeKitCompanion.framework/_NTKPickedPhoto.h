/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NTKPhoto, PHAsset;

@interface _NTKPickedPhoto : NSObject {

	NTKPhoto* _photo;
	PHAsset* _asset;
	unsigned long long _subsampleFactor;

}

@property (nonatomic,retain) NTKPhoto * photo;                                //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) PHAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) unsigned long long subsampleFactor;              //@synthesize subsampleFactor=_subsampleFactor - In the implementation block
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(NTKPhoto *)photo;
-(void)setPhoto:(NTKPhoto *)arg1 ;
-(unsigned long long)subsampleFactor;
-(void)setSubsampleFactor:(unsigned long long)arg1 ;
@end

