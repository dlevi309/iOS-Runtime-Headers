/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <libobjc.A.dylib/PXPlacesMapLayoutResult.h>

@class NSOrderedSet, PXPlacesMapViewPort, NSMutableOrderedSet, NSString;

@interface PXPlacesMapLayoutResultImpl : NSObject <PXPlacesMapLayoutResult> {

	PXPlacesMapViewPort* _viewPort;
	NSMutableOrderedSet* _items;

}

@property (nonatomic,retain) NSMutableOrderedSet * items;                 //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) PXPlacesMapViewPort * viewPort;              //@synthesize viewPort=_viewPort - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSOrderedSet * layoutItems; 
-(id)init;
-(NSString *)description;
-(void)removeItem:(id)arg1 ;
-(NSMutableOrderedSet *)items;
-(void)setItems:(NSMutableOrderedSet *)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(NSOrderedSet *)layoutItems;
-(PXPlacesMapViewPort *)viewPort;
-(void)setViewPort:(PXPlacesMapViewPort *)arg1 ;
@end

