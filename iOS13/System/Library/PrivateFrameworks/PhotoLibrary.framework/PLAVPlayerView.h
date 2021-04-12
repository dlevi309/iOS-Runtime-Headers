/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class AVPlayerLayer, AVPlayer;

@interface PLAVPlayerView : UIView {

	long long _scaleMode;

}

@property (nonatomic,retain,readonly) AVPlayerLayer * layer; 
@property (nonatomic,retain) AVPlayer * player; 
@property (assign,nonatomic) long long scaleMode;                         //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,readonly) CGRect videoRect; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(CGRect)videoRect;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(void)setScaleMode:(long long)arg1 duration:(double)arg2 ;
@end

