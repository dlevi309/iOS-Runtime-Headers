/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UIActivityIndicatorView;

@interface PKSpinnerHeaderView : UITableViewHeaderFooterView {

	UIActivityIndicatorView* _spinner;
	BOOL _showSpinner;

}

@property (assign,nonatomic) BOOL showSpinner;              //@synthesize showSpinner=_showSpinner - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)showSpinner;
-(void)setShowSpinner:(BOOL)arg1 ;
@end

