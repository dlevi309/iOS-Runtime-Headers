/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startAnimation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_didFinishPlaying;
-(void)_removePlayerItem;
-(void)setNameOnCard:(NSString *)arg1 ;
-(NSString *)nameOnCard;
-(void)dealloc;
@end

