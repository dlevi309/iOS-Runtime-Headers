/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <UIKitCore/UIView.h>

@protocol NSObject;
@class NSArray, UIImage, UIImageView, AVQueuePlayer, AVPlayerLooper;

@interface HRVideoPlayerView : UIView {

	BOOL _looping;
	BOOL _shouldBePlaying;
	NSArray* _items;
	UIImage* _thumbnail;
	UIImageView* _thumbnailImageView;
	AVQueuePlayer* _queuePlayer;
	AVPlayerLooper* _playerLooper;
	id<NSObject> _applicationActiveNotificationStub;
	id<NSObject> _applicationInactiveNotificationStub;

}

@property (nonatomic,retain) UIImage * thumbnail;                                           //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnailImageView;                              //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (nonatomic,retain) AVQueuePlayer * queuePlayer;                                   //@synthesize queuePlayer=_queuePlayer - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * playerLooper;                                 //@synthesize playerLooper=_playerLooper - In the implementation block
@property (nonatomic,retain) NSArray * items;                                               //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL looping;                                                  //@synthesize looping=_looping - In the implementation block
@property (assign,nonatomic) BOOL shouldBePlaying;                                          //@synthesize shouldBePlaying=_shouldBePlaying - In the implementation block
@property (nonatomic,retain) id<NSObject> applicationActiveNotificationStub;                //@synthesize applicationActiveNotificationStub=_applicationActiveNotificationStub - In the implementation block
@property (nonatomic,retain) id<NSObject> applicationInactiveNotificationStub;              //@synthesize applicationInactiveNotificationStub=_applicationInactiveNotificationStub - In the implementation block
@property (assign,nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback; 
+(Class)layerClass;
+(id)playerViewWithURL:(id)arg1 looping:(BOOL)arg2 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(UIImage *)thumbnail;
-(void)pause;
-(void)play;
-(NSArray *)items;
-(UIImageView *)thumbnailImageView;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(void)setLooping:(BOOL)arg1 ;
-(void)setPlayerLooper:(AVPlayerLooper *)arg1 ;
-(AVPlayerLooper *)playerLooper;
-(BOOL)looping;
-(AVQueuePlayer *)queuePlayer;
-(void)setQueuePlayer:(AVQueuePlayer *)arg1 ;
-(BOOL)preventsDisplaySleepDuringVideoPlayback;
-(void)setPreventsDisplaySleepDuringVideoPlayback:(BOOL)arg1 ;
-(void)_setUpUI;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)dealloc;
-(void)_setUpNotifications;
-(id)initWithItems:(id)arg1 thumbnail:(id)arg2 looping:(BOOL)arg3 ;
-(id<NSObject>)applicationActiveNotificationStub;
-(id<NSObject>)applicationInactiveNotificationStub;
-(void)setShouldBePlaying:(BOOL)arg1 ;
-(BOOL)shouldBePlaying;
-(void)setApplicationActiveNotificationStub:(id<NSObject>)arg1 ;
-(void)setApplicationInactiveNotificationStub:(id<NSObject>)arg1 ;
@end

