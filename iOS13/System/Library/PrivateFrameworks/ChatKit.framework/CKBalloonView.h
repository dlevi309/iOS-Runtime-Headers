/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonImageView.h>
#import <libobjc.A.dylib/CKInvisibleInkEffectHostView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKBalloonViewDelegate;
@class UIImage, UITapGestureRecognizer, UILongPressGestureRecognizer, NSMutableArray, CABackdropLayer, CKInvisibleInkEffectController, CKManualUpdater, UIImageView, UIColor, NSString;

@interface CKBalloonView : CKBalloonImageView <CKInvisibleInkEffectHostView, UIGestureRecognizerDelegate> {

	char _orientation;
	BOOL _hasTail;
	BOOL _filled;
	BOOL _showingMenu;
	BOOL _canUseOpaqueMask;
	BOOL _hasOverlay;
	BOOL _wantsSkinnyMask;
	BOOL _useLargeAsset;
	char _balloonShape;
	char _balloonTailShape;
	BOOL _invisibleInkEffectPaused;
	BOOL _animationPaused;
	id<CKBalloonViewDelegate> _delegate;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	long long _userInterfaceStyle;
	long long _userInterfaceLevel;
	NSMutableArray* _filters;
	unsigned long long _balloonCorners;
	CABackdropLayer* _backdropFilterLayer;
	CKInvisibleInkEffectController* _invisibleInkEffectController;
	CKManualUpdater* _displayUpdater;
	UIImageView* _overlay;
	UIEdgeInsets _textAlignmentInsets;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * doubleTapGestureRecognizer;                        //@synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;                  //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) CKManualUpdater * displayUpdater;                                           //@synthesize displayUpdater=_displayUpdater - In the implementation block
@property (nonatomic,retain) UIImageView * overlay;                                                      //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,retain) CKInvisibleInkEffectController * invisibleInkEffectController;              //@synthesize invisibleInkEffectController=_invisibleInkEffectController - In the implementation block
@property (assign,nonatomic,__weak) id<CKBalloonViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char orientation;                                                           //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL hasTail;                                                               //@synthesize hasTail=_hasTail - In the implementation block
@property (assign,getter=isFilled,nonatomic) BOOL filled;                                                //@synthesize filled=_filled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textAlignmentInsets;                                           //@synthesize textAlignmentInsets=_textAlignmentInsets - In the implementation block
@property (getter=isShowingMenu,nonatomic,readonly) BOOL showingMenu;                                    //@synthesize showingMenu=_showingMenu - In the implementation block
@property (assign,nonatomic) BOOL canUseOpaqueMask;                                                      //@synthesize canUseOpaqueMask=_canUseOpaqueMask - In the implementation block
@property (assign,nonatomic) BOOL hasOverlay;                                                            //@synthesize hasOverlay=_hasOverlay - In the implementation block
@property (nonatomic,readonly) UIColor * overlayColor; 
@property (assign,nonatomic) BOOL wantsSkinnyMask;                                                       //@synthesize wantsSkinnyMask=_wantsSkinnyMask - In the implementation block
@property (assign,nonatomic) BOOL useLargeAsset;                                                         //@synthesize useLargeAsset=_useLargeAsset - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;                                               //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (assign,nonatomic) long long userInterfaceLevel;                                               //@synthesize userInterfaceLevel=_userInterfaceLevel - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;                                                   //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) CKBalloonDescriptor_t balloonDescriptor; 
@property (assign,nonatomic) char balloonShape;                                                          //@synthesize balloonShape=_balloonShape - In the implementation block
@property (assign,nonatomic) char balloonTailShape;                                                      //@synthesize balloonTailShape=_balloonTailShape - In the implementation block
@property (assign,nonatomic) unsigned long long balloonCorners;                                          //@synthesize balloonCorners=_balloonCorners - In the implementation block
@property (nonatomic,readonly) BOOL needsGroupOpacity; 
@property (nonatomic,retain) CABackdropLayer * backdropFilterLayer;                                      //@synthesize backdropFilterLayer=_backdropFilterLayer - In the implementation block
@property (assign,nonatomic) BOOL invisibleInkEffectEnabled; 
@property (assign,nonatomic) BOOL invisibleInkEffectPaused;                                              //@synthesize invisibleInkEffectPaused=_invisibleInkEffectPaused - In the implementation block
@property (assign,nonatomic) BOOL animationPaused;                                                       //@synthesize animationPaused=_animationPaused - In the implementation block
@property (nonatomic,readonly) Class invisibleInkEffectViewClass; 
@property (nonatomic,readonly) UIImage * imageForInvisibleInkEffectView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id<CKBalloonViewDelegate>)delegate;
-(void)setDelegate:(id<CKBalloonViewDelegate>)arg1 ;
-(char)orientation;
-(void)prepareForReuse;
-(UIImageView *)overlay;
-(void)setOrientation:(char)arg1 ;
-(NSMutableArray *)filters;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)userInterfaceStyle;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)prepareForDisplay;
-(long long)userInterfaceLevel;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(UITapGestureRecognizer *)doubleTapGestureRecognizer;
-(void)setDoubleTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(CKInvisibleInkEffectController *)invisibleInkEffectController;
-(void)setHasOverlay:(BOOL)arg1 autoDismiss:(BOOL)arg2 ;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(void)cullSubviewsWithVisibleBounds:(CGRect)arg1 ;
-(BOOL)canUseOpaqueMask;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(void)prepareForDisplayIfNeeded;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(unsigned long long)balloonCorners;
-(void)doubleTapGestureRecognized:(id)arg1 ;
-(void)longPressGestureRecognized:(id)arg1 ;
-(void)setDisplayUpdater:(CKManualUpdater *)arg1 ;
-(void)setBalloonTailShape:(char)arg1 ;
-(void)setHasTail:(BOOL)arg1 ;
-(void)setFilled:(BOOL)arg1 ;
-(void)setBalloonCorners:(unsigned long long)arg1 ;
-(void)setNeedsPrepareForDisplay;
-(void)setTextAlignmentInsets:(UIEdgeInsets)arg1 ;
-(CKManualUpdater *)displayUpdater;
-(void)setUserInterfaceLevel:(long long)arg1 ;
-(void)setHasOverlay:(BOOL)arg1 ;
-(void)setInvisibleInkEffectEnabled:(BOOL)arg1 ;
-(void)setInvisibleInkEffectPaused:(BOOL)arg1 ;
-(void)setOverlay:(UIImageView *)arg1 ;
-(UIColor *)overlayColor;
-(void)_dismissOverlay;
-(BOOL)invisibleInkEffectPaused;
-(void)setInvisibleInkEffectController:(CKInvisibleInkEffectController *)arg1 ;
-(void)updateRasterizationForInvisibleInkEffect;
-(BOOL)wantsSkinnyMask;
-(void)setBalloonShape:(char)arg1 ;
-(void)setWantsSkinnyMask:(BOOL)arg1 ;
-(void)setUseLargeAsset:(BOOL)arg1 ;
-(char)balloonShape;
-(char)balloonTailShape;
-(BOOL)isFilled;
-(BOOL)hasTail;
-(BOOL)useLargeAsset;
-(BOOL)invisibleInkEffectEnabled;
-(void)invisibleInkEffectViewWasSuspended;
-(void)invisibleInkEffectViewWasResumed;
-(UIImage *)imageForInvisibleInkEffectView;
-(void)updateBalloonForTraitCollection:(id)arg1 ;
-(void)setHasOverlay:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)needsGroupOpacity;
-(void)setBackdropFilterLayer:(CABackdropLayer *)arg1 ;
-(void)prepareForAcknowledgementDisplay;
-(void)prepareForAcknowledgementDismissal;
-(void)setBalloonDescriptor:(CKBalloonDescriptor_t)arg1 ;
-(UIEdgeInsets)textAlignmentInsets;
-(BOOL)isShowingMenu;
-(BOOL)hasOverlay;
-(CABackdropLayer *)backdropFilterLayer;
-(BOOL)animationPaused;
-(void)setAnimationPaused:(BOOL)arg1 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)configureForComposition:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(void)configureForChatItem:(id)arg1 ;
@end

