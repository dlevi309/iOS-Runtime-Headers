/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(id<ICAttachmentBrickAudioPlayerViewV2Delegate>)delegate;
-(void)setBounds:(CGRect)arg1 ;
-(void)setDelegate:(id<ICAttachmentBrickAudioPlayerViewV2Delegate>)arg1 ;
-(void)didMoveToWindow;
-(id)tintColor;
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

