/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPhoto:(NTKPhoto *)arg1 ;
-(void)setAsset:(PHAsset *)arg1 ;
-(NTKPhoto *)photo;
-(PHAsset *)asset;
-(unsigned long long)subsampleFactor;
-(void)setSubsampleFactor:(unsigned long long)arg1 ;
@end

