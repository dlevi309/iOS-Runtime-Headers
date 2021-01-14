/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@class NSArray, PSListController, PSSpecifier;

@interface CTUIListLoadingGroup : NSObject {

	NSArray* _specifiers;
	PSListController* _hostController;
	PSSpecifier* _groupSpecifier;
	PSSpecifier* _spinnerSpecifier;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                   //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) NSArray * specifiers;                                  //@synthesize specifiers=_specifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * spinnerSpecifier;                        //@synthesize spinnerSpecifier=_spinnerSpecifier - In the implementation block
-(NSArray *)specifiers;
-(PSSpecifier *)groupSpecifier;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(PSSpecifier *)spinnerSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(id)initWithHostController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)setSpinnerSpecifier:(PSSpecifier *)arg1 ;
@end

