/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAsset:(PHAsset *)arg1 ;
-(CGRect)crop;
-(PHAsset *)asset;
-(void)setCrop:(CGRect)arg1 ;
-(unsigned long long)subsampleFactor;
-(void)setSubsampleFactor:(unsigned long long)arg1 ;
@end

