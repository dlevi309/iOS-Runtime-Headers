/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(UIActivityIndicatorView *)spinner;
-(UILabel *)loadingLabel;
@end

