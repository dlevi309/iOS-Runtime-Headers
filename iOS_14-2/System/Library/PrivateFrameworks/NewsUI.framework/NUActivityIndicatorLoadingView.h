/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(UILabel *)label;
-(void)loadingViewStartAnimating;
-(void)loadingViewStopAnimating;
-(id)initWithText:(id)arg1 activityIndicatorStyle:(long long)arg2 ;
@end

