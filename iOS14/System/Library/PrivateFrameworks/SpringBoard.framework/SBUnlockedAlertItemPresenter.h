/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)canPresentMultipleAlertItemsSimultaneously;
-(void)presentAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSharedModalAlertItemPresenter:(id)arg1 ;
-(BOOL)presentsAlertItemsModally;
@end

