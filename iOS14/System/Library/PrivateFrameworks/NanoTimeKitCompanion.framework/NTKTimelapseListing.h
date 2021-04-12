/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) CLKVideo * video; 
@property (nonatomic,readonly) UIImage * image; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)theme;
-(CLKVideo *)video;
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSimilarTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)snapshotDiffers:(id)arg1 ;
-(void)discardAssets;
-(id)initForDevice:(id)arg1 withTheme:(unsigned long long)arg2 videoIndex:(long long)arg3 photoAnalysis:(id)arg4 ;
-(NTKPhotoAnalysis *)photoAnalysis;
-(long long)videoIndex;
-(void)_setHasAssets;
@end

