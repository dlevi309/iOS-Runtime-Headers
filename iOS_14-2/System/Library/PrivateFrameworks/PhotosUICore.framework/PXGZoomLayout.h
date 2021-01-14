/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>

@class PXGLayout, NSArray;

@interface PXGZoomLayout : PXGLayout {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _settingSublayouts;
	BOOL _isUpdatingSublayouts;
	PXGLayout* _primaryLayer;
	NSArray* _layers;
	id _anchorObjectReference;
	CGPoint _anchorViewportCenter;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) PXGLayout * primaryLayer;                //@synthesize primaryLayer=_primaryLayer - In the implementation block
@property (nonatomic,readonly) NSArray * layers;                        //@synthesize layers=_layers - In the implementation block
@property (nonatomic,retain) id anchorObjectReference;                  //@synthesize anchorObjectReference=_anchorObjectReference - In the implementation block
@property (assign,nonatomic) CGPoint anchorViewportCenter;              //@synthesize anchorViewportCenter=_anchorViewportCenter - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                      //@synthesize padding=_padding - In the implementation block
-(void)setAnchorObjectReference:(id)arg1 ;
-(void)setAnchorViewportCenter:(CGPoint)arg1 ;
-(void)viewEnvironmentDidChange;
-(id)anchorObjectReference;
-(void)screenScaleDidChange;
-(id)init;
-(void)sublayoutDidChangeLastBaseline:(id)arg1 ;
-(void)visibleRectDidChange;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(void)userInterfaceDirectionDidChange;
-(NSArray *)layers;
-(void)sublayoutDidChangeContentSize:(id)arg1 ;
-(CGRect)sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(CGRect)arg2 ;
-(CGPoint)anchorViewportCenter;
-(void)scrollSpeedRegimeDidChange;
-(void)sublayoutNeedsUpdate:(id)arg1 ;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(void)_updateSublayoutGeometries;
-(void)update;
-(long long)itemForSpriteIndex:(unsigned)arg1 ;
-(void)referenceSizeDidChange;
-(void)_configureSublayouts;
-(void)safeAreaInsetsDidChange;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setLayers:(id)arg1 primaryLayer:(id)arg2 ;
-(id)axSpriteIndexes;
-(PXGLayout *)primaryLayer;
-(void)didChangeSublayoutOrigins;
@end

