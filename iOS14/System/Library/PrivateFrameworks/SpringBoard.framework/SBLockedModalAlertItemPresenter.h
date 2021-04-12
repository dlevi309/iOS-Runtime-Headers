/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)lockScreenActionContext;
-(BOOL)canPresentMultipleAlertItemsSimultaneously;
-(void)presentAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSharedModalAlertItemPresenter:(id)arg1 ;
-(BOOL)presentsAlertItemsModally;
@end

