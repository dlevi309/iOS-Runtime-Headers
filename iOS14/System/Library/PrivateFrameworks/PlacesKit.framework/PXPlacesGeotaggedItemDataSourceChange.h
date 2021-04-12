/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

@class NSSet;


@protocol PXPlacesGeotaggedItemDataSourceChange <NSObject>
@property (readonly) NSSet * addedItems; 
@property (readonly) NSSet * removedItems; 
@property (readonly) NSSet * updatedItems; 
@required
-(NSSet *)addedItems;
-(NSSet *)removedItems;
-(NSSet *)updatedItems;
-(BOOL)hasChanges;
-(void)updateWithChange:(id)arg1;

@end

