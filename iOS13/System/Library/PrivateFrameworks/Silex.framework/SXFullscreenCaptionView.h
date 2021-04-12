/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SXAutoSizedCanvasControllerDelegate.h>
#import <libobjc.A.dylib/SXStandaloneTextLayoutDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SXFullscreenCaptionViewDelegate, SXComponentActionHandler, SXTextSourceFactory;
@class SXFullscreenCaption, UITapGestureRecognizer, SXAutoSizedCanvasController, SXTextTangierDocumentRoot, SXStandaloneTextInfo, SXStandaloneTextLayout, UIVisualEffectView, UIScrollView, UISwipeGestureRecognizer, SXTextSource, SXTextTangierStorage, NSString;

@interface SXFullscreenCaptionView : UIView <SXAutoSizedCanvasControllerDelegate, SXStandaloneTextLayoutDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	int _expansionMode;
	id<SXFullscreenCaptionViewDelegate> _delegate;
	SXFullscreenCaption* _caption;
	unsigned long long _viewIndex;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<SXComponentActionHandler> _actionHandler;
	id<SXTextSourceFactory> _textSourceFactory;
	SXAutoSizedCanvasController* _autoSizeCanvasController;
	SXTextTangierDocumentRoot* _documentRoot;
	SXStandaloneTextInfo* _captionInfo;
	SXStandaloneTextLayout* _captionLayout;
	UIVisualEffectView* _backgroundView;
	UIScrollView* _scrollView;
	UISwipeGestureRecognizer* _swipeGestureRecognizer;
	SXTextSource* _textSource;
	SXTextTangierStorage* _textStorage;
	CGSize _fullSize;
	CGRect _temporaryLayoutRect;
	UIEdgeInsets _fullInsets;

}

@property (nonatomic,readonly) id<SXComponentActionHandler> actionHandler;                        //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,readonly) id<SXTextSourceFactory> textSourceFactory;                         //@synthesize textSourceFactory=_textSourceFactory - In the implementation block
@property (nonatomic,retain) SXAutoSizedCanvasController * autoSizeCanvasController;              //@synthesize autoSizeCanvasController=_autoSizeCanvasController - In the implementation block
@property (nonatomic,retain) SXTextTangierDocumentRoot * documentRoot;                            //@synthesize documentRoot=_documentRoot - In the implementation block
@property (nonatomic,retain) SXStandaloneTextInfo * captionInfo;                                  //@synthesize captionInfo=_captionInfo - In the implementation block
@property (nonatomic,retain) SXStandaloneTextLayout * captionLayout;                              //@synthesize captionLayout=_captionLayout - In the implementation block
@property (assign,nonatomic) CGRect temporaryLayoutRect;                                          //@synthesize temporaryLayoutRect=_temporaryLayoutRect - In the implementation block
@property (assign,nonatomic) CGSize fullSize;                                                     //@synthesize fullSize=_fullSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets fullInsets;                                             //@synthesize fullInsets=_fullInsets - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                           //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                       //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeGestureRecognizer;                   //@synthesize swipeGestureRecognizer=_swipeGestureRecognizer - In the implementation block
@property (nonatomic,retain) SXTextSource * textSource;                                           //@synthesize textSource=_textSource - In the implementation block
@property (nonatomic,retain) SXTextTangierStorage * textStorage;                                  //@synthesize textStorage=_textStorage - In the implementation block
@property (assign,nonatomic,__weak) id<SXFullscreenCaptionViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SXFullscreenCaption * caption;                                     //@synthesize caption=_caption - In the implementation block
@property (nonatomic,readonly) unsigned long long viewIndex;                                      //@synthesize viewIndex=_viewIndex - In the implementation block
@property (nonatomic,readonly) int expansionMode;                                                 //@synthesize expansionMode=_expansionMode - In the implementation block
@property (nonatomic,readonly) BOOL expanded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_applyStyle:(id)arg1 toStorage:(id)arg2 ;
+(id)_overridePropertiesWithComponentStyle:(id)arg1 storage:(id)arg2 ;
-(void)dealloc;
-(id<SXFullscreenCaptionViewDelegate>)delegate;
-(void)setDelegate:(id<SXFullscreenCaptionViewDelegate>)arg1 ;
-(SXTextTangierStorage *)textStorage;
-(void)setTextStorage:(SXTextTangierStorage *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(id<SXComponentActionHandler>)actionHandler;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(BOOL)expanded;
-(SXFullscreenCaption *)caption;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setSwipeGestureRecognizer:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)swipeGestureRecognizer;
-(void)setupGestureRecognizers;
-(SXTextTangierDocumentRoot *)documentRoot;
-(CGPoint)positionForTextLayout:(id)arg1 ;
-(double)marginForTextLayout:(id)arg1 ;
-(double)widthForTextLayout:(id)arg1 ;
-(void)createBackgroundView;
-(void)createScrollView;
-(void)initializeTangier;
-(int)expansionMode;
-(void)renderCaptionInTangier;
-(void)updateFrameAnimated:(BOOL)arg1 ;
-(SXAutoSizedCanvasController *)autoSizeCanvasController;
-(void)setExpansionMode:(int)arg1 animated:(BOOL)arg2 ;
-(CGRect)frameWithSuperview:(id)arg1 size:(CGSize)arg2 forExpansionMode:(int)arg3 ;
-(UIEdgeInsets)fullInsets;
-(CGSize)fullSize;
-(void)setTemporaryLayoutRect:(CGRect)arg1 ;
-(CGRect)determineFrameInSuperview:(id)arg1 ;
-(SXStandaloneTextLayout *)captionLayout;
-(SXTextSource *)textSource;
-(id<SXTextSourceFactory>)textSourceFactory;
-(void)setTextSource:(SXTextSource *)arg1 ;
-(void)setCaptionInfo:(SXStandaloneTextInfo *)arg1 ;
-(SXStandaloneTextInfo *)captionInfo;
-(void)setCaptionLayout:(SXStandaloneTextLayout *)arg1 ;
-(CGRect)temporaryLayoutRect;
-(void)handleSwipeGestureRecognizer:(id)arg1 ;
-(void)handleTapGestureRecognizer:(id)arg1 ;
-(BOOL)forceFullExpandsionMode;
-(id)initWithTextSourceFactory:(id)arg1 actionHandler:(id)arg2 ;
-(void)updateWithCaption:(id)arg1 forViewIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)viewIndex;
-(void)setAutoSizeCanvasController:(SXAutoSizedCanvasController *)arg1 ;
-(void)setDocumentRoot:(SXTextTangierDocumentRoot *)arg1 ;
-(void)setFullSize:(CGSize)arg1 ;
-(void)setFullInsets:(UIEdgeInsets)arg1 ;
@end

