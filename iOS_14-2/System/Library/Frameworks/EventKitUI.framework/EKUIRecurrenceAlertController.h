/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UIAlertController, NSString;

@interface EKUIRecurrenceAlertController : NSObject <UIActionSheetDelegate> {

	UIAlertController* _alertController;
	/*^block*/id _completionHandler;

}

@property (copy) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) UIAlertController * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newAlertControllerWithCompletionHandler:(/*^block*/id)arg1 ;
+(int)_determineChoicesForEvent:(id)arg1 options:(unsigned long long)arg2 ;
+(id)_cancelLocalizedString;
+(id)presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
+(id)_detachAllLocalizedString;
+(id)_detachFutureLocalizedString;
+(id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 stringForDeleteButton:(id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
+(id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 forEvent:(id)arg5 stringForDeleteButton:(id)arg6 withCompletionHandler:(/*^block*/id)arg7 ;
+(id)deleteAlertWithOptions:(unsigned long long)arg1 forEvent:(id)arg2 stringForDeleteButton:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
+(id)presentAttachmentAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
+(id)presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 forEvent:(id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(void)_cleanup;
-(void)_presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 barButtonItem:(id)arg5 forEvent:(id)arg6 stringForDeleteButton:(id)arg7 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setupDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 forEvent:(id)arg3 stringForDeleteButton:(id)arg4 ;
-(void)_presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 barButtonItem:(id)arg5 forEvent:(id)arg6 ;
-(void)_presentAttachmentsAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 ;
-(BOOL)_useSheetForViewController:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_completeWithSelection:(int)arg1 ;
-(void)_configureAlertControllerWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 barButtonItem:(id)arg3 ;
-(id)completionHandler;
-(UIAlertController *)alertController;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)cancelAnimated:(BOOL)arg1 ;
-(void)dealloc;
@end

