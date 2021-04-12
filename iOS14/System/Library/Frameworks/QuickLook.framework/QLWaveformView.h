/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PHVideoScrubberFilmstripView.h>

@class AVAsset, UIImage, UIView, UIImageView, NSString;

@interface QLWaveformView : UIView <PHVideoScrubberFilmstripView> {

	CGSize _waveSize;
	UIView* _lineView;
	UIImage* _waveImage;
	UIImageView* _waveView;
	AVAsset* _asset;
	UIImage* placeholderImage;
	CGRect visibleRect;

}

@property (nonatomic,copy) AVAsset * asset;                           //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) CGRect visibleRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAsset:(AVAsset *)arg1 ;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)updateImage;
-(CGRect)visibleRect;
-(AVAsset *)asset;
-(void)layoutSubviews;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)_updateWithWaveformImage:(id)arg1 ;
-(void)_expandWaveform;
@end

