/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class AVPlayerLayer, AVPlayer, AVPlayerItem, UILabel, NSString;

@interface PKPhysicalCardActivationAnimationView : UIView {

	AVPlayerLayer* _playerLayer;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	BOOL _playerStarted;
	UILabel* _nameOnCardLabel;
	BOOL _invalidated;
	NSString* _nameOnCard;

}

@property (nonatomic,copy) NSString * nameOnCard;              //@synthesize nameOnCard=_nameOnCard - In the implementation block
-(void)dealloc;
-(void)_invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)startAnimation;
-(NSString *)nameOnCard;
-(void)setNameOnCard:(NSString *)arg1 ;
-(void)_removePlayerItem;
-(void)_didFinishPlaying;
@end

