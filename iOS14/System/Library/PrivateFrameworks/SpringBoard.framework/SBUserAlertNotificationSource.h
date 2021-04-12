/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBAlertItemsControllerObserver.h>
#import <libobjc.A.dylib/NCNotificationSource.h>
#import <libobjc.A.dylib/SBAlertItemPresenter.h>

@class NCNotificationDispatcher, NSString;

@interface SBUserAlertNotificationSource : NSObject <SBAlertItemsControllerObserver, NCNotificationSource, SBAlertItemPresenter> {

	NCNotificationDispatcher* _dispatcher;

}

@property (nonatomic,retain) NCNotificationDispatcher * dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NCNotificationDispatcher *)dispatcher;
-(void)setDispatcher:(NCNotificationDispatcher *)arg1 ;
-(void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3 ;
-(void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2 ;
-(BOOL)canPresentMultipleAlertItemsSimultaneously;
-(void)presentAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2 ;
-(id)initWithDispatcher:(id)arg1 ;
-(BOOL)presentsAlertItemsModally;
-(void)dealloc;
@end

