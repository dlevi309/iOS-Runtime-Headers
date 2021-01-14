/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSpecifier:(id)arg1 ;
-(id)specifiers;
-(id)init;
-(void)modalCancelPressed:(id)arg1 ;
-(void)modalSavePressed:(id)arg1 ;
-(id)initInAddDelegateMode:(BOOL)arg1 ;
-(id)enabledWriteAccess:(id)arg1 ;
-(void)setEnabledWriteAccess:(id)arg1 specifier:(id)arg2 ;
-(void)removeDelegateTapped:(id)arg1 ;
@end

