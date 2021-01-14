/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_textColor;
-(void)_updateLabelIfNeeded;
-(void)tintColorDidChange;
-(void)setAttributedText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isTracking;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setText:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)text;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
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
-(unsigned long long)_characterIndexAtPoint:(CGPoint)arg1 ;
-(NSRange)_rangeAtPoint:(CGPoint)arg1 ;
-(id<SGTappableTextViewDelegate>)tappableDelegate;
-(void)setTappableDelegate:(id<SGTappableTextViewDelegate>)arg1 ;
@end

