/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(CGSize)preferredContentSize;
-(void)cancelButtonTapped;
-(void)doneButtonTapped;
-(unsigned long long)_paletteType;
-(void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2 ;
-(id)overrideStatusText;
-(void)setColorViewController:(HUQuickControlColorViewController *)arg1 ;
-(HUQuickControlColorViewController *)colorViewController;
-(void)setPresentingColorViewController:(HUQuickControlColorViewController *)arg1 ;
-(HUQuickControlColorViewController *)presentingColorViewController;
-(void)didSelectColorAtIndexPath:(id)arg1 ;
-(void)interactionCoordinator:(id)arg1 colorPaletteDidChange:(id)arg2 ;
-(void)presentFullColorViewForInteractionCoordinator:(id)arg1 selectedColorIndexPath:(id)arg2 ;
-(void)interactionCoordinator:(id)arg1 didSelectColorAtIndexPath:(id)arg2 ;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(id)controlToViewValueTransformer;
-(NSIndexPath *)selectedColorIndexPath;
-(void)setSelectedColorIndexPath:(NSIndexPath *)arg1 ;
@end

