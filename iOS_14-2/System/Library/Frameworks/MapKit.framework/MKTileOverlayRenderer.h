/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTileOverlay:(id)arg1 ;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(id)initWithOverlay:(id)arg1 ;
-(BOOL)canDrawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 ;
-(BOOL)_mayExtendOutsideBounds;
@end

