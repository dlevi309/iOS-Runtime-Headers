/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class UIColor, LPCaptionBarStyle, LPTextViewStyle, LPImageViewStyle, LPVideoViewStyle, LPTapToLoadViewStyle, LPPointUnit;

@interface LPTheme : NSObject {

	long long _style;
	unsigned long long _sizeClass;
	long long _platform;
	BOOL _isFallbackIcon;
	UIColor* _backgroundColor;
	UIColor* _highlightColor;
	LPCaptionBarStyle* _captionBar;
	LPTextViewStyle* _quotedText;
	LPImageViewStyle* _mediaImage;
	LPImageViewStyle* _placeholderIcon;
	LPVideoViewStyle* _mediaVideo;
	UIColor* _mediaBackgroundColor;
	LPCaptionBarStyle* _mediaTopCaptionBar;
	LPCaptionBarStyle* _mediaBottomCaptionBar;
	LPTapToLoadViewStyle* _tapToLoad;
	LPPointUnit* _maximumWidth;
	LPPointUnit* _maximumIntrinsicHeight;
	double _widthFractionForTallMedia;

}

@property (nonatomic,retain) UIColor * backgroundColor;                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                                 //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,readonly) LPCaptionBarStyle * captionBar;                         //@synthesize captionBar=_captionBar - In the implementation block
@property (nonatomic,readonly) LPTextViewStyle * quotedText;                           //@synthesize quotedText=_quotedText - In the implementation block
@property (nonatomic,readonly) LPImageViewStyle * mediaImage;                          //@synthesize mediaImage=_mediaImage - In the implementation block
@property (nonatomic,readonly) LPImageViewStyle * placeholderIcon;                     //@synthesize placeholderIcon=_placeholderIcon - In the implementation block
@property (nonatomic,readonly) LPVideoViewStyle * mediaVideo;                          //@synthesize mediaVideo=_mediaVideo - In the implementation block
@property (nonatomic,retain) UIColor * mediaBackgroundColor;                           //@synthesize mediaBackgroundColor=_mediaBackgroundColor - In the implementation block
@property (nonatomic,readonly) LPCaptionBarStyle * mediaTopCaptionBar;                 //@synthesize mediaTopCaptionBar=_mediaTopCaptionBar - In the implementation block
@property (nonatomic,readonly) LPCaptionBarStyle * mediaBottomCaptionBar;              //@synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar - In the implementation block
@property (nonatomic,readonly) LPTapToLoadViewStyle * tapToLoad;                       //@synthesize tapToLoad=_tapToLoad - In the implementation block
@property (nonatomic,retain) LPPointUnit * maximumWidth;                               //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (nonatomic,retain) LPPointUnit * maximumIntrinsicHeight;                     //@synthesize maximumIntrinsicHeight=_maximumIntrinsicHeight - In the implementation block
@property (assign,nonatomic) double widthFractionForTallMedia;                         //@synthesize widthFractionForTallMedia=_widthFractionForTallMedia - In the implementation block
+(id)secondaryLabelColor;
+(void)addClient:(id)arg1 ;
+(id)themeWithStyle:(long long)arg1 icon:(id)arg2 platform:(long long)arg3 sizeClass:(unsigned long long)arg4 ;
+(id)iconPlatterPaddingForReason:(long long)arg1 ;
+(id)iconPlatterCornerRadius;
+(id)regularTheme;
+(double)largestIconSizeInPoints;
+(id)primaryLabelColor;
+(void)invalidateThemeCache;
-(id)valueForUndefinedKey:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(LPPointUnit *)maximumWidth;
-(void)setMaximumWidth:(LPPointUnit *)arg1 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(id)CSSTextForThemeProperty:(id)arg1 allowsAlternateProperties:(BOOL)arg2 ;
-(id)valueForThemeProperty:(id)arg1 ;
-(id)CSSTextForProperty:(id)arg1 withValue:(id)arg2 allowsAlternateProperties:(BOOL)arg3 ;
-(id)CSSCustomPropertiesForThemePropertiesInSet:(id)arg1 ;
-(LPCaptionBarStyle *)captionBar;
-(LPCaptionBarStyle *)mediaBottomCaptionBar;
-(LPCaptionBarStyle *)mediaTopCaptionBar;
-(LPTextViewStyle *)quotedText;
-(LPImageViewStyle *)mediaImage;
-(LPTapToLoadViewStyle *)tapToLoad;
-(LPVideoViewStyle *)mediaVideo;
-(LPImageViewStyle *)placeholderIcon;
-(id)initWithStyle:(long long)arg1 icon:(id)arg2 platform:(long long)arg3 sizeClass:(unsigned long long)arg4 ;
-(void)adjustForStyle;
-(UIColor *)mediaBackgroundColor;
-(void)setMediaBackgroundColor:(UIColor *)arg1 ;
-(LPPointUnit *)maximumIntrinsicHeight;
-(void)setMaximumIntrinsicHeight:(LPPointUnit *)arg1 ;
-(double)widthFractionForTallMedia;
-(void)setWidthFractionForTallMedia:(double)arg1 ;
@end

