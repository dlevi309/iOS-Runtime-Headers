/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

#import <CoreSuggestionsUI/CoreSuggestionsUI-Structs.h>
#import <UIKitCore/UITextView.h>

@protocol SGTappableTextViewDelegate;
@class UIColor, NSAttributedString, NSMutableIndexSet;

@interface SGTappableTextView : UITextView {

	UIColor* _activeRangeNormalColor;
	UIColor* _activeRangeHighlightedColor;
	NSAttributedString* _clientText;
	NSMutableIndexSet* _activeRanges;
	NSRange _trackingRange;
	BOOL _trackingRangeHighlighted;
	BOOL _needsLabelUpdate;
	long long _currentStyle;
	id<SGTappableTextViewDelegate> _tappableDelegate;

}

@property (assign,nonatomic,__weak) id<SGTappableTextViewDelegate> tappableDelegate;              //@synthesize tappableDelegate=_tappableDelegate - In the implementation block
@property (nonatomic,retain) UIColor * activeRangeNormalColor; 
@property (nonatomic,retain) UIColor * activeRangeHighlightedColor; 
@property (nonatomic,readonly) BOOL hasActiveRanges; 
@property (nonatomic,readonly) CGRect activeRangesRect; 
-(id)initWithCoder:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)setAttributedText:(id)arg1 ;
-(id)_textColor;
-(BOOL)isTracking;
-(void)_updateCurrentAppearance;
-(BOOL)hasActiveRanges;
-(CGRect)activeRangesRect;
-(void)addActiveRange:(NSRange)arg1 ;
-(void)removeActiveRange:(NSRange)arg1 ;
-(void)removeAllActiveRanges;
-(void)setTrackingRange:(NSRange)arg1 ;
-(NSRange)trackingRange;
-(void)_highlightTrackingRange:(BOOL)arg1 ;
-(void)_updateAttributedTextColor;
-(void)setActiveRangeNormalColor:(UIColor *)arg1 ;
-(UIColor *)activeRangeNormalColor;
-(void)setActiveRangeHighlightedColor:(UIColor *)arg1 ;
-(UIColor *)activeRangeHighlightedColor;
-(void)_setNeedUpdateLabel;
-(void)_updateLabelIfNeeded;
-(unsigned long long)_characterIndexAtPoint:(CGPoint)arg1 ;
-(NSRange)_rangeAtPoint:(CGPoint)arg1 ;
-(id<SGTappableTextViewDelegate>)tappableDelegate;
-(void)setTappableDelegate:(id<SGTappableTextViewDelegate>)arg1 ;
@end

