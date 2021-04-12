/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HUQuickControlIconView, HFDictionaryValueControlItem, HUQuickControlIconViewProfile;

@interface HUQuickControlIconViewController : HUQuickControlSingleControlViewController {

	HUQuickControlIconView* _quickControlIconView;

}

@property (nonatomic,readonly) HFDictionaryValueControlItem * controlItem; 
@property (nonatomic,readonly) HUQuickControlIconViewProfile * viewProfile; 
@property (nonatomic,retain) HUQuickControlIconView * quickControlIconView;              //@synthesize quickControlIconView=_quickControlIconView - In the implementation block
+(id)controlItemPredicate;
+(Class)controlItemClass;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(void)setQuickControlIconView:(HUQuickControlIconView *)arg1 ;
-(HUQuickControlIconView *)quickControlIconView;
@end

