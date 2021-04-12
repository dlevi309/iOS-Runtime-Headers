/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class UIImageView;

@interface CNPropertyPhoneNumberCell : CNPropertySimpleTransportCell {

	BOOL _emergencyPhoneNumber;
	UIImageView* _emergencyImageView;

}

@property (nonatomic,retain) UIImageView * emergencyImageView;                                     //@synthesize emergencyImageView=_emergencyImageView - In the implementation block
@property (assign,getter=isEmergencyPhoneNumber,nonatomic) BOOL emergencyPhoneNumber;              //@synthesize emergencyPhoneNumber=_emergencyPhoneNumber - In the implementation block
-(void)copy:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setProperty:(id)arg1 ;
-(BOOL)shouldPerformDefaultAction;
-(void)updateTransportButtons;
-(void)setEmergencyPhoneNumber:(BOOL)arg1 ;
-(BOOL)shouldShowEmergencyBadge;
-(void)updateEmergencyBadge;
-(void)buildEmergencyImageView;
-(BOOL)isEmergencyPhoneNumber;
-(UIImageView *)emergencyImageView;
-(void)setEmergencyImageView:(UIImageView *)arg1 ;
@end

