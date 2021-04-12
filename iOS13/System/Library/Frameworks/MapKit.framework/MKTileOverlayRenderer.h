/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@protocol OS_dispatch_queue;
@class GEOTileKeyList, NSObject;

@interface MKTileOverlayRenderer : MKOverlayRenderer {

	GEOTileKeyList* _pendingRequests;
	NSObject*<OS_dispatch_queue> _pendingRequestsLock;

}
-(void)reloadData;
-(id)initWithOverlay:(id)arg1 ;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)canDrawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 ;
-(BOOL)_mayExtendOutsideBounds;
-(id)initWithTileOverlay:(id)arg1 ;
@end

