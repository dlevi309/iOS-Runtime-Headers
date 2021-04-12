/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIProductUberBackgroundInterface <NSObject>
@property (nonatomic,readonly) BOOL isUberLayoutActive; 
@property (nonatomic,readonly) BOOL disableGradientBelowNavBar; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double topThreshold; 
@required
-(CGSize)size;
-(BOOL)isUberLayoutActive;
-(void)setUberImageOffset:(double)arg1;
-(void)setBannerOpacity:(double)arg1;
-(BOOL)disableGradientBelowNavBar;
-(double)topThreshold;

@end

