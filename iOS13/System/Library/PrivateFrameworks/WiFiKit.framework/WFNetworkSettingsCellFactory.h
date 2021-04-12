/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@class UITableView;

@interface WFNetworkSettingsCellFactory : NSObject {

	UITableView* _tableView;

}

@property (retain) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
-(UITableView *)tableView;
-(id)initWithTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)_registerCells;
-(id)segmentedCellAtIndexPath:(id)arg1 ;
-(id)recommendationCellAtIndexPath:(id)arg1 ;
-(id)joinCellAtIndexPath:(id)arg1 ;
-(id)forgetCellAtIndexPath:(id)arg1 ;
-(id)manageCellAtIndexPath:(id)arg1 ;
-(id)priorityCellAtIndexPath:(id)arg1 ;
-(id)autoJoinCellAtIndexPath:(id)arg1 ;
-(id)autoLoginCellAtIndexPath:(id)arg1 ;
-(id)saveDataModeCellAtIndexPath:(id)arg1 ;
-(id)ipv4AddressConfigCellAtIndexPath:(id)arg1 ;
-(id)ipv4AddressCellAtIndexPath:(id)arg1 ;
-(id)ipv4SubnetMaskCellAtIndexPath:(id)arg1 ;
-(id)ipv4RouterCellAtIndexPath:(id)arg1 ;
-(id)dhcpClientIDCellAtIndexPath:(id)arg1 ;
-(id)renewLeaseCellAtIndexPath:(id)arg1 ;
-(id)ipv6AddressConfigCellAtIndexPath:(id)arg1 ;
-(id)ipv6AddressCellAtIndexPath:(id)arg1 ;
-(id)ipv6RouterCellAtIndexPath:(id)arg1 ;
-(id)dnsConfigureCellAtIndexPath:(id)arg1 ;
-(id)httpProxyConfigCellAtIndexPath:(id)arg1 ;
-(id)dnsSearchDomainsCellAtIndexPath:(id)arg1 ;
-(id)dnsServerAddressesCellAtIndexPath:(id)arg1 ;
-(id)ipv4AddressTextCellAtIndexPath:(id)arg1 ;
-(id)ipv4SubnetMaskTextCellAtIndexPath:(id)arg1 ;
-(id)ipv4RouterTextCellAtIndexPath:(id)arg1 ;
-(id)dhcpClientIDTextCellAtIndexPath:(id)arg1 ;
-(id)httpProxyURLTextCellAtIndexPath:(id)arg1 ;
-(id)httpProxyServerTextCellAtIndexPath:(id)arg1 ;
-(id)httpProxyPortTextCellAtIndexPath:(id)arg1 ;
-(id)httpProxyUserTextCellAtIndexPath:(id)arg1 ;
-(id)httpProxyPasswordTextCellAtIndexPath:(id)arg1 ;
@end

