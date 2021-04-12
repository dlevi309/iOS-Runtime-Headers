/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

@class UIFont, UIColor, NSString, UIImage;


@protocol TUICandidateViewStyle <NSObject>
@property (nonatomic,readonly) UIFont * candidateFont; 
@property (nonatomic,readonly) UIFont * annotationTextFont; 
@property (nonatomic,readonly) UIFont * alternativeTextFont; 
@property (nonatomic,readonly) UIFont * candidateNumberFont; 
@property (nonatomic,readonly) UIFont * sortControlFont; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * highlightedTextColor; 
@property (nonatomic,readonly) UIColor * alternativeTextColor; 
@property (nonatomic,readonly) UIColor * highlightedAlternativeTextColor; 
@property (nonatomic,readonly) UIColor * candidateNumberColor; 
@property (nonatomic,readonly) UIColor * highlightedCandidateNumberColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * cellBackgroundColor; 
@property (nonatomic,readonly) UIColor * arrowButtonBackgroundColor; 
@property (nonatomic,readonly) UIColor * gridBackgroundColor; 
@property (nonatomic,readonly) UIColor * highlightedBackgroundColor; 
@property (nonatomic,readonly) UIColor * highlightedRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * transliterationCandidateBackgroundColor; 
@property (nonatomic,readonly) UIColor * groupHeaderBackgroundColor; 
@property (nonatomic,readonly) UIColor * lineColor; 
@property (nonatomic,readonly) UIColor * sortControlColor; 
@property (nonatomic,readonly) UIColor * sortControlBackgroundColor; 
@property (nonatomic,copy,readonly) NSString * arrowButtonImageName; 
@property (nonatomic,readonly) UIImage * cellSeparatorImage; 
@property (nonatomic,readonly) UIImage * slottedCellSeparatorImage; 
@property (nonatomic,readonly) UIImage * leftEdgeSeparatorImage; 
@property (nonatomic,readonly) UIImage * rightEdgeSeparatorImage; 
@property (nonatomic,readonly) UIImage * arrowButtonSeparatorImage; 
@property (nonatomic,readonly) UIImage * cellBackgroundImage; 
@property (nonatomic,readonly) UIImage * highlightedCellBackgroundImage; 
@property (nonatomic,readonly) UIImage * transliterationCandidateBackgroundImage; 
@property (nonatomic,readonly) double rowHeight; 
@property (nonatomic,readonly) double arrowButtonHeight; 
@property (nonatomic,readonly) double cornerRadius; 
@property (nonatomic,readonly) unsigned long long maskedCorners; 
@property (nonatomic,readonly) unsigned long long gridMaskedCorners; 
@property (nonatomic,readonly) double foregroundOpacity; 
@property (nonatomic,readonly) double backgroundOpacity; 
@property (nonatomic,readonly) BOOL doNotClipToBounds; 
@property (nonatomic,readonly) long long layoutOrientation; 
@property (nonatomic,readonly) unsigned long long columnsCount; 
@property (nonatomic,readonly) unsigned long long maxNumberOfProactiveCells; 
@property (nonatomic,readonly) double minimumCellPadding; 
@property (nonatomic,readonly) double minimumCellWidth; 
@property (nonatomic,readonly) double singleSlottedCellMargin; 
@property (nonatomic,readonly) UIEdgeInsets extraCellPadding; 
@property (nonatomic,readonly) UIEdgeInsets arrowButtonPadding; 
@property (nonatomic,readonly) UIEdgeInsets gridPadding; 
@property (nonatomic,readonly) UIEdgeInsets gridLinePadding; 
@property (nonatomic,readonly) CGPoint gridLineOffset; 
@property (nonatomic,readonly) UIEdgeInsets sortControlPadding; 
@property (nonatomic,readonly) long long cellTextAlignment; 
@property (nonatomic,readonly) BOOL darkBackdrop; 
@property (nonatomic,readonly) BOOL scrollDisabled; 
@property (nonatomic,readonly) BOOL showsIndex; 
@property (nonatomic,readonly) BOOL fillGridWithLines; 
@property (nonatomic,readonly) BOOL dontSelectLastItemByBackwardMoving; 
@property (nonatomic,readonly) BOOL showOneMoreCandidate; 
@property (nonatomic,readonly) BOOL disableSwitchingSortingMethodByTabKey; 
@property (nonatomic,readonly) BOOL skipInlineCandidate; 
@property (nonatomic,readonly) BOOL hidesPartialCandidates; 
@property (nonatomic,readonly) long long minimumNumberOfCandidates; 
@required
-(long long)layoutOrientation;
-(UIColor *)backgroundColor;
-(double)cornerRadius;
-(UIColor *)textColor;
-(double)rowHeight;
-(unsigned long long)maskedCorners;
-(UIImage *)arrowButtonSeparatorImage;
-(UIEdgeInsets)gridPadding;
-(UIEdgeInsets)sortControlPadding;
-(double)minimumCellPadding;
-(UIFont *)candidateFont;
-(unsigned long long)maxNumberOfProactiveCells;
-(double)singleSlottedCellMargin;
-(UIEdgeInsets)extraCellPadding;
-(UIColor *)highlightedBackgroundColor;
-(UIFont *)alternativeTextFont;
-(UIFont *)annotationTextFont;
-(UIImage *)leftEdgeSeparatorImage;
-(UIColor *)alternativeTextColor;
-(UIColor *)candidateNumberColor;
-(UIColor *)highlightedTextColor;
-(UIFont *)candidateNumberFont;
-(UIFont *)sortControlFont;
-(UIColor *)highlightedAlternativeTextColor;
-(UIColor *)highlightedCandidateNumberColor;
-(UIColor *)cellBackgroundColor;
-(UIColor *)arrowButtonBackgroundColor;
-(UIColor *)gridBackgroundColor;
-(UIColor *)highlightedRowBackgroundColor;
-(UIColor *)transliterationCandidateBackgroundColor;
-(UIColor *)groupHeaderBackgroundColor;
-(UIColor *)lineColor;
-(UIColor *)sortControlColor;
-(UIColor *)sortControlBackgroundColor;
-(NSString *)arrowButtonImageName;
-(UIImage *)cellSeparatorImage;
-(UIImage *)slottedCellSeparatorImage;
-(UIImage *)rightEdgeSeparatorImage;
-(UIImage *)cellBackgroundImage;
-(UIImage *)highlightedCellBackgroundImage;
-(UIImage *)transliterationCandidateBackgroundImage;
-(double)arrowButtonHeight;
-(unsigned long long)gridMaskedCorners;
-(double)foregroundOpacity;
-(double)backgroundOpacity;
-(BOOL)doNotClipToBounds;
-(unsigned long long)columnsCount;
-(double)minimumCellWidth;
-(UIEdgeInsets)arrowButtonPadding;
-(UIEdgeInsets)gridLinePadding;
-(CGPoint)gridLineOffset;
-(long long)cellTextAlignment;
-(BOOL)darkBackdrop;
-(BOOL)scrollDisabled;
-(BOOL)showsIndex;
-(BOOL)fillGridWithLines;
-(BOOL)dontSelectLastItemByBackwardMoving;
-(BOOL)showOneMoreCandidate;
-(BOOL)disableSwitchingSortingMethodByTabKey;
-(BOOL)skipInlineCandidate;
-(BOOL)hidesPartialCandidates;
-(long long)minimumNumberOfCandidates;

@end

