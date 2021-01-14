/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

