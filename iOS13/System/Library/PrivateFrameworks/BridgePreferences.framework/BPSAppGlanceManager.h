/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/


@class PSListController;

@interface BPSAppGlanceManager : NSObject {

	PSListController* _listControllerDelegate;

}

@property (assign,nonatomic,__weak) PSListController * listControllerDelegate;              //@synthesize listControllerDelegate=_listControllerDelegate - In the implementation block
-(id)glanceSpecifierForIdentifier:(id)arg1 ;
-(void)loadSettings;
-(void)setShowsGlance:(id)arg1 forSpecifier:(id)arg2 ;
-(id)showsGlance:(id)arg1 ;
-(void)_logGlanceDescriptions;
-(PSListController *)listControllerDelegate;
-(void)setListControllerDelegate:(PSListController *)arg1 ;
@end

