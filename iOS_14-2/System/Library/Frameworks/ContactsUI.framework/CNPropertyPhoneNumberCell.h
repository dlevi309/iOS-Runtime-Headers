/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProperty:(id)arg1 ;
-(void)setEmergencyPhoneNumber:(BOOL)arg1 ;
-(BOOL)shouldShowEmergencyBadge;
-(void)updateEmergencyBadge;
-(void)buildEmergencyImageView;
-(BOOL)isEmergencyPhoneNumber;
-(UIImageView *)emergencyImageView;
-(void)setEmergencyImageView:(UIImageView *)arg1 ;
-(void)updateTransportButtons;
-(BOOL)shouldPerformDefaultAction;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

