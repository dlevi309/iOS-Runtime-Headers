/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class NSArray;


@protocol HFProcessedWallpaperSource <NSObject>
@property (nonatomic,copy,readonly) NSArray * supportedVariants; 
@property (nonatomic,readonly) unsigned long long processVersionNumber; 
@required
-(id)processedImageForVariant:(long long)arg1 wallpaper:(id)arg2 image:(id)arg3;
-(NSArray *)supportedVariants;
-(unsigned long long)processVersionNumber;

@end

