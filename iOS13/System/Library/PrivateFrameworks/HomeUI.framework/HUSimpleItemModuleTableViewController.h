/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class NSArray, NSString;

@interface HUSimpleItemModuleTableViewController : HUItemTableViewController <UITextViewDelegate> {

	NSArray* _moduleControllers;
	/*^block*/id _moduleControllerBuilder;

}

@property (nonatomic,readonly) NSArray * moduleControllers;              //@synthesize moduleControllers=_moduleControllers - In the implementation block
@property (nonatomic,copy) id moduleControllerBuilder;                   //@synthesize moduleControllerBuilder=_moduleControllerBuilder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)updateMode;
-(void)viewDidLayoutSubviews;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)_updateTitle;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(id)initWithTableViewStyle:(long long)arg1 moduleCreator:(/*^block*/id)arg2 moduleControllerBuilder:(/*^block*/id)arg3 ;
-(void)dismissTextViewController;
-(void)setModuleControllerBuilder:(id)arg1 ;
-(id)moduleControllerBuilder;
-(NSArray *)moduleControllers;
@end

