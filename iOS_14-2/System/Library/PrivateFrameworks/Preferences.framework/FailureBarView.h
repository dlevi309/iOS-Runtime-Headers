/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UILabel;

@interface FailureBarView : UIImageView {

	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFailureCount:(long long)arg1 ;
@end

