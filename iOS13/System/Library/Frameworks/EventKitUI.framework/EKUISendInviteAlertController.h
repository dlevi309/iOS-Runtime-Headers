/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKit/UIActionSheetDelegate.h>

@class UIAlertController, NSString;

@interface EKUISendInviteAlertController : NSObject <UIActionSheetDelegate> {

	/*^block*/id _completionHandler;
	UIAlertController* _alertController;
	EKUISendInviteAlertController* _strongSelf;

}

@property (copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) UIAlertController * alertController;                     //@synthesize alertController=_alertController - In the implementation block
@property (retain) EKUISendInviteAlertController * strongSelf;              //@synthesize strongSelf=_strongSelf - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presentInviteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(id)newAlertControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_cleanup;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(EKUISendInviteAlertController *)strongSelf;
-(void)setStrongSelf:(EKUISendInviteAlertController *)arg1 ;
-(void)cancelAnimated:(BOOL)arg1 ;
-(void)_completeWithSelection:(int)arg1 ;
-(void)_presentAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 ;
-(BOOL)_useSheetForViewController:(id)arg1 ;
@end

