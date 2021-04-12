/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class PHAsset;

@interface _NTKNewPhoto : NSObject {

	PHAsset* _asset;
	unsigned long long _subsampleFactor;
	CGRect _crop;

}

@property (nonatomic,retain) PHAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) CGRect crop;                                     //@synthesize crop=_crop - In the implementation block
@property (assign,nonatomic) unsigned long long subsampleFactor;              //@synthesize subsampleFactor=_subsampleFactor - In the implementation block
-(CGRect)crop;
-(void)setCrop:(CGRect)arg1 ;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(unsigned long long)subsampleFactor;
-(void)setSubsampleFactor:(unsigned long long)arg1 ;
@end

