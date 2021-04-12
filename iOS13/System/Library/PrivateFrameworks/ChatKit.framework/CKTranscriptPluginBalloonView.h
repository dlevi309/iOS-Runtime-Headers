/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonView.h>
#import <libobjc.A.dylib/CKTranscriptPluginViewDelegate.h>

@protocol CKTranscriptPluginView;
@class UIViewController, UIView, IMBalloonPluginDataSource, CKInteractiveBalloonImageView, CKBalloonImageView, NSString;

@interface CKTranscriptPluginBalloonView : CKBalloonView <CKTranscriptPluginViewDelegate> {

	BOOL _isInteractive;
	BOOL _mayReparentPluginViews;
	BOOL _suppressMask;
	long long _userInterfaceStyle;
	long long _userInterfaceLevel;
	UIViewController* _pluginViewController;
	UIView*<CKTranscriptPluginView> _pluginView;
	IMBalloonPluginDataSource* _dataSource;
	UIView* _pluginSnapshotViewForThrowAnimation;
	CKInteractiveBalloonImageView* _tailMask;
	CKBalloonImageView* _outlineMask;
	UIView* _pluginSnapshotView;

}

@property (nonatomic,retain) CKInteractiveBalloonImageView * tailMask;                    //@synthesize tailMask=_tailMask - In the implementation block
@property (nonatomic,retain) CKBalloonImageView * outlineMask;                            //@synthesize outlineMask=_outlineMask - In the implementation block
@property (nonatomic,retain) UIView * pluginSnapshotView;                                 //@synthesize pluginSnapshotView=_pluginSnapshotView - In the implementation block
@property (assign,nonatomic) BOOL suppressMask;                                           //@synthesize suppressMask=_suppressMask - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * pluginViewController;              //@synthesize pluginViewController=_pluginViewController - In the implementation block
@property (nonatomic,retain) UIView*<CKTranscriptPluginView> pluginView;                  //@synthesize pluginView=_pluginView - In the implementation block
@property (nonatomic,retain) IMBalloonPluginDataSource * dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL isInteractive;                                          //@synthesize isInteractive=_isInteractive - In the implementation block
@property (nonatomic,retain) UIView * pluginSnapshotViewForThrowAnimation;                //@synthesize pluginSnapshotViewForThrowAnimation=_pluginSnapshotViewForThrowAnimation - In the implementation block
@property (nonatomic,readonly) CGRect maskFrame; 
@property (nonatomic,readonly) BOOL shouldMaskWhenOpaque; 
@property (assign,nonatomic) BOOL mayReparentPluginViews;                                 //@synthesize mayReparentPluginViews=_mayReparentPluginViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(IMBalloonPluginDataSource *)dataSource;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)userInterfaceStyle;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)isInteractive;
-(void)prepareForDisplay;
-(long long)userInterfaceLevel;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(UIView*<CKTranscriptPluginView>)pluginView;
-(void)setSuppressMask:(BOOL)arg1 ;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)setUserInterfaceLevel:(long long)arg1 ;
-(id)overlayColor;
-(id)imageForInvisibleInkEffectView;
-(void)setMayReparentPluginViews:(BOOL)arg1 ;
-(BOOL)mayReparentPluginViews;
-(void)configureForComposition:(id)arg1 ;
-(void)setPluginView:(UIView*<CKTranscriptPluginView>)arg1 ;
-(void)setTailMask:(CKInteractiveBalloonImageView *)arg1 ;
-(void)setOutlineMask:(CKBalloonImageView *)arg1 ;
-(CKInteractiveBalloonImageView *)tailMask;
-(CKBalloonImageView *)outlineMask;
-(BOOL)suppressMask;
-(void)configureForTranscriptPlugin:(id)arg1 ;
-(void)setPluginSnapshotViewForThrowAnimation:(UIView *)arg1 ;
-(void)setPluginSnapshotView:(UIView *)arg1 ;
-(CGRect)maskFrame;
-(BOOL)shouldMaskWhenOpaque;
-(void)updateBalloonMasks;
-(UIViewController *)pluginViewController;
-(void)setPluginViewController:(UIViewController *)arg1 ;
-(UIView *)pluginSnapshotViewForThrowAnimation;
-(void)_pluginViewReadyForSnapshot:(id)arg1 ;
-(void)pluginViewRequestsPresentationAction:(id)arg1 ;
-(void)setIsInteractive:(BOOL)arg1 ;
-(UIView *)pluginSnapshotView;
@end

