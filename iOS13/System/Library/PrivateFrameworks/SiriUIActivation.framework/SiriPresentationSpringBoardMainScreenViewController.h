/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
*/

#import <SiriUIActivation/SiriUIActivation-Structs.h>
#import <SiriUIActivation/SiriPresentationViewController.h>

@interface SiriPresentationSpringBoardMainScreenViewController : SiriPresentationViewController

@property (nonatomic,retain) id<SiriPresentationSpringBoardMainScreenViewControllerDelegate> siriPresentationControllerDelegate; 
-(id)init;
-(id)initWithIdentifier:(long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)initWithIdentifier:(long long)arg1 hostedPresentationFrame:(CGRect)arg2 ;
-(void)prewarmFlamesWithPresentationFrame:(CGRect)arg1 ;
-(void)setShowsStatusBar:(BOOL)arg1 ;
-(void)setFluidDismissalState:(id)arg1 ;
-(void)requestPasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
@end

