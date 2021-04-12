/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIImage *)lightGrid;
-(void)_saveLightGrid:(id)arg1 ;
-(void)_cancelSnapshots;
-(void)_saveDarkGrid:(id)arg1 ;
-(void)loadPlaceholderGridImages;
-(UIImage *)darkGrid;
@end

