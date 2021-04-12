/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPImageViewStyle, LPCaptionBarAccessoryStyle, LPVerticalTextStackViewStyle, LPPointUnit, LPMusicPlayButtonStyle, LPPadding, LPButtonStyle;

@interface LPCaptionBarStyle : NSObject {

	LPImageViewStyle* _leadingIcon;
	LPImageViewStyle* _trailingIcon;
	LPCaptionBarAccessoryStyle* _leadingAccessory;
	LPCaptionBarAccessoryStyle* _trailingAccessory;
	LPVerticalTextStackViewStyle* _textStack;
	LPPointUnit* _minimumWidth;
	LPImageViewStyle* _placeholderIcon;
	LPMusicPlayButtonStyle* _playButton;
	LPPadding* _playButtonPadding;
	LPButtonStyle* _button;

}

@property (nonatomic,readonly) LPImageViewStyle * leadingIcon;                              //@synthesize leadingIcon=_leadingIcon - In the implementation block
@property (nonatomic,readonly) LPImageViewStyle * trailingIcon;                             //@synthesize trailingIcon=_trailingIcon - In the implementation block
@property (nonatomic,readonly) LPCaptionBarAccessoryStyle * leadingAccessory;               //@synthesize leadingAccessory=_leadingAccessory - In the implementation block
@property (nonatomic,readonly) LPCaptionBarAccessoryStyle * trailingAccessory;              //@synthesize trailingAccessory=_trailingAccessory - In the implementation block
@property (nonatomic,readonly) LPVerticalTextStackViewStyle * textStack;                    //@synthesize textStack=_textStack - In the implementation block
@property (nonatomic,retain) LPPointUnit * minimumWidth;                                    //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (nonatomic,readonly) LPImageViewStyle * placeholderIcon;                          //@synthesize placeholderIcon=_placeholderIcon - In the implementation block
@property (nonatomic,readonly) LPMusicPlayButtonStyle * playButton;                         //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * playButtonPadding;                        //@synthesize playButtonPadding=_playButtonPadding - In the implementation block
@property (nonatomic,retain) LPButtonStyle * button;                                        //@synthesize button=_button - In the implementation block
-(LPButtonStyle *)button;
-(LPPointUnit *)minimumWidth;
-(void)setMinimumWidth:(LPPointUnit *)arg1 ;
-(LPImageViewStyle *)trailingIcon;
-(LPImageViewStyle *)leadingIcon;
-(void)setButton:(LPButtonStyle *)arg1 ;
-(LPMusicPlayButtonStyle *)playButton;
-(id)leftAccessory;
-(id)rightAccessory;
-(LPImageViewStyle *)placeholderIcon;
-(LPCaptionBarAccessoryStyle *)leadingAccessory;
-(LPCaptionBarAccessoryStyle *)trailingAccessory;
-(id)initWithPlatform:(long long)arg1 sizeClass:(unsigned long long)arg2 ;
-(LPPadding *)playButtonPadding;
-(id)leftIcon;
-(LPVerticalTextStackViewStyle *)textStack;
-(id)rightIcon;
@end

