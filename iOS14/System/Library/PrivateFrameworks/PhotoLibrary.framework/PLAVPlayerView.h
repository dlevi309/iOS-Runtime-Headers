/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)scaleMode;
-(CGRect)videoRect;
-(void)setScaleMode:(long long)arg1 ;
-(void)setScaleMode:(long long)arg1 duration:(double)arg2 ;
@end

