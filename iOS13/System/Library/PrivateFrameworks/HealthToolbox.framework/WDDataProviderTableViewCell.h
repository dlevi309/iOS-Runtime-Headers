/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIButton, NSLayoutConstraint;

@interface WDDataProviderTableViewCell : UITableViewCell {

	UILabel* _inactiveLabel;
	UIButton* _checkmarkButton;
	NSLayoutConstraint* _iconImageWidth;
	BOOL _active;
	NSLayoutConstraint* _checkmarkLeadingConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * checkmarkLeadingConstraint;              //@synthesize checkmarkLeadingConstraint=_checkmarkLeadingConstraint - In the implementation block
@property (nonatomic,readonly) CGSize iconSize; 
@property (assign,getter=isActive,nonatomic) BOOL active;                                  //@synthesize active=_active - In the implementation block
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setDisplayName:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGSize)iconSize;
-(void)setIconImage:(id)arg1 ;
-(void)_setupUI;
-(void)setCheckmarkLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)checkmarkLeadingConstraint;
@end

