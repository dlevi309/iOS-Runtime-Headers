/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <libobjc.A.dylib/PXPlacesGeotaggedItemDataSourceChange.h>

@class NSSet, NSString;

@interface _PXMapStoreChange : NSObject <PXPlacesGeotaggedItemDataSourceChange> {

	NSSet* _addedItems;
	NSSet* _removedItems;
	NSSet* _updatedItems;

}

@property (retain) NSSet * addedItems;                              //@synthesize addedItems=_addedItems - In the implementation block
@property (retain) NSSet * removedItems;                            //@synthesize removedItems=_removedItems - In the implementation block
@property (retain) NSSet * updatedItems;                            //@synthesize updatedItems=_updatedItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)hasChanges;
-(void)updateWithChange:(id)arg1 ;
-(NSSet *)addedItems;
-(void)setAddedItems:(NSSet *)arg1 ;
-(NSSet *)removedItems;
-(void)setRemovedItems:(NSSet *)arg1 ;
-(NSSet *)updatedItems;
-(void)setUpdatedItems:(NSSet *)arg1 ;
-(id)initWithAddedItems:(id)arg1 removedItems:(id)arg2 updatedItems:(id)arg3 ;
@end

