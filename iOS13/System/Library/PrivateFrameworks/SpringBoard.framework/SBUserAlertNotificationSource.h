/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/NCNotificationSource.h>
#import <libobjc.A.dylib/SBAlertItemPresenter.h>

@class NCNotificationDispatcher, NSString;

@interface SBUserAlertNotificationSource : NSObject <NCNotificationSource, SBAlertItemPresenter> {

	NCNotificationDispatcher* _dispatcher;

}

@property (nonatomic,retain) NCNotificationDispatcher * dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NCNotificationDispatcher *)dispatcher;
-(void)setDispatcher:(NCNotificationDispatcher *)arg1 ;
-(id)initWithDispatcher:(id)arg1 ;
-(BOOL)canPresentMultipleAlertItemsSimultaneously;
-(void)presentAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)presentsAlertItemsModally;
-(void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

