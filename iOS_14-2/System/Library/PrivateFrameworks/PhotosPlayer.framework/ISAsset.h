/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class AVAsset;

@interface ISAsset : NSObject {

	id _UIImage;
	int _photoEXIFOrientation;
	AVAsset* _videoAsset;
	CGImageRef _photo;
	double _photoTime;
	unsigned long long _options;

}

@property (nonatomic,copy,readonly) AVAsset * videoAsset;               //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) CGImageRef photo;                        //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) double photoTime;                        //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS1 photoCMTime; 
@property (nonatomic,readonly) int photoEXIFOrientation;                //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL hasColorAdjustments; 
+(id)assetForURL:(id)arg1 error:(id*)arg2 ;
-(CGImageRef)photo;
-(id)init;
-(unsigned long long)options;
-(id)description;
-(SCD_Struct_IS1)photoCMTime;
-(id)initWithVideoAsset:(id)arg1 UIImage:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 options:(unsigned long long)arg5 ;
-(id)initWithVideoAsset:(id)arg1 photo:(CGImageRef)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 ;
-(double)photoTime;
-(int)photoEXIFOrientation;
-(AVAsset *)videoAsset;
-(void)dealloc;
-(id)initWithVideoAsset:(id)arg1 photo:(CGImageRef)arg2 photoTime:(double)arg3 options:(unsigned long long)arg4 ;
-(id)initWithVideoAsset:(id)arg1 photo:(CGImageRef)arg2 photoTime:(double)arg3 ;
-(id)initWithVideoAsset:(id)arg1 photo:(CGImageRef)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 options:(unsigned long long)arg5 ;
-(void)resetAVObjects;
-(BOOL)hasColorAdjustments;
@end

