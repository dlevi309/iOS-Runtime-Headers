/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TVImage *)image;
-(NSError *)error;
-(unsigned long long)scalingResult;
-(CGSize)scaleToSize;
-(BOOL)cropToFit;

@end

