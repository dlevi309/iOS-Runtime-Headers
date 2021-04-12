/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol STSResultDetailViewDelegate;
@class UIVisualEffectView, UIImageView, STSResultDetailFooter, UIView, UIImage, STSAnimatedImageInfo, NSString;

@interface STSResultDetailView : UIView {

	UIVisualEffectView* _backgroundView;
	UIImageView* _thumbnailView;
	STSResultDetailFooter* _footer;
	BOOL _isFullscreen;
	BOOL _useBackgroundBlur;
	id<STSResultDetailViewDelegate> _delegate;
	UIView* _customContentView;
	UIImage* _thumbnail;
	STSAnimatedImageInfo* _thumbnailInfo;
	CGSize _contentSize;

}

@property (assign,nonatomic,__weak) id<STSResultDetailViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                           //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) UIView * customContentView;                                   //@synthesize customContentView=_customContentView - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnail;                                        //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) STSAnimatedImageInfo * thumbnailInfo;                       //@synthesize thumbnailInfo=_thumbnailInfo - In the implementation block
@property (assign,nonatomic) CGSize providerIconSize; 
@property (nonatomic,retain) UIImage * providerIcon; 
@property (nonatomic,copy) NSString * providerName; 
@property (assign,nonatomic) BOOL isFullscreen;                                            //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (assign,nonatomic) BOOL useBackgroundBlur;                                       //@synthesize useBackgroundBlur=_useBackgroundBlur - In the implementation block
-(void)setContentSize:(CGSize)arg1 ;
-(BOOL)isFullscreen;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)thumbnail;
-(id<STSResultDetailViewDelegate>)delegate;
-(void)setCustomContentView:(UIView *)arg1 ;
-(CGSize)contentSize;
-(UIEdgeInsets)layoutMargins;
-(void)setDelegate:(id<STSResultDetailViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(UIView *)customContentView;
-(void)setProviderName:(NSString *)arg1 ;
-(void)setIsFullscreen:(BOOL)arg1 ;
-(NSString *)providerName;
-(void)setUseBackgroundBlur:(BOOL)arg1 ;
-(STSAnimatedImageInfo *)thumbnailInfo;
-(CGSize)providerIconSize;
-(void)setProviderIconSize:(CGSize)arg1 ;
-(UIImage *)providerIcon;
-(void)setProviderIcon:(UIImage *)arg1 ;
-(void)updateWithThumbnail:(id)arg1 orThumbnailInfo:(id)arg2 ;
-(CGRect)contentFrameForBounds:(CGRect)arg1 traitCollection:(id)arg2 ;
-(BOOL)useBackgroundBlur;
-(void)_didTapProvider:(id)arg1 ;
-(void)_didTapSend:(id)arg1 ;
-(void)_calculateFramesForBounds:(CGRect)arg1 traitCollection:(id)arg2 andSetFrames:(BOOL)arg3 contentFrame:(CGRect*)arg4 ;
@end

