/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithItemHost:(id)arg1 ;
-(void)quickControlItemHost:(id)arg1 didUpdateVisibility:(BOOL)arg2 ;
-(HFSimpleItemManager *)itemManager;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(id<HUQuickControlItemHosting>)itemHost;
-(void)_setExternalItemManagerUpdatesDisabled:(BOOL)arg1 ;
@end

