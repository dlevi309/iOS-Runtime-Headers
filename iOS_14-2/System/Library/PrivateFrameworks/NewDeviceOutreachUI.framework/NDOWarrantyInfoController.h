/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
*/

#import <Preferences/PSListController.h>

@class NSDictionary, PSSpecifier;

@interface NDOWarrantyInfoController : PSListController {

	NSDictionary* _appSupportDictionary;
	PSSpecifier* _lastDetailSpecifier;
	PSSpecifier* _lastCoverageSpecifier;

}

@property (retain) NSDictionary * appSupportDictionary;              //@synthesize appSupportDictionary=_appSupportDictionary - In the implementation block
@property (retain) PSSpecifier * lastDetailSpecifier;                //@synthesize lastDetailSpecifier=_lastDetailSpecifier - In the implementation block
@property (retain) PSSpecifier * lastCoverageSpecifier;              //@synthesize lastCoverageSpecifier=_lastCoverageSpecifier - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)donePressed:(id)arg1 ;
-(void)reloadAsyncSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(id)specifiers;
-(void)delayedAsyncLoadSpecifiers;
-(void)reloadSpecifiers;
-(void)openURL:(id)arg1 ;
-(void)loadView;
-(id)valueForSpecifier:(id)arg1 ;
-(void)managePlanPressed:(id)arg1 ;
-(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_refresh:(id)arg1 ;
-(void)setAppSupportDictionary:(NSDictionary *)arg1 ;
-(void)updateAppStoreLookupWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)appSupportDictionary;
-(PSSpecifier *)lastDetailSpecifier;
-(PSSpecifier *)lastCoverageSpecifier;
-(void)downloadAppPressed:(id)arg1 ;
-(id)coverageItemSubTitle:(id)arg1 ;
-(void)setLastCoverageSpecifier:(PSSpecifier *)arg1 ;
-(void)_addKey:(id)arg1 value:(id)arg2 isCopyable:(BOOL)arg3 toSpecifiers:(id)arg4 ;
-(void)setLastDetailSpecifier:(PSSpecifier *)arg1 ;
-(BOOL)_isValidSubscriptionPlan;
-(void)_addKey:(id)arg1 isCopyable:(BOOL)arg2 toSpecifiers:(id)arg3 ;
-(id)specifierForID:(id)arg1 inSpecifiers:(id)arg2 ;
-(void)footer1Tapped:(id)arg1 ;
-(void)benefitsDescLinkTapped:(id)arg1 ;
-(void)footer2Tapped:(id)arg1 ;
-(void)_setValue:(id)arg1 forSpecifierWithKey:(id)arg2 inSpecifiers:(id)arg3 ;
@end

