/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
*/

#import <Preferences/PSListController.h>

@class NSArray, EKEventStore;

@interface CSAccountsSupportingDelegationController : PSListController {

	NSArray* _accountsSupportingDelegation;
	EKEventStore* _eventStore;

}
-(id)init;
-(id)specifiers;
-(void)reloadDelegates;
-(id)specifiersForAccountsSupportingDelegation;
@end

