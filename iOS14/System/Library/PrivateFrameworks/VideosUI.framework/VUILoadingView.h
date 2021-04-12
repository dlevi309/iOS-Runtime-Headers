/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUILabel, UIActivityIndicatorView;

@interface VUILoadingView : UIView {

	VUILabel* _loadingLabel;
	UIActivityIndicatorView* _indicatorView;

}

@property (nonatomic,retain) VUILabel * loadingLabel;                              //@synthesize loadingLabel=_loadingLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * indicatorView;              //@synthesize indicatorView=_indicatorView - In the implementation block
-(void)startTimer;
-(void)layoutSubviews;
-(UIActivityIndicatorView *)indicatorView;
-(void)setIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(VUILabel *)loadingLabel;
-(void)setLoadingLabel:(VUILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 loadingString:(id)arg2 ;
@end

