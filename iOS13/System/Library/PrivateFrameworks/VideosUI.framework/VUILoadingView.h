/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(void)startTimer;
-(VUILabel *)loadingLabel;
-(void)setLoadingLabel:(VUILabel *)arg1 ;
-(UIActivityIndicatorView *)indicatorView;
-(void)setIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 loadingString:(id)arg2 ;
@end

