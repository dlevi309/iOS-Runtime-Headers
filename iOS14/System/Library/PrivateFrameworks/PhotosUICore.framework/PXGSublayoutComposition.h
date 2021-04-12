/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXGCompositeLayout, PXGSublayoutDataStore, PXGLayout;

@interface PXGSublayoutComposition : NSObject {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	long long _lastSublayoutDataStoreVersion;
	PXGCompositeLayout* _compositeLayout;
	PXGSublayoutDataStore* _sublayoutDataStore;
	CGSize _referenceSize;

}

@property (assign,nonatomic) long long lastSublayoutDataStoreVersion;                  //@synthesize lastSublayoutDataStoreVersion=_lastSublayoutDataStoreVersion - In the implementation block
@property (assign,nonatomic,__weak) PXGCompositeLayout * compositeLayout;              //@synthesize compositeLayout=_compositeLayout - In the implementation block
@property (nonatomic,retain) PXGSublayoutDataStore * sublayoutDataStore;               //@synthesize sublayoutDataStore=_sublayoutDataStore - In the implementation block
@property (nonatomic,readonly) CGSize referenceSize;                                   //@synthesize referenceSize=_referenceSize - In the implementation block
@property (nonatomic,readonly) PXGLayout * layout; 
@property (nonatomic,readonly) long long numberOfSublayouts; 
@property (nonatomic,readonly) SCD_Struct_PX89* sublayoutGeometries; 
@property (nonatomic,readonly) CGRect contentBounds; 
-(CGRect)contentBounds;
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)updateSublayoutAttributes;
-(void)updateEstimate;
-(void)setLastSublayoutDataStoreVersion:(long long)arg1 ;
-(SCD_Struct_PX89*)sublayoutGeometries;
-(void)enumerateSublayoutProvidersForRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)invalidateSublayoutAttributes;
-(void)invalidateSublayoutContentSizes;
-(void)invalidateEstimatedSublayoutGeometries;
-(long long)anchorSublayoutIndexForAnchoredContentEdges:(unsigned long long)arg1 ;
-(long long)lastSublayoutDataStoreVersion;
-(PXGCompositeLayout *)compositeLayout;
-(void)setCompositeLayout:(PXGCompositeLayout *)arg1 ;
-(void)setSublayoutDataStore:(PXGSublayoutDataStore *)arg1 ;
-(UIEdgeInsets)sublayoutInsetsForStylableType:(long long)arg1 ;
-(CGSize)referenceSize;
-(void)referenceSizeDidChange;
-(long long)numberOfSublayouts;
-(PXGSublayoutDataStore *)sublayoutDataStore;
-(void)updateEstimatedSublayoutGeometries;
-(void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(/*^block*/id)arg2 ;
-(PXGLayout *)layout;
@end

