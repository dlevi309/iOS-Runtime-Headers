/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/

#import <NanoMediaBridgeUI/NanoMediaBridgeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UIImageView, CAShapeLayer;

@interface NMBUIDownloadProgressView : UIView {

	UIButton* _errorIconButton;
	UIImageView* _downloadableIconView;
	CAShapeLayer* _waitingRingLayer;
	CAShapeLayer* _downloadingRingTrackLayer;
	CAShapeLayer* _downloadingRingProgressLayer;
	float _progress;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) float progress;                        //@synthesize progress=_progress - In the implementation block
-(float)progress;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setProgress:(float)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)_contentFrame;
-(void)_updateDownloadingRingProgressLayerStrokeEnd;
-(id)_ringPath;
@end

