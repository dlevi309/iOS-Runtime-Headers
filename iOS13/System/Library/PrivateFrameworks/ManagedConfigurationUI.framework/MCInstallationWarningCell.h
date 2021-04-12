/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray;

@interface MCInstallationWarningCell : UITableViewCell {

	UILabel* _warningLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) NSArray * constraints;               //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UILabel * warningLabel;              //@synthesize warningLabel=_warningLabel - In the implementation block
+(id)reuseIdentifier;
-(NSArray *)constraints;
-(void)_setup;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)_setupConstraints;
-(UILabel *)warningLabel;
-(void)setWarningLabel:(UILabel *)arg1 ;
@end

