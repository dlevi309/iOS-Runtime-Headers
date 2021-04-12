/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NTKAVListing.h>

@class CLKVideo, UIImage, CLKDevice, NSString, NTKPhotoAnalysis;

@interface NTKTimelapseListing : NSObject <NSCopying, NTKAVListing> {

	CLKDevice* _device;
	CLKVideo* _video;
	UIImage* _image;
	NSString* _videoName;
	NSString* _imageName;
	NTKPhotoAnalysis* _photoAnalysis;
	unsigned long long _theme;
	long long _videoIndex;

}

@property (nonatomic,readonly) unsigned long long theme;                      //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) long long videoIndex;                          //@synthesize videoIndex=_videoIndex - In the implementation block
@property (nonatomic,readonly) NTKPhotoAnalysis * photoAnalysis;              //@synthesize photoAnalysis=_photoAnalysis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLKVideo * video; 
@property (nonatomic,readonly) UIImage * image; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(unsigned long long)theme;
-(CLKVideo *)video;
-(BOOL)isSimilarTo:(id)arg1 ;
-(BOOL)snapshotDiffers:(id)arg1 ;
-(void)discardAssets;
-(id)initForDevice:(id)arg1 withTheme:(unsigned long long)arg2 videoIndex:(long long)arg3 photoAnalysis:(id)arg4 ;
-(NTKPhotoAnalysis *)photoAnalysis;
-(long long)videoIndex;
-(void)_setHasAssets;
@end

