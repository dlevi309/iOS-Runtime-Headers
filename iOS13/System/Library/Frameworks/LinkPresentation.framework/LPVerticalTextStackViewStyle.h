/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <libobjc.A.dylib/LPEmailCompatibleCaptionBarItemChild.h>

@class LPPointUnit, LPTextRowStyle, LPPadding;

@interface LPVerticalTextStackViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild> {

	BOOL _shouldAlignToBaselines;
	unsigned _maximumNumberOfLines;
	LPPointUnit* _firstLineLeading;
	LPPointUnit* _lastLineDescent;
	LPTextRowStyle* _aboveTopCaption;
	LPTextRowStyle* _topCaption;
	LPTextRowStyle* _bottomCaption;
	LPTextRowStyle* _belowBottomCaption;
	LPPadding* _captionTextPadding;
	LPPadding* _emailCompatibleMargin;

}

@property (nonatomic,retain) LPPointUnit * firstLineLeading;                          //@synthesize firstLineLeading=_firstLineLeading - In the implementation block
@property (nonatomic,retain) LPPointUnit * lastLineDescent;                           //@synthesize lastLineDescent=_lastLineDescent - In the implementation block
@property (nonatomic,readonly) LPTextRowStyle * aboveTopCaption;                      //@synthesize aboveTopCaption=_aboveTopCaption - In the implementation block
@property (nonatomic,readonly) LPTextRowStyle * topCaption;                           //@synthesize topCaption=_topCaption - In the implementation block
@property (nonatomic,readonly) LPTextRowStyle * bottomCaption;                        //@synthesize bottomCaption=_bottomCaption - In the implementation block
@property (nonatomic,readonly) LPTextRowStyle * belowBottomCaption;                   //@synthesize belowBottomCaption=_belowBottomCaption - In the implementation block
@property (assign,nonatomic) unsigned maximumNumberOfLines;                           //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) BOOL shouldAlignToBaselines;                             //@synthesize shouldAlignToBaselines=_shouldAlignToBaselines - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * captionTextPadding;                 //@synthesize captionTextPadding=_captionTextPadding - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * emailCompatibleMargin;              //@synthesize emailCompatibleMargin=_emailCompatibleMargin - In the implementation block
-(unsigned)maximumNumberOfLines;
-(void)setMaximumNumberOfLines:(unsigned)arg1 ;
-(id)initWithPlatform:(long long)arg1 ;
-(LPTextRowStyle *)topCaption;
-(LPTextRowStyle *)bottomCaption;
-(LPPointUnit *)firstLineLeading;
-(LPPointUnit *)lastLineDescent;
-(LPTextRowStyle *)aboveTopCaption;
-(LPTextRowStyle *)belowBottomCaption;
-(BOOL)shouldAlignToBaselines;
-(void)setFirstLineLeading:(LPPointUnit *)arg1 ;
-(void)setLastLineDescent:(LPPointUnit *)arg1 ;
-(void)applyToAllTextViewStyles:(/*^block*/id)arg1 ;
-(LPPadding *)emailCompatibleMargin;
-(void)setShouldAlignToBaselines:(BOOL)arg1 ;
-(LPPadding *)captionTextPadding;
@end

