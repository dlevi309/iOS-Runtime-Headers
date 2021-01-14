/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@class CKWaveformProgressView;

@interface CKAudioReplyPreviewBalloonView : CKColoredBalloonView {

	double _duration;
	long long _waveformContentMode;
	CKWaveformProgressView* _waveformProgressView;

}

@property (nonatomic,retain) CKWaveformProgressView * waveformProgressView;              //@synthesize waveformProgressView=_waveformProgressView - In the implementation block
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long waveformContentMode;                              //@synthesize waveformContentMode=_waveformContentMode - In the implementation block
-(void)prepareForDisplay;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)setWaveform:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)configureForComposition:(id)arg1 ;
-(void)setWaveformProgressView:(CKWaveformProgressView *)arg1 ;
-(CKWaveformProgressView *)waveformProgressView;
-(void)layoutSubviews;
-(void)configureForMessagePart:(id)arg1 ;
-(void)setWaveformContentMode:(long long)arg1 ;
-(long long)waveformContentMode;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(double)duration;
@end

