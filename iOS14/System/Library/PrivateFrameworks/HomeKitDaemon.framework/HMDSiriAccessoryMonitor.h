/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDSiriAccessoryMonitorDelegate;
@class NSMapTable;

@interface HMDSiriAccessoryMonitor : NSObject {

	id<HMDSiriAccessoryMonitorDelegate> _delegate;
	NSMapTable* _accessories;

}

@property (nonatomic,__weak,readonly) id<HMDSiriAccessoryMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMapTable * accessories;                                           //@synthesize accessories=_accessories - In the implementation block
-(id<HMDSiriAccessoryMonitorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setAccessories:(NSMapTable *)arg1 ;
-(NSMapTable *)accessories;
-(void)_removeAccessory:(id)arg1 ;
-(id)_getInfoForAccessory:(id)arg1 ;
-(BOOL)hasAnyActiveTargetingAccessories;
-(id)_accessoriesTargetingAccessory:(id)arg1 ;
-(void)_addAccessory:(id)arg1 withTarget:(id)arg2 ;
-(void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2 ;
-(void)accessory:(id)arg1 setSupportsDragonSiri:(BOOL)arg2 ;
@end

