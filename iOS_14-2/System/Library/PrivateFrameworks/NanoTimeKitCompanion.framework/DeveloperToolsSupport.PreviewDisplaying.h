/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol DeveloperToolsSupport.PreviewDisplaying <NSObject>
@property (assign,nonatomic) BOOL displayingLivePreview; 
@property (nonatomic,readonly) BOOL wantsCustomPreviewSize; 
@property (nonatomic,readonly) double customPreviewSizeCornerRadius; 
@optional
-(double)customPreviewSizeCornerRadius;

@required
-(BOOL)displayingLivePreview;
-(void)setDisplayingLivePreview:(BOOL)arg1;
-(BOOL)wantsCustomPreviewSize;

@end

