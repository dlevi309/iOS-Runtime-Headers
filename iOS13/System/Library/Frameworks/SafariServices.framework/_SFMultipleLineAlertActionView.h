/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface _SFMultipleLineAlertActionView : UIView {

	UILabel* _titleLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)tintColorDidChange;
-(UILabel *)detailLabel;
@end

