/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCMultiResolutionImage, NSURL, FCColor;

@interface FCPaywallVisualSpecConfiguration : NSObject <NSCopying> {

	FCMultiResolutionImage* _multiResolutionImage;
	FCMultiResolutionImage* _darkStyleMultiResolutionImage;
	NSURL* _videoURL;
	long long _videoWidth;
	long long _videoHeight;
	double _gradientPercentHeight;
	long long _textTopPadding;
	FCColor* _backgroundColor;
	FCColor* _darkStyleBackgroundColor;
	FCColor* _mastheadTextColor;
	FCColor* _largeTextColor;
	FCColor* _smallTextColor;

}

@property (nonatomic,retain) FCMultiResolutionImage * multiResolutionImage;                       //@synthesize multiResolutionImage=_multiResolutionImage - In the implementation block
@property (nonatomic,retain) FCMultiResolutionImage * darkStyleMultiResolutionImage;              //@synthesize darkStyleMultiResolutionImage=_darkStyleMultiResolutionImage - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                                                    //@synthesize videoURL=_videoURL - In the implementation block
@property (assign,nonatomic) long long videoWidth;                                                //@synthesize videoWidth=_videoWidth - In the implementation block
@property (assign,nonatomic) long long videoHeight;                                               //@synthesize videoHeight=_videoHeight - In the implementation block
@property (nonatomic,retain) FCColor * backgroundColor;                                           //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) FCColor * darkStyleBackgroundColor;                                  //@synthesize darkStyleBackgroundColor=_darkStyleBackgroundColor - In the implementation block
@property (nonatomic,retain) FCColor * mastheadTextColor;                                         //@synthesize mastheadTextColor=_mastheadTextColor - In the implementation block
@property (nonatomic,retain) FCColor * largeTextColor;                                            //@synthesize largeTextColor=_largeTextColor - In the implementation block
@property (nonatomic,retain) FCColor * smallTextColor;                                            //@synthesize smallTextColor=_smallTextColor - In the implementation block
@property (assign,nonatomic) double gradientPercentHeight;                                        //@synthesize gradientPercentHeight=_gradientPercentHeight - In the implementation block
@property (assign,nonatomic) long long textTopPadding;                                            //@synthesize textTopPadding=_textTopPadding - In the implementation block
+(id)defaultPaywallVisualSpecConfiguration;
+(id)defaultMagazineFeedPaywallVisualSpecConfigurationSmall;
+(id)defaultMagazineFeedPaywallVisualSpecConfigurationMedium;
+(id)defaultMagazineFeedPaywallVisualSpecConfigurationLarge;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCColor *)backgroundColor;
-(void)setBackgroundColor:(FCColor *)arg1 ;
-(long long)videoWidth;
-(void)setVideoWidth:(long long)arg1 ;
-(long long)videoHeight;
-(void)setVideoHeight:(long long)arg1 ;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithMultiResolutionImage:(id)arg1 darkStyleMultiResolutionImage:(id)arg2 videoURL:(id)arg3 videoWidth:(long long)arg4 videoHeight:(long long)arg5 gradientPercentHeight:(double)arg6 textTopPadding:(long long)arg7 backgroundColor:(id)arg8 darkStyleBackgroundColor:(id)arg9 mastheadTextColor:(id)arg10 largeTextColor:(id)arg11 smallTextColor:(id)arg12 ;
-(FCMultiResolutionImage *)multiResolutionImage;
-(FCMultiResolutionImage *)darkStyleMultiResolutionImage;
-(FCColor *)darkStyleBackgroundColor;
-(double)gradientPercentHeight;
-(long long)textTopPadding;
-(void)setMultiResolutionImage:(FCMultiResolutionImage *)arg1 ;
-(void)setDarkStyleMultiResolutionImage:(FCMultiResolutionImage *)arg1 ;
-(void)setGradientPercentHeight:(double)arg1 ;
-(void)setTextTopPadding:(long long)arg1 ;
-(void)setDarkStyleBackgroundColor:(FCColor *)arg1 ;
-(FCColor *)mastheadTextColor;
-(void)setMastheadTextColor:(FCColor *)arg1 ;
-(FCColor *)largeTextColor;
-(void)setLargeTextColor:(FCColor *)arg1 ;
-(FCColor *)smallTextColor;
-(void)setSmallTextColor:(FCColor *)arg1 ;
@end

