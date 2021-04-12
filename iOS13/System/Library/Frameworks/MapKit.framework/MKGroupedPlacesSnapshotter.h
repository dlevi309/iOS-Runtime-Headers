/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class NSArray, MKMapSnapshotOptions, MKMapSnapshotter, UITraitCollection, MKMapCamera;

@interface MKGroupedPlacesSnapshotter : NSObject {

	NSArray* _mapItems;
	CGSize _mapSize;
	MKMapSnapshotOptions* _snapshotOptions;
	BOOL _useSnapshotService;
	MKMapSnapshotter* _snapshotter;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,readonly) MKMapCamera * camera; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,retain) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
-(void)cancel;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isLoading;
-(MKMapCamera *)camera;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithMapItems:(id)arg1 mapSize:(CGSize)arg2 useSnapshotService:(BOOL)arg3 ;
-(void)_initSnapshotterWithMapItems;
@end

