/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGridInlinePlaybackController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGDisplayAssetPixelBufferSourcesProvider.h>
#import <libobjc.A.dylib/PXGRectDiagnosticsProvider.h>

@class PXCuratedLibraryViewModel, PXCuratedLibraryLayout, NSString;

@interface PXCuratedLibraryVideoPlaybackController : PXGridInlinePlaybackController <PXChangeObserver, PXGDisplayAssetPixelBufferSourcesProvider, PXGRectDiagnosticsProvider> {

	PXCuratedLibraryViewModel* _viewModel;
	long long _presentedZoomLevel;
	long long _newZoomLevel;
	PXCuratedLibraryLayout* _curatedLibraryLayout;

}

@property (nonatomic,retain) PXCuratedLibraryLayout * curatedLibraryLayout;              //@synthesize curatedLibraryLayout=_curatedLibraryLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canProvideGeometriesForRecords;
-(id)init;
-(CGRect)currentVisibleRect;
-(BOOL)shouldDisplayPreviousNonnullPixelBufferForPixelBufferSource:(id)arg1 ;
-(CGRect)frameForPlaybackRecord:(id)arg1 minPlayableSize:(out CGSize*)arg2 ;
-(id)pixelBufferSourceForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3 ;
-(void)didUpdatePlayingRecords;
-(void)recyclePixelBufferSourceForDisplayAssets:(id)arg1 ;
-(id)filterSortedRecordsToPlay:(id)arg1 ;
-(void)enumerateRectDiagnosticsForLayout:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initViewViewModel:(id)arg1 ;
-(PXCuratedLibraryLayout *)curatedLibraryLayout;
-(id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3 ;
-(BOOL)_canPlayVideosInZoomLevel:(long long)arg1 ;
-(void)setCuratedLibraryLayout:(PXCuratedLibraryLayout *)arg1 ;
-(BOOL)canUpdatePlayingRecords;
-(BOOL)canPlayAsset:(id)arg1 ;
-(BOOL)shouldEnablePlayback;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

