/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBAlertItemPresenter.h>

@class SBSharedModalAlertItemPresenter, NSString;

@interface SBUnlockedAlertItemPresenter : NSObject <SBAlertItemPresenter> {

	SBSharedModalAlertItemPresenter* _modalAlertPresenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSharedModalAlertItemPresenter:(id)arg1 ;
-(BOOL)canPresentMultipleAlertItemsSimultaneously;
-(void)presentAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)presentsAlertItemsModally;
-(void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

