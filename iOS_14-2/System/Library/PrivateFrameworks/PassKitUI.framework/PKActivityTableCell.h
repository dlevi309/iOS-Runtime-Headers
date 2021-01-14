/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKTableViewCell.h>

@class UIActivityIndicatorView;

@interface PKActivityTableCell : PKTableViewCell {

	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(UIActivityIndicatorView *)activityIndicator;
-(void)layoutSubviews;
-(id)pk_childrenForAppearance;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

