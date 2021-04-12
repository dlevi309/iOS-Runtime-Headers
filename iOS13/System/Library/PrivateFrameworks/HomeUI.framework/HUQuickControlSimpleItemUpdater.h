/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUQuickControlItemUpdating.h>

@protocol HUQuickControlItemHosting;
@class HFSimpleItemManager, NSString;

@interface HUQuickControlSimpleItemUpdater : NSObject <HFItemManagerDelegate, HUQuickControlItemUpdating> {

	id<HUQuickControlItemHosting> _itemHost;
	HFSimpleItemManager* _itemManager;

}

@property (nonatomic,readonly) HFSimpleItemManager * itemManager;                          //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,__weak,readonly) id<HUQuickControlItemHosting> itemHost;              //@synthesize itemHost=_itemHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(HFSimpleItemManager *)itemManager;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(id)initWithItemHost:(id)arg1 ;
-(void)quickControlItemHost:(id)arg1 didUpdateVisibility:(BOOL)arg2 ;
-(id<HUQuickControlItemHosting>)itemHost;
-(void)_setExternalItemManagerUpdatesDisabled:(BOOL)arg1 ;
@end

