/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, NSLayoutConstraint;

@interface _SFSettingsAlertItemBackgroundView : UIView {

	UIVisualEffectView* _highlightView;
	NSLayoutConstraint* _highlightToTopConstraint;
	NSLayoutConstraint* _highlightToLeadingConstraint;
	NSLayoutConstraint* _highlightToLeadingWithSpaceConstraint;
	NSLayoutConstraint* _highlightPixelWidthConstraint;
	NSLayoutConstraint* _highlightPixelHeightConstraint;
	long long _mode;

}

@property (assign,nonatomic) long long mode;              //@synthesize mode=_mode - In the implementation block
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(id)_highlightEffect;
@end

