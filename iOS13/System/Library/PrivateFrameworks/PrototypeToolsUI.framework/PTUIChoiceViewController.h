/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PTRowObserver.h>

@class NSIndexPath, PTChoiceRow, NSString;

@interface PTUIChoiceViewController : UITableViewController <PTRowObserver> {

	NSIndexPath* _valueIndexPath;
	PTChoiceRow* _row;

}

@property (nonatomic,retain) PTChoiceRow * row;                     //@synthesize row=_row - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PTChoiceRow *)row;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)rowDidChangeValue:(id)arg1 ;
-(void)rowDidReload:(id)arg1 ;
-(void)setRow:(PTChoiceRow *)arg1 ;
-(void)_checkAppropriateCell;
-(id)initWithPresentingRow:(id)arg1 ;
@end

