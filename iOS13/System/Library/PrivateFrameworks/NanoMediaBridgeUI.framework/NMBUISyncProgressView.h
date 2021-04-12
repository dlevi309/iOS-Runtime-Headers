/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateWithShouldShowProgressBar:(BOOL)arg1 progress:(float)arg2 progressText:(id)arg3 ;
@end

