/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol AMSUIUserNotificationContentDelegate;
@class AMSUserNotification, NSString, UIImageView, UILabel, AVPlayerViewController;

@interface AMSUIUserNotificationContentViewController : UIViewController {

	id<AMSUIUserNotificationContentDelegate> _delegate;
	AMSUserNotification* _userNotification;
	NSString* _audioSessionCategory;
	unsigned long long _audioSessionCategoryOptions;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _titleLabel;
	AVPlayerViewController* _videoPlayerController;

}

@property (nonatomic,retain) NSString * audioSessionCategory;                                       //@synthesize audioSessionCategory=_audioSessionCategory - In the implementation block
@property (assign,nonatomic) unsigned long long audioSessionCategoryOptions;                        //@synthesize audioSessionCategoryOptions=_audioSessionCategoryOptions - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                             //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                                 //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) AVPlayerViewController * videoPlayerController;                      //@synthesize videoPlayerController=_videoPlayerController - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIUserNotificationContentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize expectedContentSize; 
@property (nonatomic,readonly) AMSUserNotification * userNotification;                              //@synthesize userNotification=_userNotification - In the implementation block
-(UILabel *)titleLabel;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewWillLayoutSubviews;
-(NSString *)audioSessionCategory;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIImageView *)imageView;
-(id<AMSUIUserNotificationContentDelegate>)delegate;
-(void)setAudioSessionCategory:(NSString *)arg1 ;
-(void)setDelegate:(id<AMSUIUserNotificationContentDelegate>)arg1 ;
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
@end

