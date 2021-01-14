/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSOrderedSet * layoutItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)setItems:(NSMutableOrderedSet *)arg1 ;
-(id)init;
-(void)addItems:(id)arg1 ;
-(NSMutableOrderedSet *)items;
-(NSString *)description;
-(NSOrderedSet *)layoutItems;
-(PXPlacesMapViewPort *)viewPort;
-(void)setViewPort:(PXPlacesMapViewPort *)arg1 ;
@end

