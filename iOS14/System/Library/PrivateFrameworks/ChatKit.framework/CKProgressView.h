/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIProgressView.h>

@class UIView;

@interface CKProgressView : UIProgressView {

	UIView* ___ck_progressView;
	UIView* ___ck_trackView;

}

@property (nonatomic,retain) UIView * __ck_progressView;              //@synthesize __ck_progressView=___ck_progressView - In the implementation block
@property (nonatomic,retain) UIView * __ck_trackView;                 //@synthesize __ck_trackView=___ck_trackView - In the implementation block
-(void)setTintColor:(id)arg1 ;
-(void)setUpCKProgressView;
-(void)setUpTrackView;
-(UIView *)__ck_progressView;
-(void)set__ck_progressView:(UIView *)arg1 ;
-(void)set__ck_trackView:(UIView *)arg1 ;
-(UIView *)__ck_trackView;
-(id)initWithProgressViewStyle:(long long)arg1 ;
-(void)setTrackTintColor:(id)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
@end

