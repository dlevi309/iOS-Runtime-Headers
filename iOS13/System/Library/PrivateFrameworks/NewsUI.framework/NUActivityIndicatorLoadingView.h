/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NULoadingViewProviding.h>

@class UIActivityIndicatorView, UILabel, NSString;

@interface NUActivityIndicatorLoadingView : UIView <NULoadingViewProviding> {

	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _label;

}

@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                              //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)loadingViewStartAnimating;
-(void)loadingViewStopAnimating;
-(id)initWithText:(id)arg1 activityIndicatorStyle:(long long)arg2 ;
@end

