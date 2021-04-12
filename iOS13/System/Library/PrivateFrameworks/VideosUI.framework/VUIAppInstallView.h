/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUISBIconProgressViewDelegate.h>

@class UIImageView, UIView, VUISBIconProgressView, UIImage, NSString;

@interface VUIAppInstallView : UIView <VUISBIconProgressViewDelegate> {

	UIImageView* _appIconImageView;
	UIView* _backgroundKnockoutView;
	/*^block*/id _completion;
	VUISBIconProgressView* _progressView;
	UIImage* _appIcon;
	double _installProgress;

}

@property (nonatomic,retain) UIImage * appIcon;                     //@synthesize appIcon=_appIcon - In the implementation block
@property (assign,nonatomic) double installProgress;                //@synthesize installProgress=_installProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_progressMaskImage;
+(CGSize)_appIconSize;
+(double)_appIconRadius;
-(void)dealloc;
-(double)installProgress;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)progressViewCanBeRemoved:(id)arg1 ;
-(UIImage *)appIcon;
-(void)setAppIcon:(UIImage *)arg1 ;
-(void)setInstallProgress:(double)arg1 ;
-(void)finishInstallationWithCompletion:(/*^block*/id)arg1 ;
-(void)setWaiting;
@end

