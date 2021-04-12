/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UIDebuggingInformationViewController.h>

@class NSObject;

@interface UIDebuggingIvarViewController : UITableViewController <UIDebuggingInformationViewController> {

	NSObject* _inspectedObject;

}

@property (assign,nonatomic,__weak) NSObject * inspectedObject;              //@synthesize inspectedObject=_inspectedObject - In the implementation block
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)prepareForDisplayAsTopLevelDebuggingViewController;
-(void)setInspectedObject:(NSObject *)arg1 ;
-(id)_ivarForIndexPath:(id)arg1 ;
-(Class)_classForTableSection:(long long)arg1 ;
-(id)_ivarsForInspectedObjectInClass:(Class)arg1 ;
-(id)_classHierarchyForInspectedObject;
-(NSObject *)inspectedObject;
@end

