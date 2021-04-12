/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HFCharacteristicValueSource, HUQuickControlItemUpdating;
@class HMHome;

@interface HUQuickControlViewControllerConfiguration : NSObject {

	BOOL _copyItems;
	HMHome* _home;
	id<HFCharacteristicValueSource> _valueSource;
	id<HUQuickControlItemUpdating> _itemUpdater;

}

@property (nonatomic,readonly) HMHome * home;                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,retain) id<HUQuickControlItemUpdating> itemUpdater;               //@synthesize itemUpdater=_itemUpdater - In the implementation block
@property (assign,nonatomic) BOOL copyItems;                                           //@synthesize copyItems=_copyItems - In the implementation block
-(HMHome *)home;
-(id)initWithHome:(id)arg1 ;
-(id<HUQuickControlItemUpdating>)itemUpdater;
-(BOOL)copyItems;
-(id<HFCharacteristicValueSource>)valueSource;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(void)setCopyItems:(BOOL)arg1 ;
-(void)setItemUpdater:(id<HUQuickControlItemUpdating>)arg1 ;
@end

