/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormRotatingAccessoryPopover.h>
#import <libobjc.A.dylib/WKFormControl.h>

@class UITableViewController;

@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl> {

	RetainPtr<WKSelectTableViewController>* _tableViewController;

}

@property (nonatomic,readonly) UITableViewController * tableViewController; 
-(void)dealloc;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)_userActionDismissedPopover:(id)arg1 ;
-(id)initWithView:(id)arg1 hasGroups:(BOOL)arg2 ;
-(void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(BOOL)arg3 ;
-(UITableViewController *)tableViewController;
@end

