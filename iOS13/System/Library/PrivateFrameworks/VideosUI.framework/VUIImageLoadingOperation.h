/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

@class TVImage, NSError;


@protocol VUIImageLoadingOperation <NSObject>
@property (nonatomic,readonly) CGSize scaleToSize; 
@property (nonatomic,readonly) BOOL cropToFit; 
@property (nonatomic,readonly) TVImage * image; 
@property (nonatomic,readonly) unsigned long long scalingResult; 
@property (nonatomic,copy,readonly) NSError * error; 
@required
-(NSError *)error;
-(TVImage *)image;
-(CGSize)scaleToSize;
-(BOOL)cropToFit;
-(unsigned long long)scalingResult;

@end

