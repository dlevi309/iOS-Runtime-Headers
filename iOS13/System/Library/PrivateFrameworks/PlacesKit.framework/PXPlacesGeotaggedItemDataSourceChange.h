/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

@class NSSet;


@protocol PXPlacesGeotaggedItemDataSourceChange <NSObject>
@property (readonly) NSSet * addedItems; 
@property (readonly) NSSet * removedItems; 
@property (readonly) NSSet * updatedItems; 
@required
-(BOOL)hasChanges;
-(void)updateWithChange:(id)arg1;
-(NSSet *)addedItems;
-(NSSet *)removedItems;
-(NSSet *)updatedItems;

@end

