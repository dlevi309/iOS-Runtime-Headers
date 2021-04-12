/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class MCPayload, MCPayloadInfo, NSArray, NSString;

@interface MCPayloadDetailsViewController : UITableViewController <PSStateRestoration> {

	MCPayload* _payload;
	MCPayloadInfo* _payloadInfo;
	NSArray* _keyValueSections;

}

@property (nonatomic,retain) MCPayload * payload;                      //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) MCPayloadInfo * payloadInfo;              //@synthesize payloadInfo=_payloadInfo - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSections;               //@synthesize keyValueSections=_keyValueSections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithPayload:(id)arg1 ;
-(void)setPayload:(MCPayload *)arg1 ;
-(MCPayload *)payload;
-(void)_setup;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(BOOL)canBeShownFromSuspendedState;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(NSArray *)keyValueSections;
-(void)setKeyValueSections:(NSArray *)arg1 ;
-(void)setPayloadInfo:(MCPayloadInfo *)arg1 ;
-(id)initWithPayloadInfo:(id)arg1 ;
-(void)setTitle:(id)arg1 keyValueSections:(id)arg2 ;
-(MCPayloadInfo *)payloadInfo;
@end

