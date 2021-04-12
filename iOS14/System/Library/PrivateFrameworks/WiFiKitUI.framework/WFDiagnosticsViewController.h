/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <WiFiKitUI/WFInsetTableViewController.h>

@class NSString;

@interface WFDiagnosticsViewController : WFInsetTableViewController {

	BOOL _saving;
	/*^block*/id _saveHandler;
	NSString* _comment;

}

@property (nonatomic,copy) NSString * comment;              //@synthesize comment=_comment - In the implementation block
@property (nonatomic,copy) id saveHandler;                  //@synthesize saveHandler=_saveHandler - In the implementation block
@property (assign,nonatomic) BOOL saving;                   //@synthesize saving=_saving - In the implementation block
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
-(BOOL)saving;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)setSaving:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setSaveHandler:(id)arg1 ;
-(id)saveHandler;
@end

