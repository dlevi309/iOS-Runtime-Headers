/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateTitle;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)viewDidLayoutSubviews;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(id)initWithTableViewStyle:(long long)arg1 moduleCreator:(/*^block*/id)arg2 moduleControllerBuilder:(/*^block*/id)arg3 ;
-(void)setModuleControllerBuilder:(id)arg1 ;
-(id)moduleControllerBuilder;
-(void)dismissTextViewController;
-(NSArray *)moduleControllers;
@end

