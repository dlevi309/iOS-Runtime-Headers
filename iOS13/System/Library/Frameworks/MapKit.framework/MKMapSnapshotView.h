/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@class MKMapSnapshotter;

@interface MKMapSnapshotView : UIImageView {

	MKMapSnapshotter* _snapshotter;
	MKMapSnapshotter* _gridSnapshotter;

}
-(void)cancel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)takeSnapshotWithOptions:(id)arg1 gridOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

