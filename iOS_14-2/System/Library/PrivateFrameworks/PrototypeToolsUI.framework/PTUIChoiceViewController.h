/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(PTChoiceRow *)row;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setRow:(PTChoiceRow *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)rowDidChangeValue:(id)arg1 ;
-(void)rowDidReload:(id)arg1 ;
-(void)_checkAppropriateCell;
-(id)initWithPresentingRow:(id)arg1 ;
@end

