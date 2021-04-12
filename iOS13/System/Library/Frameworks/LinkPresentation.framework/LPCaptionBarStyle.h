/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPImageViewStyle, LPCaptionBarAccessoryStyle, LPVerticalTextStackViewStyle, LPPointUnit, LPMusicPlayButtonStyle, LPPadding;

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
-(LPPointUnit *)minimumWidth;
-(void)setMinimumWidth:(LPPointUnit *)arg1 ;
-(LPMusicPlayButtonStyle *)playButton;
-(id)leftIcon;
-(LPVerticalTextStackViewStyle *)textStack;
-(id)rightIcon;
-(LPImageViewStyle *)trailingIcon;
-(LPImageViewStyle *)leadingIcon;
-(id)leftAccessory;
-(id)rightAccessory;
-(LPCaptionBarAccessoryStyle *)leadingAccessory;
-(LPCaptionBarAccessoryStyle *)trailingAccessory;
-(id)initWithPlatform:(long long)arg1 sizeClass:(unsigned long long)arg2 ;
-(LPImageViewStyle *)placeholderIcon;
-(LPPadding *)playButtonPadding;
@end

