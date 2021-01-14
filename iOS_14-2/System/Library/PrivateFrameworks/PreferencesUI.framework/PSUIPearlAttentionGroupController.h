/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class NSString, PSListController, PSSpecifier, BKDevicePearl, BKUserProtectedConfiguration;

@interface PSUIPearlAttentionGroupController : NSObject <PSSpecifierGroup> {

	NSString* _pinCode;
	PSListController* _listController;
	PSSpecifier* _groupSpecifier;
	BKDevicePearl* _pearlDevice;
	BKUserProtectedConfiguration* _updatedConfiguration;

}

@property (assign,nonatomic,__weak) PSListController * listController;                         //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                              //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) BKDevicePearl * pearlDevice;                                      //@synthesize pearlDevice=_pearlDevice - In the implementation block
@property (nonatomic,retain) BKUserProtectedConfiguration * updatedConfiguration;              //@synthesize updatedConfiguration=_updatedConfiguration - In the implementation block
@property (nonatomic,retain) NSString * pinCode;                                               //@synthesize pinCode=_pinCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(BKDevicePearl *)pearlDevice;
-(void)setPearlDevice:(BKDevicePearl *)arg1 ;
-(id)_pearlDevice;
-(PSSpecifier *)groupSpecifier;
-(NSString *)pinCode;
-(void)setListController:(PSListController *)arg1 ;
-(void)setPinCode:(NSString *)arg1 ;
-(void)didCancelEnteringPIN;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)listController;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)setPearlUnlock:(id)arg1 specifier:(id)arg2 ;
-(id)pearlUnlock:(id)arg1 ;
-(void)setAttentionAware:(id)arg1 specifier:(id)arg2 ;
-(id)attentionAware:(id)arg1 ;
-(void)setProtectedCredentialsWithPasscode:(id)arg1 ;
-(BKUserProtectedConfiguration *)updatedConfiguration;
-(void)setUpdatedConfiguration:(BKUserProtectedConfiguration *)arg1 ;
@end

