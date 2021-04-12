/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSString;

@interface WFDiagnosticsViewController : UITableViewController {

	BOOL _saving;
	/*^block*/id _saveHandler;
	NSString* _comment;

}

@property (nonatomic,copy) NSString * comment;              //@synthesize comment=_comment - In the implementation block
@property (nonatomic,copy) id saveHandler;                  //@synthesize saveHandler=_saveHandler - In the implementation block
@property (assign,nonatomic) BOOL saving;                   //@synthesize saving=_saving - In the implementation block
-(id)init;
-(NSString *)comment;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setComment:(NSString *)arg1 ;
-(BOOL)saving;
-(void)setSaving:(BOOL)arg1 ;
-(void)setSaveHandler:(id)arg1 ;
-(id)saveHandler;
@end

