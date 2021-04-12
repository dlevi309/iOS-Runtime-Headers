/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class FCTagBanner, NSString, FCTextInfo, FCColor, FCAssetHandle, NSArray, FCHeadlineTemplate;


@protocol FCFeedTheming <NSObject,NFCopying>
@property (nonatomic,readonly) long long feedType; 
@property (nonatomic,readonly) BOOL isWhite; 
@property (nonatomic,readonly) BOOL isDark; 
@property (nonatomic,readonly) FCTagBanner * defaultBannerImage; 
@property (nonatomic,readonly) FCTagBanner * bannerImageForWhiteBackground; 
@property (nonatomic,readonly) FCTagBanner * bannerImageForThemeBackground; 
@property (nonatomic,readonly) FCTagBanner * bannerImageForMask; 
@property (nonatomic,readonly) FCTagBanner * compactBannerImage; 
@property (nonatomic,readonly) double bannerImageScale; 
@property (nonatomic,readonly) double bannerImageBaselineOffsetPercentage; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) FCTextInfo * headlineTitleTextInfo; 
@property (nonatomic,copy,readonly) FCTextInfo * headlineExcerptTextInfo; 
@property (nonatomic,copy,readonly) FCTextInfo * headlineBylineTextInfo; 
@property (nonatomic,readonly) FCColor * backgroundColor; 
@property (nonatomic,readonly) FCColor * darkStyleBackgroundColor; 
@property (nonatomic,readonly) FCColor * foregroundColor; 
@property (nonatomic,readonly) FCColor * darkStyleForegroundColor; 
@property (nonatomic,readonly) FCAssetHandle * logoImageAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * nameImageAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * nameImageCompactAssetHandle; 
@property (nonatomic,readonly) CGSize nameImageSize; 
@property (nonatomic,readonly) FCEdgeInsets nameImageInsets; 
@property (nonatomic,readonly) FCAssetHandle * nameImageForDarkBackgroundAssetHandle; 
@property (nonatomic,readonly) CGSize nameImageForDarkBackgroundSize; 
@property (nonatomic,readonly) FCEdgeInsets nameImageForDarkBackgroundInsets; 
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskAssetHandle; 
@property (nonatomic,readonly) CGSize nameImageMaskSize; 
@property (nonatomic,readonly) FCEdgeInsets nameImageMaskInsets; 
@property (nonatomic,readonly) NSArray * loadableFonts; 
@property (nonatomic,readonly) FCHeadlineTemplate * defaultHeadlineTemplate; 
@property (nonatomic,readonly) BOOL allowCustomBottomStyle; 
@required
-(NSString *)name;
-(FCColor *)backgroundColor;
-(FCColor *)foregroundColor;
-(long long)feedType;
-(FCColor *)darkStyleBackgroundColor;
-(FCTextInfo *)headlineTitleTextInfo;
-(FCTextInfo *)headlineExcerptTextInfo;
-(FCTextInfo *)headlineBylineTextInfo;
-(FCAssetHandle *)nameImageMaskAssetHandle;
-(FCAssetHandle *)nameImageForDarkBackgroundAssetHandle;
-(FCTagBanner *)bannerImageForThemeBackground;
-(FCAssetHandle *)nameImageAssetHandle;
-(FCTagBanner *)bannerImageForWhiteBackground;
-(FCAssetHandle *)nameImageCompactAssetHandle;
-(FCTagBanner *)compactBannerImage;
-(BOOL)isWhite;
-(FCTagBanner *)bannerImageForMask;
-(FCColor *)darkStyleForegroundColor;
-(BOOL)isDark;
-(FCTagBanner *)defaultBannerImage;
-(double)bannerImageScale;
-(double)bannerImageBaselineOffsetPercentage;
-(FCAssetHandle *)logoImageAssetHandle;
-(CGSize)nameImageSize;
-(FCEdgeInsets)nameImageInsets;
-(CGSize)nameImageForDarkBackgroundSize;
-(FCEdgeInsets)nameImageForDarkBackgroundInsets;
-(CGSize)nameImageMaskSize;
-(FCEdgeInsets)nameImageMaskInsets;
-(NSArray *)loadableFonts;
-(FCHeadlineTemplate *)defaultHeadlineTemplate;
-(BOOL)allowCustomBottomStyle;

@end

