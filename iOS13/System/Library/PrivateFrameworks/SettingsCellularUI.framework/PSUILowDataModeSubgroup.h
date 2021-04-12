/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSListController, PSSpecifier, NSString;

@interface PSUILowDataModeSubgroup : NSObject <PSSpecifierGroup> {

	PSListController* _hostController;
	PSSpecifier* _parentSpecifier;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * parentSpecifier;                  //@synthesize parentSpecifier=_parentSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 ;
-(PSSpecifier *)parentSpecifier;
-(void)setParentSpecifier:(PSSpecifier *)arg1 ;
@end

