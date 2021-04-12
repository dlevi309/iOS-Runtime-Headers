/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSListController.h>

@class NSArray, NSString, NSDate, MCDetailsHeaderCell, MCDetailsDescriptionTableCell, UITableViewCell;

@interface MCCertificateSummaryController : PSListController {

	SecTrustRef _trust;
	NSArray* _properties;
	NSString* _displayName;
	NSString* _organizationName;
	NSString* _purpose;
	NSDate* _expiration;
	MCDetailsHeaderCell* _configHeader;
	MCDetailsDescriptionTableCell* _configMiddle;
	UITableViewCell* _configBottom;
	BOOL _backButtonWasHidden;

}
+(id)_dateFormatter;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)actionButtonPressed:(id)arg1 ;
-(id)_valueAtPath:(id)arg1 ;
-(void)_setTrust:(SecTrustRef)arg1 ;
-(void)hideActionButton;
@end

