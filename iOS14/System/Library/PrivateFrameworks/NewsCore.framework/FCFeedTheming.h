/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class FCTagBanner, NSString, FCTextInfo, FCColor, FCContentColorMap, FCAssetHandle, NSArray, FCHeadlineTemplate;


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
@property (nonatomic,readonly) FCContentColorMap * contentColorMap; 
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
-(FCEdgeInsets)nameImageInsets;
-(FCColor *)darkStyleBackgroundColor;
-(FCAssetHandle *)nameImageMaskAssetHandle;
-(long long)feedType;
-(FCTagBanner *)bannerImageForMask;
-(CGSize)nameImageForDarkBackgroundSize;
-(FCColor *)foregroundColor;
-(FCTextInfo *)headlineExcerptTextInfo;
-(double)bannerImageBaselineOffsetPercentage;
-(CGSize)nameImageMaskSize;
-(FCTagBanner *)compactBannerImage;
-(FCAssetHandle *)nameImageCompactAssetHandle;
-(FCColor *)backgroundColor;
-(NSString *)name;
-(NSArray *)loadableFonts;
-(FCTagBanner *)bannerImageForThemeBackground;
-(FCTagBanner *)bannerImageForWhiteBackground;
-(FCTextInfo *)headlineBylineTextInfo;
-(FCColor *)darkStyleForegroundColor;
-(BOOL)isWhite;
-(FCContentColorMap *)contentColorMap;
-(FCAssetHandle *)nameImageAssetHandle;
-(FCEdgeInsets)nameImageMaskInsets;
-(FCTextInfo *)headlineTitleTextInfo;
-(CGSize)nameImageSize;
-(BOOL)isDark;
-(FCAssetHandle *)logoImageAssetHandle;
-(double)bannerImageScale;
-(FCEdgeInsets)nameImageForDarkBackgroundInsets;
-(FCAssetHandle *)nameImageForDarkBackgroundAssetHandle;
-(FCHeadlineTemplate *)defaultHeadlineTemplate;
-(FCTagBanner *)defaultBannerImage;
-(BOOL)allowCustomBottomStyle;

@end

