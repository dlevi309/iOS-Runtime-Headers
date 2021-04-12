/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, PUIProgressWindow;

@interface SBUIAppleLogoView : UIView {

	UIView* _layerView;
	PUIProgressWindow* _progressWindow;
	float _progress;

}

@property (assign,nonatomic) float progress;              //@synthesize progress=_progress - In the implementation block
-(float)progress;
-(void)setProgress:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 appearance:(long long)arg2 progressBarVisible:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 inverted:(BOOL)arg2 progressBarVisible:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 useWhiteLogo:(BOOL)arg2 progressBarVisible:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 progressBarVisible:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 inverted:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 useWhiteLogo:(BOOL)arg2 ;
@end

