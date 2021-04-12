/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, NSString, UIImage;

@interface MPVideoBackgroundView : UIView {

	long long _interfaceOrientation;
	UIView* _imageView;
	UIImageView* _iconView;
	UIImageView* _backgroundPlaceholderImageView;
	UIView* _backgroundPlaceholderPosterImageView;
	UIView* _backgroundPlaceholderView;
	UIImageView* _customBackgroundImageView;
	NSString* _destinationName;
	long long _destinationPlaceholderStyle;
	BOOL _showDestinationPlaceholder;
	/*^block*/id _layoutSubviewsPostflightHandler;

}

@property (assign,nonatomic) long long interfaceOrientation;                             //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,retain) UIImage * backgroundPlaceholderImage; 
@property (nonatomic,readonly) UIView * backgroundPlaceholderView; 
@property (nonatomic,retain) UIView * backgroundPlaceholderPosterImageView;              //@synthesize backgroundPlaceholderPosterImageView=_backgroundPlaceholderPosterImageView - In the implementation block
@property (assign,nonatomic) long long destinationPlaceholderStyle;                      //@synthesize destinationPlaceholderStyle=_destinationPlaceholderStyle - In the implementation block
@property (nonatomic,copy) NSString * destinationName;                                   //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,copy) id layoutSubviewsPostflightHandler;                           //@synthesize layoutSubviewsPostflightHandler=_layoutSubviewsPostflightHandler - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)interfaceOrientation;
-(void)layoutSubviews;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
-(id)qtIcon;
-(void)setShowQTAudioOnlyUI:(BOOL)arg1 ;
-(void)_createInformationalTitleView:(id*)arg1 systemFont:(id)arg2 lineBreakMode:(long long)arg3 ;
-(void)setCustomBackgroundImage:(id)arg1 ;
-(void)setBackgroundPlaceholderImage:(UIImage *)arg1 ;
-(void)setBackgroundPlaceholderPosterImageView:(UIView *)arg1 ;
-(UIImage *)backgroundPlaceholderImage;
-(UIView *)backgroundPlaceholderView;
-(void)setDestinationPlaceholderStyle:(long long)arg1 ;
-(void)setShowDestinationPlaceholder:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_tvOutCapabilityDidChangeNotification:(id)arg1 ;
-(void)_updateDestinationBackgroundViewAnimated:(BOOL)arg1 ;
-(UIView *)backgroundPlaceholderPosterImageView;
-(long long)destinationPlaceholderStyle;
-(id)layoutSubviewsPostflightHandler;
-(void)setLayoutSubviewsPostflightHandler:(id)arg1 ;
@end

