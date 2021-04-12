/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/


@protocol BNLayoutManaging <NSObject>
@property (assign,nonatomic) BNBannerLayoutInfoV2 layoutInfoV2; 
@property (assign,nonatomic) BNBannerLayoutInfo layoutInfo; 
@optional
-(BNBannerLayoutInfo)layoutInfo;
-(void)setLayoutInfo:(BNBannerLayoutInfo)arg1;

@required
-(CGRect*)useableContainerFrameInContainerBounds:(CGRect)arg1 onScreen:(id)arg2;
-(CGRect*)presentedFrameForContentWithPreferredSize:(CGSize)arg1 inUseableContainerFrame:(CGRect)arg2 containerBounds:(CGRect)arg3 scale:(double)arg4;
-(BNBannerLayoutInfoV2)layoutInfoV2;
-(CGRect*)dismissedFrameForContentWithPreferredSize:(CGSize)arg1 inUseableContainerFrame:(CGRect)arg2 containerBounds:(CGRect)arg3 overshoot:(BOOL)arg4 scale:(double)arg5;
-(CGRect*)presentedFrameForContentWithFrame:(CGRect)arg1 afterContentWithFrame:(CGRect)arg2;
-(void)setLayoutInfoV2:(BNBannerLayoutInfoV2)arg1;

@end

