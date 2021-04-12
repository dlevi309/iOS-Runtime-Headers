/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMutableArray;

@interface GEOMutableURLQueryItems : NSObject {

	NSMutableArray* _items;

}

@property (nonatomic,readonly) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
-(id)init;
-(NSMutableArray *)items;
-(void)addItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)addItemWithName:(id)arg1 value:(id)arg2 ;
-(void)addItemsFromArray:(id)arg1 ;
-(void)addItemWithName:(id)arg1 intValue:(int)arg2 ;
-(void)addItemWithName:(id)arg1 uintValue:(unsigned)arg2 ;
-(void)addItemWithName:(id)arg1 uint64Value:(unsigned long long)arg2 ;
@end

