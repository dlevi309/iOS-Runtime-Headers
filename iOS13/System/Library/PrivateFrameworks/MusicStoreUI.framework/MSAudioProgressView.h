/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_source;
@class UIImageView, NSObject, SUPlayerStatus, MSPieImageView;

@interface MSAudioProgressView : UIView {

	UIImageView* _bufferingImageView;
	NSObject*<OS_dispatch_source> _bufferingTimer;
	BOOL _highlighted;
	SUPlayerStatus* _playerStatus;
	MSPieImageView* _progressView;
	UIImageView* _stopImageView;

}

@property (nonatomic,copy) SUPlayerStatus * playerStatus;                        //@synthesize playerStatus=_playerStatus - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(SUPlayerStatus *)playerStatus;
-(void)setPlayerStatus:(SUPlayerStatus *)arg1 ;
-(id)_newProgressView;
-(void)_cancelBufferingTimer;
-(void)_showBufferingImageView;
-(id)_newBufferingImageView;
@end

