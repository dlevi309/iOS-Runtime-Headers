/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesGeotaggedItemDataSource.h>

@protocol OS_dispatch_semaphore, PXPlacesGeotaggedItemDataSourceDelegate;
@class NSSet, NSObject, NSMutableSet, NSMutableArray, NSString;

@interface PXPlacesStore : NSObject <PXPlacesGeotaggedItemDataSource> {

	PXQuadTreeStoreNode* _rootNode;
	Ai _updateCount;
	opaque_pthread_rwlock_t _rwlock;
	NSObject*<OS_dispatch_semaphore> _itemChangeSemaphore;
	long long _numberOfItems;
	id<PXPlacesGeotaggedItemDataSourceDelegate> _delegate;
	unsigned long long _capacityPerNode;
	NSMutableSet* _itemsToAdd;
	NSMutableArray* _itemsToAddArray;
	NSMutableSet* _itemsToRemove;
	SCD_Struct_PX2 _rect;

}

@property (assign) SCD_Struct_PX2 rect;                                               //@synthesize rect=_rect - In the implementation block
@property (retain) NSMutableSet * itemsToAdd;                                         //@synthesize itemsToAdd=_itemsToAdd - In the implementation block
@property (retain) NSMutableArray * itemsToAddArray;                                  //@synthesize itemsToAddArray=_itemsToAddArray - In the implementation block
@property (retain) NSMutableSet * itemsToRemove;                                      //@synthesize itemsToRemove=_itemsToRemove - In the implementation block
@property (assign) id<PXPlacesGeotaggedItemDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long capacityPerNode;                              //@synthesize capacityPerNode=_capacityPerNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSSet * allItems; 
@property (nonatomic,readonly) long long numberOfItems;                               //@synthesize numberOfItems=_numberOfItems - In the implementation block
+(id)traceStoreQueryLog;
+(id)traceStoreLog;
-(id)init;
-(void)dealloc;
-(id<PXPlacesGeotaggedItemDataSourceDelegate>)delegate;
-(void)setDelegate:(id<PXPlacesGeotaggedItemDataSourceDelegate>)arg1 ;
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(SCD_Struct_PX2)rect;
-(long long)numberOfItems;
-(void)setRect:(SCD_Struct_PX2)arg1 ;
-(void)addItems:(id)arg1 ;
-(void)beginUpdates;
-(void)endUpdates;
-(void)addItemsFromArray:(id)arg1 ;
-(void)removeItems:(id)arg1 ;
-(NSSet *)allItems;
-(void)_commitChanges;
-(id)findItemsInMapRect:(SCD_Struct_PX2)arg1 ;
-(SCD_Struct_PX2)minimalEncompassingMapRect;
-(id)initWithCapacityPerNode:(unsigned long long)arg1 ;
-(id)_findItemsInMapRect:(SCD_Struct_PX2)arg1 ;
-(void)runNodeDebugCollector:(/*^block*/id)arg1 ;
-(unsigned long long)capacityPerNode;
-(NSMutableSet *)itemsToAdd;
-(void)setItemsToAdd:(NSMutableSet *)arg1 ;
-(NSMutableArray *)itemsToAddArray;
-(void)setItemsToAddArray:(NSMutableArray *)arg1 ;
-(NSMutableSet *)itemsToRemove;
-(void)setItemsToRemove:(NSMutableSet *)arg1 ;
@end

