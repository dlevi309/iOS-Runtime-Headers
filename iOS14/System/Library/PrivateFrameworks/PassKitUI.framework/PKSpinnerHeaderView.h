/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setShowSpinner:(BOOL)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)showSpinner;
@end

