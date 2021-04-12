/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewCell.h>

@protocol SFPasswordBreachToggleCellDelegate;
@class UISwitch;

@interface SFPasswordBreachToggleCell : UITableViewCell {

	UISwitch* _toggleSwitch;
	id<SFPasswordBreachToggleCellDelegate> _delegate;

}
-(void)_userToggledBreachDetection:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)setCurrentPasswordBreachState:(BOOL)arg1 ;
@end

