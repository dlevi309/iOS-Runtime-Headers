/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXEngineDrivenAssetsTilingLayout.h>

@class PXCMMAssetStatusBadgeTileUserData;

@interface PXCMMEngineDrivenLayout : PXEngineDrivenAssetsTilingLayout {

	BOOL _hasFloatingBanner;
	BOOL _hasFloatingSectionHeaders;
	BOOL _headerViewIsVisible;
	long long _layoutType;
	double _headerHeight;
	double _bannerHeight;
	double _statusFooterHeight;
	double _sendBackFooterHeight;
	long long _placeholderMode;
	double _headerTopInset;
	double _footerBottomInset;
	double _headerFooterSideInset;
	PXCMMAssetStatusBadgeTileUserData* __copiedUserData;
	PXCMMAssetStatusBadgeTileUserData* __failedUserData;
	UIEdgeInsets _reviewSafeAreaInsets;

}

@property (nonatomic,readonly) PXCMMAssetStatusBadgeTileUserData * _copiedUserData;              //@synthesize _copiedUserData=__copiedUserData - In the implementation block
@property (nonatomic,readonly) PXCMMAssetStatusBadgeTileUserData * _failedUserData;              //@synthesize _failedUserData=__failedUserData - In the implementation block
@property (assign,nonatomic) BOOL headerViewIsVisible;                                           //@synthesize headerViewIsVisible=_headerViewIsVisible - In the implementation block
@property (nonatomic,readonly) long long layoutType;                                             //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) double headerHeight;                                              //@synthesize headerHeight=_headerHeight - In the implementation block
@property (nonatomic,readonly) double bannerHeight;                                              //@synthesize bannerHeight=_bannerHeight - In the implementation block
@property (nonatomic,readonly) double statusFooterHeight;                                        //@synthesize statusFooterHeight=_statusFooterHeight - In the implementation block
@property (nonatomic,readonly) double sendBackFooterHeight;                                      //@synthesize sendBackFooterHeight=_sendBackFooterHeight - In the implementation block
@property (assign,nonatomic) long long placeholderMode;                                          //@synthesize placeholderMode=_placeholderMode - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMEngineDrivenLayoutDelegate> delegate; 
@property (assign,nonatomic) BOOL hasFloatingBanner;                                             //@synthesize hasFloatingBanner=_hasFloatingBanner - In the implementation block
@property (assign,nonatomic) BOOL hasFloatingSectionHeaders;                                     //@synthesize hasFloatingSectionHeaders=_hasFloatingSectionHeaders - In the implementation block
@property (assign,nonatomic) double headerTopInset;                                              //@synthesize headerTopInset=_headerTopInset - In the implementation block
@property (assign,nonatomic) double footerBottomInset;                                           //@synthesize footerBottomInset=_footerBottomInset - In the implementation block
@property (assign,nonatomic) double headerFooterSideInset;                                       //@synthesize headerFooterSideInset=_headerFooterSideInset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets reviewSafeAreaInsets;                                  //@synthesize reviewSafeAreaInsets=_reviewSafeAreaInsets - In the implementation block
+(id)_additionalTileKinds;
-(CGRect)contentBounds;
-(long long)layoutType;
-(CGRect)_headerFrame;
-(id)initWithDataSource:(id)arg1 ;
-(double)bannerHeight;
-(id)initWithLayoutEngineSnapshot:(id)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(BOOL)getAdditionalTileIdentifier:(PXTileIdentifier*)arg1 group:(unsigned long long*)arg2 layoutGeometryKind:(unsigned long long)arg3 indexPath:(PXSimpleIndexPath)arg4 ;
-(void)adjustGeometry:(PXTileGeometry*)arg1 forAdditionalTileWithKind:(unsigned long long)arg2 indexPath:(PXSimpleIndexPath)arg3 ;
-(double)statusFooterHeight;
-(double)sendBackFooterHeight;
-(id)initWithLayoutEngineSnapshot:(id)arg1 configuration:(id)arg2 ;
-(void)setPlaceholderMode:(long long)arg1 ;
-(BOOL)sendBackBannerViewIsVisible:(UIEdgeInsets)arg1 ;
-(BOOL)headerViewIsVisible;
-(void)setHasFloatingBanner:(BOOL)arg1 ;
-(void)setHasFloatingSectionHeaders:(BOOL)arg1 ;
-(void)setHeaderTopInset:(double)arg1 ;
-(void)setFooterBottomInset:(double)arg1 ;
-(void)setHeaderFooterSideInset:(double)arg1 ;
-(void)setReviewSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)updateAssetStatusBadgeTiles;
-(void)_invalidateSectionHeaders;
-(void)_invalidateBanner;
-(void)_invalidateStatusFooter;
-(void)_invalidateSendBackFooter;
-(void)_invalidateAssetStatusBadgeTiles;
-(PXTileIdentifier)_identifierForUniqueTileWithKind:(unsigned long long)arg1 ;
-(PXTileIdentifier)_headerTileIdentifier;
-(CGRect)_bannerFrame;
-(PXTileIdentifier)_bannerTileIdentifier;
-(CGRect)_statusFooterFrame;
-(PXTileIdentifier)_statusFooterTileIdentifier;
-(CGRect)_sendBackFooterFrame;
-(CGRect)_placeholderFrame;
-(PXTileIdentifier)_sendBackFooterTileIdentifier;
-(PXTileIdentifier)_placeholderTileIdentifier;
-(CGRect)_sectionHeaderTileFrame;
-(unsigned long long)_generatorGeometryKindForTileKind:(unsigned long long)arg1 ;
-(unsigned long long)_gridGeneratorGeometryKindForTileKind:(unsigned long long)arg1 ;
-(unsigned long long)_editorialGeneratorGeometryKindForTileKind:(unsigned long long)arg1 ;
-(long long)placeholderMode;
-(CGSize)_preferredSelectionBadgeSize;
-(BOOL)getAdditionalAccessoryTileIdentifier:(out PXTileIdentifier*)arg1 outGeometry:(out PXTileGeometry*)arg2 group:(out unsigned long long*)arg3 userData:(out id*)arg4 forTileKind:(unsigned long long)arg5 contentTileGeometry:(const PXTileGeometry*)arg6 indexPath:(PXSimpleIndexPath)arg7 ;
-(BOOL)_getAdditionalTileIdentifierForGrid:(out PXTileIdentifier*)arg1 group:(out unsigned long long*)arg2 layoutGeometryKind:(long long)arg3 indexPath:(PXSimpleIndexPath)arg4 ;
-(BOOL)_getDuplicateTileIdentifier:(PXTileIdentifier*)arg1 outGeometry:(PXTileGeometry*)arg2 group:(unsigned long long*)arg3 userData:(id*)arg4 forContentTileGeometry:(const PXTileGeometry*)arg5 indexPath:(PXSimpleIndexPath)arg6 ;
-(BOOL)_getAssetStatusTileIdentifier:(PXTileIdentifier*)arg1 outGeometry:(PXTileGeometry*)arg2 group:(unsigned long long*)arg3 userData:(id*)arg4 forContentTileGeometry:(const PXTileGeometry*)arg5 indexPath:(PXSimpleIndexPath)arg6 ;
-(double)zPositionOffsetForKind:(unsigned long long)arg1 ;
-(BOOL)_getAdditionalTileIdentifierForEditorial:(out PXTileIdentifier*)arg1 group:(out unsigned long long*)arg2 layoutGeometryKind:(long long)arg3 indexPath:(PXSimpleIndexPath)arg4 ;
-(BOOL)hasFloatingBanner;
-(BOOL)hasFloatingSectionHeaders;
-(double)headerTopInset;
-(double)footerBottomInset;
-(double)headerFooterSideInset;
-(UIEdgeInsets)reviewSafeAreaInsets;
-(PXCMMAssetStatusBadgeTileUserData *)_copiedUserData;
-(PXCMMAssetStatusBadgeTileUserData *)_failedUserData;
-(void)setHeaderViewIsVisible:(BOOL)arg1 ;
-(double)headerHeight;
-(void)setVisibleOrigin:(CGPoint)arg1 ;
-(void)_invalidateHeader;
@end

