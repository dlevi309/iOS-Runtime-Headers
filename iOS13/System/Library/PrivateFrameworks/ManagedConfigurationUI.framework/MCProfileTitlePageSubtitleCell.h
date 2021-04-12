/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/MCUIScrollAnimationResponder.h>

@class UILabel, NSString;

@interface MCProfileTitlePageSubtitleCell : UITableViewCell <MCUIScrollAnimationResponder> {

	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(BOOL)arg3 ;
-(void)_updateConstraintsWithLabel:(id)arg1 ;
@end

