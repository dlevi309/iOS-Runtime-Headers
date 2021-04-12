/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/MCUIScrollAnimationResponder.h>

@class NSString, UILabel, UIStackView;

@interface MCProfileTitlePageOrganizationCell : UITableViewCell <MCUIScrollAnimationResponder> {

	NSString* _organizationName;
	NSString* _appleID;
	UILabel* _organizationLabel;
	UILabel* _appleIDLabel;
	UILabel* _organizationValueLabel;
	UILabel* _appleIDValueLabel;
	UIStackView* _labelStackView;

}

@property (nonatomic,retain) UILabel * organizationLabel;                   //@synthesize organizationLabel=_organizationLabel - In the implementation block
@property (nonatomic,retain) UILabel * appleIDLabel;                        //@synthesize appleIDLabel=_appleIDLabel - In the implementation block
@property (nonatomic,retain) UILabel * organizationValueLabel;              //@synthesize organizationValueLabel=_organizationValueLabel - In the implementation block
@property (nonatomic,retain) UILabel * appleIDValueLabel;                   //@synthesize appleIDValueLabel=_appleIDValueLabel - In the implementation block
@property (nonatomic,retain) UIStackView * labelStackView;                  //@synthesize labelStackView=_labelStackView - In the implementation block
@property (nonatomic,copy) NSString * organizationName;                     //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,copy) NSString * appleID;                              //@synthesize appleID=_appleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)appleID;
-(NSString *)organizationName;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLabelStackView:(UIStackView *)arg1 ;
-(UIStackView *)labelStackView;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(UILabel *)organizationLabel;
-(void)setOrganizationLabel:(UILabel *)arg1 ;
-(void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(BOOL)arg3 ;
-(id)_createLabelLabel;
-(id)_createValueLabel;
-(id)_createHorizontalStackWithViews:(id)arg1 ;
-(id)_createVerticalStackWithViews:(id)arg1 ;
-(void)_updateConstraintWithStack:(id)arg1 ;
-(UILabel *)organizationValueLabel;
-(UILabel *)appleIDValueLabel;
-(UILabel *)appleIDLabel;
-(void)setAppleIDLabel:(UILabel *)arg1 ;
-(void)setOrganizationValueLabel:(UILabel *)arg1 ;
-(void)setAppleIDValueLabel:(UILabel *)arg1 ;
@end

