/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBAlertItemPresenter.h>
#import <libobjc.A.dylib/SBLockScreenActionProvider.h>

@class SBSharedModalAlertItemPresenter, NSString;

@interface SBLockedModalAlertItemPresenter : NSObject <SBAlertItemPresenter, SBLockScreenActionProvider> {

	SBSharedModalAlertItemPresenter* _modalAlertPresenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)lockScreenActionContext;
-(id)initWithSharedModalAlertItemPresenter:(id)arg1 ;
-(BOOL)canPresentMultipleAlertItemsSimultaneously;
-(void)presentAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)presentsAlertItemsModally;
-(void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

