/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
*/

#import <Preferences/PSListController.h>

@protocol DelegateDetailProtocol;
@class EKEventStore, PSSpecifier, NSNumber, EKSource, CalGrantedDelegate;

@interface CSGrantedDelegateDetailsController : PSListController {

	BOOL _addDelegateMode;
	EKEventStore* _eventStore;
	PSSpecifier* _readWriteSwitch;
	PSSpecifier* _removeDelegateButton;
	NSNumber* _currentPermission;
	id<DelegateDetailProtocol> _delegateFromSpecifier;
	EKSource* _source;
	CalGrantedDelegate* _grantedDelegate;

}
-(id)init;
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(void)modalCancelPressed:(id)arg1 ;
-(void)modalSavePressed:(id)arg1 ;
-(id)initInAddDelegateMode:(BOOL)arg1 ;
-(id)enabledWriteAccess:(id)arg1 ;
-(void)setEnabledWriteAccess:(id)arg1 specifier:(id)arg2 ;
-(void)removeDelegateTapped:(id)arg1 ;
@end

