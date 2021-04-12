/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TUIPredictionViewDelegate;
@class TIAutocorrectionList, UIKBVisualEffectView, NSLocale, UIKBRenderConfig, TUIPredictionViewStackView, UILongPressGestureRecognizer, NSArray, NSString;

@interface TUIPredictionView : UIView <UIGestureRecognizerDelegate> {

	BOOL _drawsBackdropView;
	id<TUIPredictionViewDelegate> _delegate;
	long long _selectedIndex;
	TIAutocorrectionList* _autocorrectionList;
	UIKBVisualEffectView* _backdropView;
	unsigned long long _minimumNumberOfCells;
	unsigned long long _maximumEmojiCells;
	NSLocale* _currentLocale;
	UIKBRenderConfig* _renderConfig;
	TUIPredictionViewStackView* _cellStackView;
	UILongPressGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) UIKBVisualEffectView * backdropView;                              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) TUIPredictionViewStackView * cellStackView;                       //@synthesize cellStackView=_cellStackView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) id<TUIPredictionViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedIndex;                                          //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) TIAutocorrectionList * autocorrectionList;                        //@synthesize autocorrectionList=_autocorrectionList - In the implementation block
@property (nonatomic,readonly) NSArray * displayedCandidates; 
@property (assign,nonatomic) BOOL drawsBackdropView;                                           //@synthesize drawsBackdropView=_drawsBackdropView - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfCells;                          //@synthesize minimumNumberOfCells=_minimumNumberOfCells - In the implementation block
@property (assign,nonatomic) unsigned long long maximumEmojiCells;                             //@synthesize maximumEmojiCells=_maximumEmojiCells - In the implementation block
@property (nonatomic,retain) NSLocale * currentLocale;                                         //@synthesize currentLocale=_currentLocale - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                                  //@synthesize renderConfig=_renderConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIKBVisualEffectView *)backdropView;
-(NSLocale *)currentLocale;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setBackdropView:(UIKBVisualEffectView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)allVisibleCells;
-(id)visibleCells;
-(void)setMinimumNumberOfCells:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCellStackView:(TUIPredictionViewStackView *)arg1 ;
-(id<TUIPredictionViewDelegate>)delegate;
-(void)setMaximumEmojiCells:(unsigned long long)arg1 ;
-(void)_reloadCellsAnimated:(BOOL)arg1 ;
-(void)setTapGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(unsigned long long)minimumNumberOfCells;
-(void)setAutocorrectionList:(TIAutocorrectionList *)arg1 ;
-(void)setAutocorrectionList:(id)arg1 animated:(BOOL)arg2 ;
-(UIKBRenderConfig *)renderConfig;
-(void)setDrawsBackdropView:(BOOL)arg1 ;
-(unsigned long long)_predictionCellIndexAtLocation:(CGPoint)arg1 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)setDelegate:(id<TUIPredictionViewDelegate>)arg1 ;
-(unsigned long long)maximumEmojiCells;
-(void)layoutSubviews;
-(BOOL)_shouldPadWithEmptyCellsForAutocorrectionList:(id)arg1 ;
-(void)_updateHighlightedCellForTouch:(id)arg1 ;
-(void)_didRecognizeTapGesture:(id)arg1 ;
-(long long)selectedIndex;
-(UILongPressGestureRecognizer *)tapGestureRecognizer;
-(void)_updateVisibleCellAppearance;
-(void)cancelTapGestureRecognizer;
-(BOOL)_ensureVisibleCellCount:(unsigned long long)arg1 forCellStackView:(id)arg2 ;
-(TUIPredictionViewStackView *)cellStackView;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(id)_candidatesToDisplayForAutocorrectionList:(id)arg1 ;
-(double)maximumBackgroundWidth;
-(TIAutocorrectionList *)autocorrectionList;
-(void)setCurrentLocale:(NSLocale *)arg1 ;
-(void)configurePredictionCell:(id)arg1 forCandidate:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(long long)layoutDirection;
-(NSArray *)displayedCandidates;
-(BOOL)drawsBackdropView;
@end

