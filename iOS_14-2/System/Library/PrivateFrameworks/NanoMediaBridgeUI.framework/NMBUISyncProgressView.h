/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/

#import <NanoMediaBridgeUI/NanoMediaBridgeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, UIProgressView, UILabel, UIActivityIndicatorView, UIVisualEffectView;

@interface NMBUISyncProgressView : UIView {

	UIStackView* _progressContainerView;
	UIProgressView* _progressView;
	UILabel* _progressTextLabel;
	UIActivityIndicatorView* _progressIndicator;
	UIVisualEffectView* _backgroundView;
	BOOL _shouldShowProgressDetails;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)updateWithShouldShowProgressBar:(BOOL)arg1 progress:(float)arg2 progressText:(id)arg3 ;
@end

