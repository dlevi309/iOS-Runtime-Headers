/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

@class AVPlayer, NSString;


@protocol JTAVPlayerViewer <NSObject>
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGSize displaySize; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (assign,nonatomic,__weak) id<JTAVPlayerViewerDelegate> playerViewDelegate; 
@required
-(AVPlayer *)player;
-(void)setPlayer:(id)arg1;
-(NSString *)videoGravity;
-(void)setVideoGravity:(id)arg1;
-(BOOL)isReadyForDisplay;
-(CGRect)videoBounds;
-(CGSize)displaySize;
-(id<JTAVPlayerViewerDelegate>)playerViewDelegate;
-(void)setPlayerViewDelegate:(id)arg1;

@end

