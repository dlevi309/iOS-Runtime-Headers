/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUCCMosaicOrderable.h>

@protocol HFHomeKitItemProtocol;
@class HFItem;

@interface HUCCMosaicItem : NSObject <HUCCMosaicOrderable> {

	unsigned long long _itemType;
	unsigned long long _itemSize;
	double _itemPriority;
	HFItem*<HFHomeKitItemProtocol> _baseItem;

}

@property (assign,nonatomic) unsigned long long itemType;                          //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) unsigned long long itemSize;                          //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) double itemPriority;                                  //@synthesize itemPriority=_itemPriority - In the implementation block
@property (nonatomic,retain) HFItem*<HFHomeKitItemProtocol> baseItem;              //@synthesize baseItem=_baseItem - In the implementation block
-(unsigned long long)itemSize;
-(id)init;
-(void)setItemType:(unsigned long long)arg1 ;
-(unsigned long long)itemType;
-(double)itemPriority;
-(void)setItemPriority:(double)arg1 ;
-(HFItem*<HFHomeKitItemProtocol>)baseItem;
-(void)setItemSize:(unsigned long long)arg1 ;
-(void)setBaseItem:(HFItem*<HFHomeKitItemProtocol>)arg1 ;
-(id)initWithBaseItem:(id)arg1 ;
@end

