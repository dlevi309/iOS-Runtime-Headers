/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MKMapCamera *)camera;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(BOOL)isLoading;
-(id)initWithMapItems:(id)arg1 mapSize:(CGSize)arg2 useSnapshotService:(BOOL)arg3 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_initSnapshotterWithMapItems;
-(void)cancel;
@end

