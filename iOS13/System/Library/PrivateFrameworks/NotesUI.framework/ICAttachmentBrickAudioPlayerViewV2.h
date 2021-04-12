/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICAudioPlayPauseView.h>

@protocol ICAttachmentBrickAudioPlayerViewV2Delegate;
@class ICCircleLayer, ICArcLayer;

@interface ICAttachmentBrickAudioPlayerViewV2 : ICAudioPlayPauseView {

	id<ICAttachmentBrickAudioPlayerViewV2Delegate> _delegate;
	ICCircleLayer* _progressGrooveLayer;
	ICArcLayer* _progressCircleLayer;

}

@property (nonatomic,retain) ICCircleLayer * progressGrooveLayer;                                  //@synthesize progressGrooveLayer=_progressGrooveLayer - In the implementation block
@property (nonatomic,retain) ICArcLayer * progressCircleLayer;                                     //@synthesize progressCircleLayer=_progressCircleLayer - In the implementation block
@property (assign,nonatomic) id<ICAttachmentBrickAudioPlayerViewV2Delegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ICAttachmentBrickAudioPlayerViewV2Delegate>)delegate;
-(void)setDelegate:(id<ICAttachmentBrickAudioPlayerViewV2Delegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)tintColor;
-(void)didMoveToWindow;
-(void)updateTime:(double)arg1 duration:(double)arg2 ;
-(void)sharedInit;
-(void)createBackgroundLayer;
-(void)createPlayPauseViews;
-(void)showStopped;
-(id)addSubImageViewForImage:(id)arg1 ;
-(void)showPressed:(BOOL)arg1 ;
-(void)createProgressLayers;
-(id)backgroundNormalColor;
-(void)setProgressGrooveLayer:(ICCircleLayer *)arg1 ;
-(ICCircleLayer *)progressGrooveLayer;
-(void)setProgressCircleLayer:(ICArcLayer *)arg1 ;
-(ICArcLayer *)progressCircleLayer;
-(id)backgroundPressedColor;
-(void)showDisabled:(BOOL)arg1 ;
@end

