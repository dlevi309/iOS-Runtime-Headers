/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

#import <WallpaperKit/WallpaperKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView, UIActivityIndicatorView, UILabel;

@interface WKIndicatorView : UIView {

	BOOL __hasBeenConfigured;
	_UIBackdropView* __backdropView;
	UIActivityIndicatorView* __activityIndicatorView;
	UILabel* __label;

}

@property (assign,nonatomic) BOOL _hasBeenConfigured;                                       //@synthesize _hasBeenConfigured=__hasBeenConfigured - In the implementation block
@property (nonatomic,retain) _UIBackdropView * _backdropView;                               //@synthesize _backdropView=__backdropView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * _activityIndicatorView;              //@synthesize _activityIndicatorView=__activityIndicatorView - In the implementation block
@property (nonatomic,retain) UILabel * _label;                                              //@synthesize _label=__label - In the implementation block
-(UILabel *)_label;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)_activityIndicatorView;
-(_UIBackdropView *)_backdropView;
-(BOOL)_hasBeenConfigured;
-(void)set_hasBeenConfigured:(BOOL)arg1 ;
-(void)_configureViewIfNeeded;
-(void)showViewWithMessage:(id)arg1 inHostingView:(id)arg2 ;
-(void)hideViewAndRemoveFromHostingView;
-(void)set_backdropView:(_UIBackdropView *)arg1 ;
-(void)set_activityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)set_label:(UILabel *)arg1 ;
@end

