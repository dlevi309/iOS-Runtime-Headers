/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol NSCopying, HFCharacteristicValueSource;
@class HFItem, NSSet;

@interface HFControlPanelItemProvider : HFItemProvider {

	HFItem*<NSCopying> _item;
	id<HFCharacteristicValueSource> _valueSource;
	/*^block*/id _filter;
	NSSet* _controlPanelItems;

}

@property (nonatomic,copy) NSSet * controlPanelItems;                                    //@synthesize controlPanelItems=_controlPanelItems - In the implementation block
@property (nonatomic,copy,readonly) HFItem*<NSCopying> item;                             //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,copy) id filter;                                                    //@synthesize filter=_filter - In the implementation block
+(BOOL)prefersNonBlockingReloads;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HFItem*<NSCopying>)item;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)reloadItems;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(id)initWithItem:(id)arg1 valueSource:(id)arg2 ;
-(NSSet *)controlPanelItems;
-(void)setControlPanelItems:(NSSet *)arg1 ;
-(/*^block*/id)controlPanelItemComparator;
@end

