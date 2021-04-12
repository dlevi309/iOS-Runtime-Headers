/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id<HUQuickControlItemUpdating>)itemUpdater;
-(id<HFCharacteristicValueSource>)valueSource;
-(HMHome *)home;
-(void)setCopyItems:(BOOL)arg1 ;
-(void)setItemUpdater:(id<HUQuickControlItemUpdating>)arg1 ;
-(BOOL)copyItems;
@end

