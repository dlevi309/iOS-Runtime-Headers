/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupConstraints;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)_setup;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)warningLabel;
-(void)setWarningLabel:(UILabel *)arg1 ;
@end

