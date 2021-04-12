/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)mode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMode:(long long)arg1 ;
-(void)updateConstraints;
-(id)_highlightEffect;
@end

