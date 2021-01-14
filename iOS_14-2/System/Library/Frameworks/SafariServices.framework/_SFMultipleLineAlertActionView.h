/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)detailLabel;
@end

