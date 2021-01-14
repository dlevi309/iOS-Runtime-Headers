/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)prepareForReuse;
-(CGSize)iconSize;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setIconImage:(id)arg1 ;
-(void)_setupUI;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setCheckmarkLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)checkmarkLeadingConstraint;
@end

