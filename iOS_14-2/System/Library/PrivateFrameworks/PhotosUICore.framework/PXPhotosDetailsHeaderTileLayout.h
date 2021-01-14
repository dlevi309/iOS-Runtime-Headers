/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTilingLayout.h>

@protocol PXPhotosDetailsHeaderTileLayoutDelegate;
@class PXPhotosDetailsHeaderSpec;

@interface PXPhotosDetailsHeaderTileLayout : PXTilingLayout {

	SCD_Struct_PX59 _delegateRespondsTo;
	PXPhotosDetailsHeaderSpec* _spec;
	long long _style;
	id<PXPhotosDetailsHeaderTileLayoutDelegate> _delegate;

}

@property (nonatomic,retain) PXPhotosDetailsHeaderSpec * spec;                                         //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) long long style;                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosDetailsHeaderTileLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXTileIdentifier contentTileIdentifier; 
@property (nonatomic,readonly) CGRect slideshowRect; 
-(CGRect)contentBounds;
-(id)initWithSpec:(id)arg1 ;
-(void)setSpec:(PXPhotosDetailsHeaderSpec *)arg1 ;
-(void)setReferenceSize:(CGSize)arg1 ;
-(id)init;
-(id<PXPhotosDetailsHeaderTileLayoutDelegate>)delegate;
-(long long)tileKindForTileIdentifier:(PXTileIdentifier)arg1 ;
-(id)_viewSpecForTileWithIdentifier:(PXTileIdentifier)arg1 boundingSize:(CGSize)arg2 ;
-(double)_zPositionForTileWithIdentifier:(PXTileIdentifier)arg1 ;
-(PXPhotosDetailsHeaderSpec *)spec;
-(void)setDelegate:(id<PXPhotosDetailsHeaderTileLayoutDelegate>)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(CGRect)slideshowRect;
-(CGRect)_rectForTileWithIdentifier:(PXTileIdentifier)arg1 ;
-(id)_userDataForTileWithIdentifier:(PXTileIdentifier)arg1 inContainingRect:(CGRect)arg2 ;
-(PXTileIdentifier)tileIdentifierForTileKind:(long long)arg1 ;
-(PXTileIdentifier)contentTileIdentifier;
-(CGRect)_contentsRectForAspectRatio:(double)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
@end

