/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)progress;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(CGRect)_contentFrame;
-(unsigned long long)state;
-(void)_updateDownloadingRingProgressLayerStrokeEnd;
-(id)_ringPath;
@end

