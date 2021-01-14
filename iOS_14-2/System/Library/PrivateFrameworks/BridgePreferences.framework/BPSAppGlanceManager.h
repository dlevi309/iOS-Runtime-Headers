/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/


@class PSListController;

@interface BPSAppGlanceManager : NSObject {

	PSListController* _listControllerDelegate;

}

@property (assign,nonatomic,__weak) PSListController * listControllerDelegate;              //@synthesize listControllerDelegate=_listControllerDelegate - In the implementation block
-(void)loadSettings;
-(id)glanceSpecifierForIdentifier:(id)arg1 ;
-(void)setShowsGlance:(id)arg1 forSpecifier:(id)arg2 ;
-(id)showsGlance:(id)arg1 ;
-(void)_logGlanceDescriptions;
-(PSListController *)listControllerDelegate;
-(void)setListControllerDelegate:(PSListController *)arg1 ;
@end

