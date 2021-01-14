/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PRXLabel, UIActivityIndicatorView, NSLayoutConstraint;

@interface PRXActivityStatusView : UIView {

	PRXLabel* _statusLabel;
	UIActivityIndicatorView* _activityIndicator;
	NSLayoutConstraint* _activityIndicatorVerticalConstraint;

}

@property (nonatomic,readonly) NSLayoutConstraint * activityIndicatorVerticalConstraint;              //@synthesize activityIndicatorVerticalConstraint=_activityIndicatorVerticalConstraint - In the implementation block
@property (nonatomic,readonly) PRXLabel * statusLabel;                                                //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;                           //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(UIActivityIndicatorView *)activityIndicator;
-(id)initWithFrame:(CGRect)arg1 ;
-(PRXLabel *)statusLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSLayoutConstraint *)activityIndicatorVerticalConstraint;
@end

