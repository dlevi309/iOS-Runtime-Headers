/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

@class NSSet;


@protocol PXPlacesGeotaggedItemDataSource <NSObject>
@property (__weak) id<PXPlacesGeotaggedItemDataSourceDelegate> delegate; 
@property (readonly) NSSet * allItems; 
@property (nonatomic,readonly) long long numberOfItems; 
@required
-(NSSet *)allItems;
-(long long)numberOfItems;
-(id<PXPlacesGeotaggedItemDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)findItemsInMapRect:(SCD_Struct_PX2)arg1;
-(SCD_Struct_PX2*)minimalEncompassingMapRect;

@end

