/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, UIStackView, UIFont, NSLayoutConstraint, NSCalendar, UIImage, NSString, NSDateComponents, NSNumber;

@interface HKMedicalIDPersonSummaryCell : UITableViewCell {

	UIImageView* _pictureView;
	UILabel* _nameLabel;
	UILabel* _birthdateLabel;
	UILabel* _organDonationLabel;
	UILabel* _emergencyAccessLabel;
	UIStackView* _fullContainerView;
	UIStackView* _mainContainerView;
	UIStackView* _labelContainerView;
	UIFont* _nameLabelFont;
	NSLayoutConstraint* _pictureWidthAnchor;
	NSCalendar* _gregorianCalendar;
	BOOL _resetFormatters;
	BOOL _shareDuringEmergencyCalls;
	BOOL _shareOnLockScreen;
	UIImage* _picture;
	NSString* _name;
	NSDateComponents* _gregorianBirthday;
	NSNumber* _organDonationStatus;

}

@property (nonatomic,retain) UIImage * picture;                                 //@synthesize picture=_picture - In the implementation block
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDateComponents * gregorianBirthday;              //@synthesize gregorianBirthday=_gregorianBirthday - In the implementation block
@property (nonatomic,retain) NSNumber * organDonationStatus;                    //@synthesize organDonationStatus=_organDonationStatus - In the implementation block
@property (assign,nonatomic) BOOL shareDuringEmergencyCalls;                    //@synthesize shareDuringEmergencyCalls=_shareDuringEmergencyCalls - In the implementation block
@property (assign,nonatomic) BOOL shareOnLockScreen;                            //@synthesize shareOnLockScreen=_shareOnLockScreen - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(NSString *)name;
-(UIImage *)picture;
-(void)localeDidChange:(id)arg1 ;
-(void)setPicture:(UIImage *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
-(NSDateComponents *)gregorianBirthday;
-(void)setGregorianBirthday:(NSDateComponents *)arg1 ;
-(void)updateSubviewsFromData;
-(id)_cachedCalendar;
-(id)stringWithImageNamed:(id)arg1 withText:(id)arg2 andColor:(id)arg3 ;
-(id)notOrganDonorString;
-(void)buildEmergencyAccessTableItem;
-(void)timeZoneDidChange:(id)arg1 ;
-(NSNumber *)organDonationStatus;
-(void)setOrganDonationStatus:(NSNumber *)arg1 ;
-(BOOL)shareDuringEmergencyCalls;
-(void)setShareDuringEmergencyCalls:(BOOL)arg1 ;
-(BOOL)shareOnLockScreen;
-(void)setShareOnLockScreen:(BOOL)arg1 ;
@end

