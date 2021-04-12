/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@interface MKQuadTrie : NSObject {

	unsigned _maxItems;
	CGSize _minSize;
	SCD_Struct_MK6 _initialRegion;
	void* __root;

}
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(BOOL)remove:(id)arg1 ;
-(BOOL)contains:(id)arg1 ;
-(id)allItems;
-(id)initWithInitialRegion:(SCD_Struct_MK6)arg1 minimumSize:(CGSize)arg2 maximumItems:(unsigned)arg3 ;
-(void)foreach:(/*^block*/id)arg1 ;
-(void)insert:(id)arg1 ;
-(id)itemsInMapRect:(SCD_Struct_MK6)arg1 ;
-(id)itemsPassingRectTest:(/*^block*/id)arg1 coordinateTest:(/*^block*/id)arg2 ;
-(void)clearAllItemsPerforming:(/*^block*/id)arg1 ;
-(id)_itemsInMapRect:(SCD_Struct_MK6)arg1 ;
-(id)breadthFirstDescription;
-(id)depthFirstDescription;
-(id)itemDescriptions;
@end

