/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@interface MKQuadTrie : NSObject {

	unsigned _maxItems;
	CGSize _minSize;
	SCD_Struct_MK6 _initialRegion;
	void* __root;

}
-(BOOL)remove:(id)arg1 ;
-(id)allItems;
-(id)_itemsInMapRect:(SCD_Struct_MK6)arg1 ;
-(unsigned long long)count;
-(id)itemsPassingRectTest:(/*^block*/id)arg1 coordinateTest:(/*^block*/id)arg2 ;
-(id)initWithInitialRegion:(SCD_Struct_MK6)arg1 minimumSize:(CGSize)arg2 maximumItems:(unsigned)arg3 ;
-(id)itemDescriptions;
-(id)description;
-(void)clearAllItemsPerforming:(/*^block*/id)arg1 ;
-(void)foreach:(/*^block*/id)arg1 ;
-(BOOL)contains:(id)arg1 ;
-(id)itemsInMapRect:(SCD_Struct_MK6)arg1 ;
-(id)depthFirstDescription;
-(void)dealloc;
-(id)breadthFirstDescription;
-(void)insert:(id)arg1 ;
@end

