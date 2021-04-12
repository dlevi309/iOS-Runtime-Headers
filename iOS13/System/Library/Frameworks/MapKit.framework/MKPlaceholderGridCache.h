/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class MKMapSnapshotter, UIImage;

@interface MKPlaceholderGridCache : NSObject {

	os_unfair_lock_s _lock;
	os_unfair_lock_s _snapshotterLock;
	MKMapSnapshotter* _lightSnapshotter;
	MKMapSnapshotter* _darkSnapshotter;
	UIImage* _lightGrid;
	UIImage* _darkGrid;

}

@property (nonatomic,readonly) UIImage * lightGrid;              //@synthesize lightGrid=_lightGrid - In the implementation block
@property (nonatomic,readonly) UIImage * darkGrid;               //@synthesize darkGrid=_darkGrid - In the implementation block
+(id)unretainedInstance;
-(id)init;
-(void)_cancelSnapshots;
-(void)_saveLightGrid:(id)arg1 ;
-(void)_saveDarkGrid:(id)arg1 ;
-(void)loadPlaceholderGridImages;
-(UIImage *)lightGrid;
-(UIImage *)darkGrid;
@end

