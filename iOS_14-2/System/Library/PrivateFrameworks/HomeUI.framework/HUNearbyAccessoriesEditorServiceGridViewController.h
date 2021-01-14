/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUSelectableServiceGridViewController.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>

@class HMAccessory, HFItemManager, NSString;

@interface HUNearbyAccessoriesEditorServiceGridViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate> {

	HMAccessory* _primaryAccessory;

}

@property (nonatomic,retain) HMAccessory * primaryAccessory;              //@synthesize primaryAccessory=_primaryAccessory - In the implementation block
@property (nonatomic,readonly) HFItemManager * itemManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)defaultItemProviderCreatorWithOptions:(unsigned long long)arg1 accessoryProfileItem:(id)arg2 ;
-(BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2 ;
-(id)initWithAccessoryProfileSourceItem:(id)arg1 ;
-(HMAccessory *)primaryAccessory;
-(void)setPrimaryAccessory:(HMAccessory *)arg1 ;
@end

