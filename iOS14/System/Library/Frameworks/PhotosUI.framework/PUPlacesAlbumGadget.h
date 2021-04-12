/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAlbumGadget.h>
#import <libobjc.A.dylib/PXPlacesSnapshotFactoryDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PUAlbumListCellContentView, NSString, PXPlacesAlbumCoverProvider;

@interface PUPlacesAlbumGadget : PUAlbumGadget <PXPlacesSnapshotFactoryDelegate, PXChangeObserver> {

	PUAlbumListCellContentView* _albumListCellContentView;
	NSString* _title;
	PXPlacesAlbumCoverProvider* _placesAlbumCoverProvider;

}

@property (nonatomic,readonly) PXPlacesAlbumCoverProvider * placesAlbumCoverProvider;              //@synthesize placesAlbumCoverProvider=_placesAlbumCoverProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)albumListCellContentView;
-(id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2 ;
-(void)placesSnapshotDidChange;
-(PXPlacesAlbumCoverProvider *)placesAlbumCoverProvider;
-(void)_updateSubtitleInContentView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_extendedTraitCollectionDidChange:(unsigned long long)arg1 ;
-(void)_updateImageInContentView:(id)arg1 animated:(BOOL)arg2 ;
-(void)placesSnapshotCountDidChange;
-(id)title;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

