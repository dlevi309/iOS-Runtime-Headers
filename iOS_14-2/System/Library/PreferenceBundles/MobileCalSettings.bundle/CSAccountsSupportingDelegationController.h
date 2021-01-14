/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
*/

#import <Preferences/PSListController.h>

@class NSArray, EKEventStore;

@interface CSAccountsSupportingDelegationController : PSListController {

	NSArray* _accountsSupportingDelegation;
	EKEventStore* _eventStore;

}
-(id)specifiers;
-(id)init;
-(void)reloadDelegates;
-(id)specifiersForAccountsSupportingDelegation;
@end

