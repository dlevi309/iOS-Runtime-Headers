/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMetrics:(AMSMetrics *)arg1 ;
-(UILabel *)titleLabel;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(AMSMetrics *)metrics;
-(void)viewWillLayoutSubviews;
-(NSString *)audioSessionCategory;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)hasAppeared;
-(UIImageView *)imageView;
-(id<AMPUserNotificationContentDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setAudioSessionCategory:(NSString *)arg1 ;
-(void)setHasAppeared:(BOOL)arg1 ;
-(void)setDelegate:(id<AMPUserNotificationContentDelegate>)arg1 ;
-(AMSUserNotification *)userNotification;
-(unsigned long long)audioSessionCategoryOptions;
-(void)loadView;
-(UILabel *)textLabel;
-(void)setAudioSessionCategoryOptions:(unsigned long long)arg1 ;
-(CGSize)expectedContentSize;
-(AVPlayerViewController *)videoPlayerController;
-(void)imageViewTapped:(id)arg1 ;
-(id)initWithNotification:(id)arg1 delegate:(id)arg2 ;
-(void)mediaPause;
-(BOOL)hasPlayedVideo;
-(void)setHasPlayedVideo:(BOOL)arg1 ;
@end

