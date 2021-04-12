/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setSpecifiers:(NSArray *)arg1 ;
-(PSSpecifier *)groupSpecifier;
-(PSSpecifier *)spinnerSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(id)initWithHostController:(id)arg1 groupSpecifier:(id)arg2 ;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(void)setSpinnerSpecifier:(PSSpecifier *)arg1 ;
@end

