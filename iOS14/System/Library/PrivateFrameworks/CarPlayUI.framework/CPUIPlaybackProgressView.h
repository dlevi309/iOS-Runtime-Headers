/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface CPUIPlaybackProgressView : UIView {

	BOOL _highlighted;
	BOOL _shouldResizeCurrentProgress;
	double _playbackProgress;
	UIView* _overallProgressView;
	UIView* _currentProgressView;

}

@property (nonatomic,retain) UIView * overallProgressView;                  //@synthesize overallProgressView=_overallProgressView - In the implementation block
@property (nonatomic,retain) UIView * currentProgressView;                  //@synthesize currentProgressView=_currentProgressView - In the implementation block
@property (assign,nonatomic) BOOL shouldResizeCurrentProgress;              //@synthesize shouldResizeCurrentProgress=_shouldResizeCurrentProgress - In the implementation block
@property (assign,nonatomic) double playbackProgress;                       //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                              //@synthesize highlighted=_highlighted - In the implementation block
-(id)init;
-(BOOL)highlighted;
-(double)playbackProgress;
-(void)setPlaybackProgress:(double)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setProgressViewHighlighted:(BOOL)arg1 ;
-(void)setShouldResizeCurrentProgress:(BOOL)arg1 ;
-(UIView *)currentProgressView;
-(UIView *)overallProgressView;
-(BOOL)shouldResizeCurrentProgress;
-(void)setOverallProgressView:(UIView *)arg1 ;
-(void)setCurrentProgressView:(UIView *)arg1 ;
@end

