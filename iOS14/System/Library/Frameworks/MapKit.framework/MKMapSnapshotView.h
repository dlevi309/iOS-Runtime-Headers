/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@class MKMapSnapshotter;

@interface MKMapSnapshotView : UIImageView {

	MKMapSnapshotter* _snapshotter;
	MKMapSnapshotter* _gridSnapshotter;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)takeSnapshotWithOptions:(id)arg1 gridOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancel;
@end

