/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class WFNetworkSettingsConfig, WFTextFieldCell;

@interface WFIPConfigViewController : UITableViewController {

	/*^block*/id _saveHandler;
	WFNetworkSettingsConfig* _originalConfig;
	WFNetworkSettingsConfig* _modifiedConfig;
	long long _type;
	WFTextFieldCell* _ipAddressCell;
	WFTextFieldCell* _subnetMaskCell;
	WFTextFieldCell* _routerCell;
	WFTextFieldCell* _prefixCell;
	WFTextFieldCell* _clientIDCell;

}

@property (nonatomic,retain) WFNetworkSettingsConfig * originalConfig;              //@synthesize originalConfig=_originalConfig - In the implementation block
@property (nonatomic,retain) WFNetworkSettingsConfig * modifiedConfig;              //@synthesize modifiedConfig=_modifiedConfig - In the implementation block
@property (assign,nonatomic) long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * ipAddressCell;                       //@synthesize ipAddressCell=_ipAddressCell - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * subnetMaskCell;                      //@synthesize subnetMaskCell=_subnetMaskCell - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * routerCell;                          //@synthesize routerCell=_routerCell - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * prefixCell;                          //@synthesize prefixCell=_prefixCell - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * clientIDCell;                        //@synthesize clientIDCell=_clientIDCell - In the implementation block
@property (nonatomic,copy) id saveHandler;                                          //@synthesize saveHandler=_saveHandler - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)save:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)setSaveHandler:(id)arg1 ;
-(id)saveHandler;
-(void)_updateSaveEnabled;
-(void)_setFirstResponderAfterCell:(id)arg1 ;
-(WFNetworkSettingsConfig *)modifiedConfig;
-(WFNetworkSettingsConfig *)originalConfig;
-(WFTextFieldCell *)clientIDCell;
-(WFTextFieldCell *)ipAddressCell;
-(WFTextFieldCell *)subnetMaskCell;
-(WFTextFieldCell *)routerCell;
-(WFTextFieldCell *)prefixCell;
-(id)initWithConfig:(id)arg1 ipType:(long long)arg2 ;
-(void)setOriginalConfig:(WFNetworkSettingsConfig *)arg1 ;
-(void)setModifiedConfig:(WFNetworkSettingsConfig *)arg1 ;
-(void)setIpAddressCell:(WFTextFieldCell *)arg1 ;
-(void)setSubnetMaskCell:(WFTextFieldCell *)arg1 ;
-(void)setRouterCell:(WFTextFieldCell *)arg1 ;
-(void)setPrefixCell:(WFTextFieldCell *)arg1 ;
-(void)setClientIDCell:(WFTextFieldCell *)arg1 ;
@end

