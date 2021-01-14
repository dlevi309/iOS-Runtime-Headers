/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKBlackholeConversationListCommonViewController.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class UIViewController, PSRootController, PSSpecifier, NSString;

@interface CKBlackholeConversationListViewController : CKBlackholeConversationListCommonViewController <PSController> {

	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleURL:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)specifier;
-(id)rootController;
-(void)setParentController:(id)arg1 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)parentController;
-(void)setRootController:(id)arg1 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
@end

