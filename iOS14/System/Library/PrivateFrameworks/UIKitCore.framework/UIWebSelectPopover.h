/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIWebFormRotatingAccessoryPopover.h>
#import <UIKit/UIWebFormControl.h>

@class UIWebSelectTableViewController;

@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {

	UIWebSelectTableViewController* _tableViewController;

}

@property (nonatomic,retain) UIWebSelectTableViewController * _tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
-(id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(BOOL)arg5 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)_userActionDismissedPopover:(id)arg1 ;
-(void)set_tableViewController:(UIWebSelectTableViewController *)arg1 ;
-(UIWebSelectTableViewController *)_tableViewController;
-(void)dealloc;
@end

