/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSString, WFTableDataSource;

@interface WFSSHKeyHashViewController : UITableViewController {

	NSString* _hashString;
	WFTableDataSource* _dataSource;

}

@property (nonatomic,copy,readonly) NSString * hashString;                  //@synthesize hashString=_hashString - In the implementation block
@property (nonatomic,readonly) WFTableDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(WFTableDataSource *)dataSource;
-(void)viewDidLoad;
-(NSString *)hashString;
-(id)initWithHashString:(id)arg1 title:(id)arg2 ;
@end

