/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSDictionary, SUGradient;

@interface SUViewControllerScriptProperties : NSObject <NSSecureCoding, NSCopying> {

	BOOL _alwaysDispatchesScrollEvents;
	UIColor* _backgroundColor;
	NSDictionary* _contextDictionary;
	BOOL _doubleTapEnabled;
	BOOL _embedded;
	BOOL _flashesScrollIndicators;
	BOOL _inputViewObeysDOMFocus;
	long long _loadingIndicatorStyle;
	UIColor* _loadingTextColor;
	UIColor* _loadingTextShadowColor;
	SUGradient* _placeholderBackgroundGradient;
	UIEdgeInsets _scrollContentInsets;
	BOOL _scrollingDisabled;
	BOOL _shouldLoadProgressively;
	BOOL _shouldShowFormAccessory;
	BOOL _showsHorizontalScrollIndicator;
	BOOL _showsVerticalScrollIndicator;
	BOOL _showsBackgroundShadow;
	UIColor* _topExtensionColor;
	BOOL _usesBlurredBackground;

}

@property (assign,nonatomic) BOOL alwaysDispatchesScrollEvents;                              //@synthesize alwaysDispatchesScrollEvents=_alwaysDispatchesScrollEvents - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSDictionary * contextDictionary;                                 //@synthesize contextDictionary=_contextDictionary - In the implementation block
@property (assign,nonatomic) BOOL inputViewObeysDOMFocus;                                    //@synthesize inputViewObeysDOMFocus=_inputViewObeysDOMFocus - In the implementation block
@property (assign,getter=isDoubleTapEnabled,nonatomic) BOOL doubleTapEnabled;                //@synthesize doubleTapEnabled=_doubleTapEnabled - In the implementation block
@property (assign,getter=isScrollingDisabled,nonatomic) BOOL scrollingDisabled;              //@synthesize scrollingDisabled=_scrollingDisabled - In the implementation block
@property (assign,getter=isEmbedded,nonatomic) BOOL embedded;                                //@synthesize embedded=_embedded - In the implementation block
@property (assign,nonatomic) long long loadingIndicatorStyle;                                //@synthesize loadingIndicatorStyle=_loadingIndicatorStyle - In the implementation block
@property (nonatomic,retain) UIColor * loadingTextColor;                                     //@synthesize loadingTextColor=_loadingTextColor - In the implementation block
@property (nonatomic,retain) UIColor * loadingTextShadowColor;                               //@synthesize loadingTextShadowColor=_loadingTextShadowColor - In the implementation block
@property (nonatomic,retain) SUGradient * placeholderBackgroundGradient;                     //@synthesize placeholderBackgroundGradient=_placeholderBackgroundGradient - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollContentInsets;                               //@synthesize scrollContentInsets=_scrollContentInsets - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadProgressively;                                   //@synthesize shouldLoadProgressively=_shouldLoadProgressively - In the implementation block
@property (assign,nonatomic) BOOL shouldShowFormAccessory;                                   //@synthesize shouldShowFormAccessory=_shouldShowFormAccessory - In the implementation block
@property (assign,nonatomic) BOOL showsBackgroundShadow;                                     //@synthesize showsBackgroundShadow=_showsBackgroundShadow - In the implementation block
@property (assign,nonatomic) BOOL flashesScrollIndicators;                                   //@synthesize flashesScrollIndicators=_flashesScrollIndicators - In the implementation block
@property (assign,nonatomic) BOOL showsHorizontalScrollIndicator;                            //@synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsVerticalScrollIndicator;                              //@synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator - In the implementation block
@property (nonatomic,retain) UIColor * topExtensionColor;                                    //@synthesize topExtensionColor=_topExtensionColor - In the implementation block
@property (assign,nonatomic) BOOL usesBlurredBackground;                                     //@synthesize usesBlurredBackground=_usesBlurredBackground - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)contextDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setContextDictionary:(NSDictionary *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setScrollingDisabled:(BOOL)arg1 ;
-(BOOL)isScrollingDisabled;
-(BOOL)alwaysDispatchesScrollEvents;
-(void)setAlwaysDispatchesScrollEvents:(BOOL)arg1 ;
-(BOOL)inputViewObeysDOMFocus;
-(void)setInputViewObeysDOMFocus:(BOOL)arg1 ;
-(BOOL)showsHorizontalScrollIndicator;
-(BOOL)isEmbedded;
-(id)initWithCoder:(id)arg1 ;
-(void)setDoubleTapEnabled:(BOOL)arg1 ;
-(BOOL)isDoubleTapEnabled;
-(BOOL)showsVerticalScrollIndicator;
-(void)setShowsHorizontalScrollIndicator:(BOOL)arg1 ;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEmbedded:(BOOL)arg1 ;
-(void)dealloc;
-(void)setLoadingIndicatorStyle:(long long)arg1 ;
-(long long)loadingIndicatorStyle;
-(UIColor *)loadingTextColor;
-(UIColor *)loadingTextShadowColor;
-(void)setLoadingTextColor:(UIColor *)arg1 ;
-(void)setLoadingTextShadowColor:(UIColor *)arg1 ;
-(void)setPlaceholderBackgroundGradient:(SUGradient *)arg1 ;
-(SUGradient *)placeholderBackgroundGradient;
-(BOOL)usesBlurredBackground;
-(void)setShowsBackgroundShadow:(BOOL)arg1 ;
-(void)setTopExtensionColor:(UIColor *)arg1 ;
-(BOOL)showsBackgroundShadow;
-(UIColor *)topExtensionColor;
-(void)setFlashesScrollIndicators:(BOOL)arg1 ;
-(void)setShouldShowFormAccessory:(BOOL)arg1 ;
-(void)setShouldLoadProgressively:(BOOL)arg1 ;
-(void)setScrollContentInsets:(UIEdgeInsets)arg1 ;
-(BOOL)flashesScrollIndicators;
-(UIEdgeInsets)scrollContentInsets;
-(BOOL)shouldShowFormAccessory;
-(BOOL)shouldLoadProgressively;
-(void)setUsesBlurredBackground:(BOOL)arg1 ;
@end
