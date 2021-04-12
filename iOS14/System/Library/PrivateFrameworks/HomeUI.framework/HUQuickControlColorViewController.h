/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlSingleControlViewController.h>
#import <libobjc.A.dylib/HUQuickControlColorInteractionCoordinatorDelegate.h>

@class NSIndexPath, HFColorControlItem, HUQuickControlColorViewProfile, NSString;

@interface HUQuickControlColorViewController : HUQuickControlSingleControlViewController <HUQuickControlColorInteractionCoordinatorDelegate> {

	unsigned long long _mode;
	NSIndexPath* _selectedColorIndexPath;
	HUQuickControlColorViewController* _colorViewController;
	HUQuickControlColorViewController* _presentingColorViewController;

}

@property (nonatomic,readonly) HFColorControlItem * controlItem; 
@property (nonatomic,readonly) HUQuickControlColorViewProfile * viewProfile; 
@property (assign,nonatomic) unsigned long long mode;                                                               //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedColorIndexPath;                                                  //@synthesize selectedColorIndexPath=_selectedColorIndexPath - In the implementation block
@property (nonatomic,retain) HUQuickControlColorViewController * colorViewController;                               //@synthesize colorViewController=_colorViewController - In the implementation block
@property (assign,nonatomic,__weak) HUQuickControlColorViewController * presentingColorViewController;              //@synthesize presentingColorViewController=_presentingColorViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)controlItemClass;
-(unsigned long long)mode;
-(void)setMode:(unsigned long long)arg1 ;
-(void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2 ;
-(id)overrideStatusText;
-(unsigned long long)_paletteType;
-(void)cancelButtonTapped;
-(CGSize)preferredContentSize;
-(void)doneButtonTapped;
-(void)updateValueFromControlItem;
-(void)setColorViewController:(HUQuickControlColorViewController *)arg1 ;
-(HUQuickControlColorViewController *)colorViewController;
-(void)setPresentingColorViewController:(HUQuickControlColorViewController *)arg1 ;
-(HUQuickControlColorViewController *)presentingColorViewController;
-(void)didSelectColorAtIndexPath:(id)arg1 ;
-(id)controlToViewValueTransformer;
-(void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2 ;
-(void)interactionCoordinator:(id)arg1 colorPaletteDidChange:(id)arg2 ;
-(void)presentFullColorViewForInteractionCoordinator:(id)arg1 selectedColorIndexPath:(id)arg2 ;
-(void)interactionCoordinator:(id)arg1 didSelectColorAtIndexPath:(id)arg2 ;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(NSIndexPath *)selectedColorIndexPath;
-(void)setSelectedColorIndexPath:(NSIndexPath *)arg1 ;
@end

