/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HFWallpaper, HFWallpaperSlice;

@interface HFWallpaperEditCollection : NSObject {

	HFWallpaper* _wallpaper;
	HFWallpaperSlice* _originalSlice;
	HFWallpaperSlice* _processedSlice;

}

@property (nonatomic,readonly) HFWallpaper * wallpaper;                        //@synthesize wallpaper=_wallpaper - In the implementation block
@property (nonatomic,readonly) HFWallpaperSlice * originalSlice;               //@synthesize originalSlice=_originalSlice - In the implementation block
@property (nonatomic,readonly) HFWallpaperSlice * processedSlice;              //@synthesize processedSlice=_processedSlice - In the implementation block
-(id)description;
-(HFWallpaper *)wallpaper;
-(HFWallpaperSlice *)originalSlice;
-(HFWallpaperSlice *)processedSlice;
-(id)initWithWallpaper:(id)arg1 originalSlice:(id)arg2 processedSlice:(id)arg3 ;
@end

