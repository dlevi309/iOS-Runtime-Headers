/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXReusableObjectPoolDelegate.h>
#import <libobjc.A.dylib/PXTileSource.h>
#import <libobjc.A.dylib/PXTilingControllerPreheatHandler.h>

@protocol PXMemoriesUITileSourceDelegate;
@class NSMutableSet, PXReusableObjectPool, PXUIScrollViewController, NSIndexSet, PXPhotoKitUIMediaProvider, PXFeedDateFormatter, NSString;

@interface PXMemoriesUITileSource : NSObject <PXReusableObjectPoolDelegate, PXTileSource, PXTilingControllerPreheatHandler> {

	NSMutableSet* _checkedOutTiles;
	SCD_Struct_PX38 _delegateRespondsTo;
	BOOL _canRenderTextAsynchronously;
	PXReusableObjectPool* _viewTilePool;
	PXUIScrollViewController* _scrollViewController;
	NSIndexSet* _providingTilesForKinds;
	id<PXMemoriesUITileSourceDelegate> _delegate;
	PXPhotoKitUIMediaProvider* __mediaProvider;
	PXFeedDateFormatter* __dateFormatter;
	unsigned long long __memoriesStyle;

}

@property (nonatomic,readonly) PXPhotoKitUIMediaProvider * _mediaProvider;                    //@synthesize _mediaProvider=__mediaProvider - In the implementation block
@property (nonatomic,readonly) PXFeedDateFormatter * _dateFormatter;                          //@synthesize _dateFormatter=__dateFormatter - In the implementation block
@property (nonatomic,readonly) unsigned long long _memoriesStyle;                             //@synthesize _memoriesStyle=__memoriesStyle - In the implementation block
@property (nonatomic,readonly) PXReusableObjectPool * viewTilePool;                           //@synthesize viewTilePool=_viewTilePool - In the implementation block
@property (nonatomic,readonly) PXUIScrollViewController * scrollViewController;               //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (assign,nonatomic) BOOL canRenderTextAsynchronously;                                //@synthesize canRenderTextAsynchronously=_canRenderTextAsynchronously - In the implementation block
@property (nonatomic,readonly) NSIndexSet * providingTilesForKinds;                           //@synthesize providingTilesForKinds=_providingTilesForKinds - In the implementation block
@property (assign,nonatomic,__weak) id<PXMemoriesUITileSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXFeedDateFormatter *)_dateFormatter;
-(PXUIScrollViewController *)scrollViewController;
-(id<PXMemoriesUITileSourceDelegate>)delegate;
-(PXPhotoKitUIMediaProvider *)_mediaProvider;
-(void)_dateFormatterChanged:(id)arg1 ;
-(void)startPreheatingTilesForIdentifiers:(const PXTileIdentifier*)arg1 withGeometries:(const PXTileGeometry*)arg2 count:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)stopPreheatingTilesForIdentifiers:(const PXTileIdentifier*)arg1 withGeometries:(const PXTileGeometry*)arg2 count:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2 ;
-(void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2 ;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(id)_assetsBySizeWithTileIdentifiers:(const PXTileIdentifier*)arg1 withGeometries:(const PXTileGeometry*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)_memoriesStyle;
-(id)initWithScrollViewController:(id)arg1 memoriesStyle:(unsigned long long)arg2 ;
-(BOOL)providesTileForIdentifier:(PXTileIdentifier)arg1 ;
-(PXReusableObjectPool *)viewTilePool;
-(void)setCanRenderTextAsynchronously:(BOOL)arg1 ;
-(void)_getImageRequester:(id*)arg1 title:(id*)arg2 subtitle:(id*)arg3 forIndexPath:(PXSimpleIndexPath)arg4 dataSource:(id)arg5 ;
-(void)_updateDateLabelTile:(id)arg1 ;
-(BOOL)canRenderTextAsynchronously;
-(NSIndexSet *)providingTilesForKinds;
-(void)setDelegate:(id<PXMemoriesUITileSourceDelegate>)arg1 ;
-(void*)_tileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(void)dealloc;
@end

