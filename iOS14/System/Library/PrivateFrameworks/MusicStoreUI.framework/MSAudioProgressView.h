/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(SUPlayerStatus *)playerStatus;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setPlayerStatus:(SUPlayerStatus *)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_newProgressView;
-(void)_cancelBufferingTimer;
-(void)_showBufferingImageView;
-(id)_newBufferingImageView;
@end

