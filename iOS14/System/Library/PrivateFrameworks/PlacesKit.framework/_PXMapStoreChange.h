/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)addedItems;
-(NSSet *)removedItems;
-(void)setAddedItems:(NSSet *)arg1 ;
-(void)setRemovedItems:(NSSet *)arg1 ;
-(NSSet *)updatedItems;
-(void)setUpdatedItems:(NSSet *)arg1 ;
-(BOOL)hasChanges;
-(void)updateWithChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithAddedItems:(id)arg1 removedItems:(id)arg2 updatedItems:(id)arg3 ;
@end

