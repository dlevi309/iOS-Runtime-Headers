/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
*/

#import <AMPCoreUI/AMPCoreUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol AMPUserNotificationContentDelegate;
@class AMSUserNotification, NSString, UIImageView, AMSMetrics, UILabel, AVPlayerViewController;

@interface AMPUserNotificationContentViewController : UIViewController {

	BOOL _hasAppeared;
	BOOL _hasPlayedVideo;
	AMSUserNotification* _userNotification;
	id<AMPUserNotificationContentDelegate> _delegate;
	NSString* _audioSessionCategory;
	unsigned long long _audioSessionCategoryOptions;
	UIImageView* _imageView;
	AMSMetrics* _metrics;
	UILabel* _textLabel;
	UILabel* _titleLabel;
	AVPlayerViewController* _videoPlayerController;

}

@property (nonatomic,retain) NSString * audioSessionCategory;                                     //@synthesize audioSessionCategory=_audioSessionCategory - In the implementation block
@property (assign,nonatomic) unsigned long long audioSessionCategoryOptions;                      //@synthesize audioSessionCategoryOptions=_audioSessionCategoryOptions - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                                    //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (assign,nonatomic) BOOL hasPlayedVideo;                                                 //@synthesize hasPlayedVideo=_hasPlayedVideo - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) AMSMetrics * metrics;                                                //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                               //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) AVPlayerViewController * videoPlayerController;                    //@synthesize videoPlayerController=_videoPlayerController - In the implementation block
@property (nonatomic,readonly) AMSUserNotification * userNotification;                            //@synthesize userNotification=_userNotification - In the implementation block
@property (assign,nonatomic,__weak) id<AMPUserNotificationContentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize expectedContentSize; 
-(id<AMPUserNotificationContentDelegate>)delegate;
-(void)setDelegate:(id<AMPUserNotificationContentDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AMSMetrics *)metrics;
-(void)setMetrics:(AMSMetrics *)arg1 ;
-(void)loadView;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(UILabel *)textLabel;
-(void)setAudioSessionCategory:(NSString *)arg1 ;
-(void)setAudioSessionCategoryOptions:(unsigned long long)arg1 ;
-(AMSUserNotification *)userNotification;
-(BOOL)hasAppeared;
-(void)setHasAppeared:(BOOL)arg1 ;
-(unsigned long long)audioSessionCategoryOptions;
-(NSString *)audioSessionCategory;
-(void)mediaPause;
-(CGSize)expectedContentSize;
-(AVPlayerViewController *)videoPlayerController;
-(void)imageViewTapped:(id)arg1 ;
-(BOOL)hasPlayedVideo;
-(void)setHasPlayedVideo:(BOOL)arg1 ;
-(id)initWithNotification:(id)arg1 delegate:(id)arg2 ;
@end

