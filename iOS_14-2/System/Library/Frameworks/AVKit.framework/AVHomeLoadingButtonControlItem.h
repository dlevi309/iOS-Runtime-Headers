/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVControlItem.h>

@class UIFont, AVLoadingButtonView;

@interface AVHomeLoadingButtonControlItem : AVControlItem {

	UIFont* _titleFont;
	AVLoadingButtonView* _loadingButtonView;

}

@property (nonatomic,retain) AVLoadingButtonView * loadingButtonView;              //@synthesize loadingButtonView=_loadingButtonView - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator; 
-(void)setTitleFont:(id)arg1 ;
-(void)_updateTintColor;
-(id)initWithTitle:(id)arg1 type:(long long)arg2 ;
-(void)_buttonTouchUpInside:(id)arg1 ;
-(id)titleFont;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(AVLoadingButtonView *)loadingButtonView;
-(void)setLoadingButtonView:(AVLoadingButtonView *)arg1 ;
-(id)view;
@end

