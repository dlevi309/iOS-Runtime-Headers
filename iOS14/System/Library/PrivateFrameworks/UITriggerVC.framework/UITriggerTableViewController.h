/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
*/

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/CSLUIUITriggerIDSProtocolResponse.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class IDSService, NSMutableArray, NSMutableDictionary, NSString;

@interface UITriggerTableViewController : UITableViewController <IDSServiceDelegate, CSLUIUITriggerIDSProtocolResponse, UITableViewDelegate, UITableViewDataSource> {

	BOOL _loading;
	IDSService* _idsService;
	NSMutableArray* _sectionList;
	NSMutableDictionary* _sectionContents;

}

@property (nonatomic,retain) IDSService * idsService;                            //@synthesize idsService=_idsService - In the implementation block
@property (assign,nonatomic) BOOL loading;                                       //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionList;                       //@synthesize sectionList=_sectionList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionContents;              //@synthesize sectionContents=_sectionContents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)loading;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)idsUIProvidersResponse:(id)arg1 ;
-(void)idsRequestUITriggerResponse:(id)arg1 ;
-(void)setSectionList:(NSMutableArray *)arg1 ;
-(void)setSectionContents:(NSMutableDictionary *)arg1 ;
-(BOOL)requestPluginList;
-(NSMutableArray *)sectionList;
-(NSMutableDictionary *)sectionContents;
-(id)sectionStringForIndexPath:(id)arg1 ;
-(id)tailStringForIndexPath:(id)arg1 ;
-(BOOL)triggerUIProvider:(id)arg1 ;
-(void)_extractSections:(id)arg1 ;
-(id)sendProtobufRequest:(id)arg1 type:(unsigned short)arg2 priority:(long long)arg3 expectsResponse:(BOOL)arg4 errorHandler:(/*^block*/id)arg5 withTimeout:(double)arg6 ;
@end

