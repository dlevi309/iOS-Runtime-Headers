/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonView.h>
#import <libobjc.A.dylib/CKAnimationTimerObserver.h>

@class CKAnimatedImage, CKBalloonImageView, UIImageView, NSArray, NSString;

@interface CKImageBalloonView : CKBalloonView <CKAnimationTimerObserver> {

	BOOL _suppressMask;
	BOOL _isIrisAsset;
	CKAnimatedImage* _animatedImage;
	CKBalloonImageView* _tailMask;
	CKBalloonImageView* _outlineMask;
	UIImageView* _irisBadgeView;
	NSArray* _frames;
	unsigned long long _animationFrameOffset;

}

@property (nonatomic,copy) NSArray * frames;                                       //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) UIImageView * irisBadgeView;                          //@synthesize irisBadgeView=_irisBadgeView - In the implementation block
@property (assign,nonatomic) unsigned long long animationFrameOffset;              //@synthesize animationFrameOffset=_animationFrameOffset - In the implementation block
@property (nonatomic,retain) CKAnimatedImage * animatedImage;                      //@synthesize animatedImage=_animatedImage - In the implementation block
@property (nonatomic,retain) CKBalloonImageView * tailMask;                        //@synthesize tailMask=_tailMask - In the implementation block
@property (nonatomic,retain) CKBalloonImageView * outlineMask;                     //@synthesize outlineMask=_outlineMask - In the implementation block
@property (assign,nonatomic) BOOL suppressMask;                                    //@synthesize suppressMask=_suppressMask - In the implementation block
@property (assign,nonatomic) BOOL isIrisAsset;                                     //@synthesize isIrisAsset=_isIrisAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)prepareForDisplay;
-(NSArray *)frames;
-(void)setFrames:(NSArray *)arg1 ;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(CKAnimatedImage *)animatedImage;
-(void)setAnimatedImage:(CKAnimatedImage *)arg1 ;
-(void)setSuppressMask:(BOOL)arg1 ;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(BOOL)isIrisAsset;
-(void)setIsIrisAsset:(BOOL)arg1 ;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)updateAnimationTimerObserving;
-(void)setHasTail:(BOOL)arg1 ;
-(id)overlayColor;
-(void)invisibleInkEffectViewWasSuspended;
-(void)invisibleInkEffectViewWasResumed;
-(id)imageForInvisibleInkEffectView;
-(BOOL)needsGroupOpacity;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(UIImageView *)irisBadgeView;
-(void)setIrisBadgeView:(UIImageView *)arg1 ;
-(void)animationTimerFired:(unsigned long long)arg1 ;
-(void)configureForComposition:(id)arg1 ;
-(void)setTailMask:(CKBalloonImageView *)arg1 ;
-(void)setOutlineMask:(CKBalloonImageView *)arg1 ;
-(CKBalloonImageView *)tailMask;
-(CKBalloonImageView *)outlineMask;
-(BOOL)suppressMask;
-(void)setAnimationFrameOffset:(unsigned long long)arg1 ;
-(unsigned long long)animationFrameOffset;
-(void)configureForTranscriptPlugin:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
@end

