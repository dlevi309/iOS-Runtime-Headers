/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKAnnotationRepresentation <NSObject>
@required
-(void)prepareForReuse;
-(BOOL)isPersistent;
-(id)reuseIdentifier;
-(id)viewRepresentation;
-(BOOL)_shouldDeselectWhenDragged;
-(void)_setHiddenForOffscreen:(BOOL)arg1;
-(void)_invalidateCachedCoordinate;
-(BOOL)_isPendingSelectionAnimated;

@end

