/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/HFItemSectionAccessoryButtonHeader.h>

@class HFItemSection, NSString, UIFont, UIButton;

@interface HUAccessoryButtonTableViewHeaderView : UITableViewHeaderFooterView <HFItemSectionAccessoryButtonHeader> {

	HFItemSection* itemSection;
	NSString* _overrideAccessoryButtonTitle;
	UIFont* _accessoryButtonFont;
	UIButton* _accessoryButton;

}

@property (nonatomic,retain) UIButton * accessoryButton;                           //@synthesize accessoryButton=_accessoryButton - In the implementation block
@property (nonatomic,retain) NSString * overrideAccessoryButtonTitle;              //@synthesize overrideAccessoryButtonTitle=_overrideAccessoryButtonTitle - In the implementation block
@property (nonatomic,retain) UIFont * accessoryButtonFont;                         //@synthesize accessoryButtonFont=_accessoryButtonFont - In the implementation block
@property (nonatomic,retain) HFItemSection * itemSection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setAccessoryButton:(UIButton *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)accessoryButtonPressed;
-(UIButton *)accessoryButton;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setOverrideAccessoryButtonTitle:(NSString *)arg1 ;
-(id)defaultAccessoryButtonFont;
-(void)setAccessoryButtonFont:(UIFont *)arg1 ;
-(void)setItemSection:(HFItemSection *)arg1 ;
-(HFItemSection *)itemSection;
-(NSString *)overrideAccessoryButtonTitle;
-(UIFont *)accessoryButtonFont;
@end

