/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVControlItem.h>

@class AVLoadingButtonView;

@interface AVHomeLoadingButtonControlItem : AVControlItem {

	AVLoadingButtonView* _loadingButtonView;

}

@property (nonatomic,retain) AVLoadingButtonView * loadingButtonView;              //@synthesize loadingButtonView=_loadingButtonView - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator; 
-(id)view;
-(void)_updateTintColor;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(id)initWithTitle:(id)arg1 type:(long long)arg2 ;
-(void)_buttonTouchUpInside:(id)arg1 ;
-(AVLoadingButtonView *)loadingButtonView;
-(void)setLoadingButtonView:(AVLoadingButtonView *)arg1 ;
@end

