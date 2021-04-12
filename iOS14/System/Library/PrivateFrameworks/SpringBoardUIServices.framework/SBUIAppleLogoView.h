/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(float)progress;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 appearance:(long long)arg2 progressBarVisible:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 inverted:(BOOL)arg2 progressBarVisible:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 useWhiteLogo:(BOOL)arg2 progressBarVisible:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 progressBarVisible:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 inverted:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 useWhiteLogo:(BOOL)arg2 ;
@end

