/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	char _balloonStyle;
	char _color;
	char _strokeColor;
	BOOL _showingMenu;
	BOOL _canUseOpaqueMask;
	BOOL _hasOverlay;
	BOOL _wantsSkinnyMask;
	BOOL _wantsMultilineMask;
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
@property (assign,nonatomic) char balloonStyle;                                                          //@synthesize balloonStyle=_balloonStyle - In the implementation block
@property (assign,nonatomic) char color;                                                                 //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) char strokeColor;                                                           //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textAlignmentInsets;                                           //@synthesize textAlignmentInsets=_textAlignmentInsets - In the implementation block
@property (getter=isShowingMenu,nonatomic,readonly) BOOL showingMenu;                                    //@synthesize showingMenu=_showingMenu - In the implementation block
@property (assign,nonatomic) BOOL canUseOpaqueMask;                                                      //@synthesize canUseOpaqueMask=_canUseOpaqueMask - In the implementation block
@property (assign,nonatomic) BOOL hasOverlay;                                                            //@synthesize hasOverlay=_hasOverlay - In the implementation block
@property (nonatomic,readonly) UIColor * overlayColor; 
@property (assign,nonatomic) BOOL wantsSkinnyMask;                                                       //@synthesize wantsSkinnyMask=_wantsSkinnyMask - In the implementation block
@property (assign,nonatomic) BOOL wantsMultilineMask;                                                    //@synthesize wantsMultilineMask=_wantsMultilineMask - In the implementation block
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
@property (getter=isSelected,nonatomic,readonly) BOOL selected; 
@property (nonatomic,readonly) Class invisibleInkEffectViewClass; 
@property (nonatomic,readonly) UIImage * imageForInvisibleInkEffectView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)strokeColor;
-(void)prepareForDisplay;
-(void)clearFilters;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(void)setBalloonTailShape:(char)arg1 ;
-(void)setBalloonStyle:(char)arg1 ;
-(void)setBalloonCorners:(unsigned long long)arg1 ;
-(void)setNeedsPrepareForDisplay;
-(void)setTextAlignmentInsets:(UIEdgeInsets)arg1 ;
-(CKManualUpdater *)displayUpdater;
-(void)setUserInterfaceLevel:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 withSelectionState:(id)arg2 ;
-(BOOL)hasOverlay;
-(long long)userInterfaceStyle;
-(void)setInvisibleInkEffectEnabled:(BOOL)arg1 ;
-(void)setInvisibleInkEffectPaused:(BOOL)arg1 ;
-(void)setHasOverlay:(BOOL)arg1 ;
-(void)addOverlaySubview:(id)arg1 ;
-(void)_dismissOverlay;
-(void)setWantsSkinnyMask:(BOOL)arg1 ;
-(BOOL)invisibleInkEffectPaused;
-(void)setInvisibleInkEffectController:(CKInvisibleInkEffectController *)arg1 ;
-(void)updateRasterizationForInvisibleInkEffect;
-(BOOL)wantsSkinnyMask;
-(void)setBalloonShape:(char)arg1 ;
-(void)setUseLargeAsset:(BOOL)arg1 ;
-(void)setWantsMultilineMask:(BOOL)arg1 ;
-(char)balloonShape;
-(char)balloonTailShape;
-(char)balloonStyle;
-(BOOL)wantsMultilineMask;
-(BOOL)useLargeAsset;
-(BOOL)invisibleInkEffectEnabled;
-(void)invisibleInkEffectViewWasSuspended;
-(UIImage *)imageForInvisibleInkEffectView;
-(void)invisibleInkEffectViewWasResumed;
-(void)updateBalloonForTraitCollection:(id)arg1 ;
-(void)setHasOverlay:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isShowingMenu;
-(BOOL)needsGroupOpacity;
-(void)setBackdropFilterLayer:(CABackdropLayer *)arg1 ;
-(void)prepareForAcknowledgementDisplay;
-(void)setBalloonDescriptor:(CKBalloonDescriptor_t)arg1 ;
-(void)prepareForAcknowledgementDismissal;
-(UIEdgeInsets)textAlignmentInsets;
-(CABackdropLayer *)backdropFilterLayer;
-(BOOL)animationPaused;
-(void)setAnimationPaused:(BOOL)arg1 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 hasInvisibleInkEffect:(BOOL)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CKBalloonViewDelegate>)delegate;
-(void)configureForComposition:(id)arg1 ;
-(char)color;
-(id)overlayImage;
-(NSMutableArray *)filters;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(BOOL)isSelected;
-(void)prepareForReuse;
-(BOOL)hasTail;
-(long long)userInterfaceLevel;
-(void)addFilter:(id)arg1 ;
-(void)setDelegate:(id<CKBalloonViewDelegate>)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)setColor:(char)arg1 ;
-(void)setOverlay:(UIImageView *)arg1 ;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(CKInvisibleInkEffectController *)invisibleInkEffectController;
-(void)setHasOverlay:(BOOL)arg1 autoDismiss:(BOOL)arg2 ;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(UIImageView *)overlay;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)cullSubviewsWithVisibleBounds:(CGRect)arg1 ;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(BOOL)canUseOpaqueMask;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(void)prepareForDisplayIfNeeded;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(char)orientation;
-(void)setStrokeColor:(char)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(UITapGestureRecognizer *)doubleTapGestureRecognizer;
-(void)configureForMessagePart:(id)arg1 ;
-(void)configureForChatItem:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(unsigned long long)balloonCorners;
-(UIColor *)overlayColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setOrientation:(char)arg1 ;
-(void)setHasTail:(BOOL)arg1 ;
-(void)doubleTapGestureRecognized:(id)arg1 ;
-(void)setDoubleTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)longPressGestureRecognized:(id)arg1 ;
-(void)setDisplayUpdater:(CKManualUpdater *)arg1 ;
@end

