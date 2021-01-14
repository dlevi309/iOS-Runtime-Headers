/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSString, PHFetchResult, PHPhotosHighlight;

@interface PUCurationTripKeyAssetBrowserDebugViewController : PUPhotosAlbumViewController {

	NSString* _tripKeyAssetUUID;
	PHFetchResult* _childHighlights;
	PHPhotosHighlight* _tripHighlight;

}

@property (nonatomic,retain) PHPhotosHighlight * tripHighlight;              //@synthesize tripHighlight=_tripHighlight - In the implementation block
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)updateSpec;
-(void)viewDidLoad;
-(void)_update;
-(void)setTripHighlight:(PHPhotosHighlight *)arg1 ;
-(PHPhotosHighlight *)tripHighlight;
@end

