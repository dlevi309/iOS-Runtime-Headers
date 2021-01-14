/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

