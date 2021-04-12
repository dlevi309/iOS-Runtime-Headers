/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSListController, PSSpecifier, NSString;

@interface PSUIDataModeSubgroup : NSObject <PSSpecifierGroup> {

	PSListController* _hostController;
	PSSpecifier* _parentSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 ;
@end

