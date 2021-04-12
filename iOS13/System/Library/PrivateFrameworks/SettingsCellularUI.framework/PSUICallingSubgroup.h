/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSListController, PSSpecifier, NSArray, NSString;

@interface PSUICallingSubgroup : NSObject <PSSpecifierGroup> {

	BOOL _supportsWiFiCalling;
	PSListController* _listController;
	PSSpecifier* _parentSpecifier;
	NSArray* _wifiCallingSpecifiers;

}

@property (assign,nonatomic,__weak) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * parentSpecifier;                  //@synthesize parentSpecifier=_parentSpecifier - In the implementation block
@property (nonatomic,retain) NSArray * wifiCallingSpecifiers;                       //@synthesize wifiCallingSpecifiers=_wifiCallingSpecifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(PSListController *)listController;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)setListController:(PSListController *)arg1 ;
-(PSSpecifier *)parentSpecifier;
-(void)setParentSpecifier:(PSSpecifier *)arg1 ;
-(void)setWifiCallingSpecifiers:(NSArray *)arg1 ;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3 ;
-(void)viewWillAppear;
-(NSArray *)wifiCallingSpecifiers;
@end

