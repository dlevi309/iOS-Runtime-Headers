/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface PKPerformActionLoadingView : UIView {

	UIActivityIndicatorView* _spinner;
	UILabel* _loadingLabel;

}

@property (nonatomic,readonly) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) UILabel * loadingLabel;                         //@synthesize loadingLabel=_loadingLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)layoutSubviews;
-(UILabel *)loadingLabel;
@end

