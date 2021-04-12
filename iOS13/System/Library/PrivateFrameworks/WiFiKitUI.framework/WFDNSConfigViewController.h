/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSMutableArray, UIBarButtonItem;

@interface WFDNSConfigViewController : UITableViewController {

	/*^block*/id _saveHandler;
	long long _originalDNSConfig;
	long long _dnsConfig;
	NSArray* _originalServers;
	NSMutableArray* _servers;
	NSArray* _originalDomains;
	NSMutableArray* _domains;
	UIBarButtonItem* _saveButton;

}

@property (assign,nonatomic) long long originalDNSConfig;               //@synthesize originalDNSConfig=_originalDNSConfig - In the implementation block
@property (assign,nonatomic) long long dnsConfig;                       //@synthesize dnsConfig=_dnsConfig - In the implementation block
@property (nonatomic,retain) NSArray * originalServers;                 //@synthesize originalServers=_originalServers - In the implementation block
@property (nonatomic,retain) NSMutableArray * servers;                  //@synthesize servers=_servers - In the implementation block
@property (nonatomic,retain) NSArray * originalDomains;                 //@synthesize originalDomains=_originalDomains - In the implementation block
@property (nonatomic,retain) NSMutableArray * domains;                  //@synthesize domains=_domains - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveButton;              //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,copy) id saveHandler;                              //@synthesize saveHandler=_saveHandler - In the implementation block
-(void)save:(id)arg1 ;
-(NSMutableArray *)domains;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)initWithConfig:(id)arg1 ;
-(void)setDomains:(NSMutableArray *)arg1 ;
-(void)setSaveButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)saveButton;
-(NSMutableArray *)servers;
-(void)setServers:(NSMutableArray *)arg1 ;
-(void)setSaveHandler:(id)arg1 ;
-(long long)dnsConfig;
-(void)setDnsConfig:(long long)arg1 ;
-(id)saveHandler;
-(NSArray *)originalServers;
-(long long)originalDNSConfig;
-(NSArray *)originalDomains;
-(void)_updateSaveEnabled;
-(void)_addServerAtIndexPath:(id)arg1 ;
-(void)_addDomainAtIndexPath:(id)arg1 ;
-(void)setOriginalDNSConfig:(long long)arg1 ;
-(void)setOriginalServers:(NSArray *)arg1 ;
-(void)setOriginalDomains:(NSArray *)arg1 ;
@end

