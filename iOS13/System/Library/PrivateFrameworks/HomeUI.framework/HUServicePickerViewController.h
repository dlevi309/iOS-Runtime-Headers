/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class NSSet;

@interface HUServicePickerViewController : HUSelectableServiceGridViewController {

	BOOL _isPresentedModally;
	NSSet* _preselectedServices;

}

@property (assign,nonatomic,__weak) id<HUServicePickerViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL isPresentedModally;                                                //@synthesize isPresentedModally=_isPresentedModally - In the implementation block
@property (nonatomic,retain) NSSet * preselectedServices;                                            //@synthesize preselectedServices=_preselectedServices - In the implementation block
-(void)viewDidLoad;
-(BOOL)isPresentedModally;
-(void)_cancel:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(void)setIsPresentedModally:(BOOL)arg1 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(id)initWithHome:(id)arg1 selectedServices:(id)arg2 isPresentedModally:(BOOL)arg3 delegate:(id)arg4 ;
-(BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2 ;
-(void)_setUpNavButtons;
-(id)_servicesForItems:(id)arg1 ;
-(id)_servicesForItem:(id)arg1 ;
-(NSSet *)preselectedServices;
-(BOOL)_isItemPreselected:(id)arg1 ;
-(BOOL)_preselectedServicesContainsService:(id)arg1 ;
-(id)initWithHome:(id)arg1 isPresentedModally:(BOOL)arg2 delegate:(id)arg3 ;
-(void)setPreselectedServices:(NSSet *)arg1 ;
@end

