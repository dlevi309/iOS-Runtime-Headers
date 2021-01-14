/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)newAlertControllerWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)presentInviteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_cleanup;
-(void)setStrongSelf:(EKUISendInviteAlertController *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_completeWithSelection:(int)arg1 ;
-(EKUISendInviteAlertController *)strongSelf;
-(id)completionHandler;
-(UIAlertController *)alertController;
-(void)_presentAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 ;
-(BOOL)_useSheetForViewController:(id)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)cancelAnimated:(BOOL)arg1 ;
-(void)dealloc;
@end

