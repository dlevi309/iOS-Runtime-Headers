/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXExtendedTraitCollection.h>
#import <libobjc.A.dylib/PXMockMutableExtendedTraitCollection.h>

@class PXUpdater;

@interface PXMockExtendedTraitCollection : PXExtendedTraitCollection <PXMockMutableExtendedTraitCollection> {

	PXUpdater* _updater;
	long long _layoutSizeClass;
	long long _layoutOrientation;
	long long _userInterfaceIdiom;
	long long _formFactor;
	unsigned long long _visibleChromeElements;
	double _displayScale;
	CGSize _layoutReferenceSize;
	UIEdgeInsets _safeAreaInsets;

}

@property (assign,nonatomic) long long userInterfaceIdiom;                          //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (assign,nonatomic) long long layoutSizeClass;                             //@synthesize layoutSizeClass=_layoutSizeClass - In the implementation block
@property (assign,nonatomic) long long layoutOrientation;                           //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (assign,nonatomic) CGSize layoutReferenceSize;                            //@synthesize layoutReferenceSize=_layoutReferenceSize - In the implementation block
@property (assign,nonatomic) double displayScale;                                   //@synthesize displayScale=_displayScale - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                           //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (assign,nonatomic) long long formFactor;                                  //@synthesize formFactor=_formFactor - In the implementation block
@property (assign,nonatomic) unsigned long long visibleChromeElements;              //@synthesize visibleChromeElements=_visibleChromeElements - In the implementation block
-(void)setLayoutSizeClass:(long long)arg1 ;
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(long long)layoutSizeSubclass;
-(UIEdgeInsets)safeAreaInsets;
-(long long)userInterfaceIdiom;
-(long long)layoutSizeClass;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
-(void)setDisplayScale:(double)arg1 ;
-(long long)layoutOrientation;
-(double)displayScale;
-(void)_invalidateSafeAreaInsets;
-(void)setVisibleChromeElements:(unsigned long long)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)didPerformChanges;
-(void)unregisterObservations;
-(void)setLayoutReferenceSize:(CGSize)arg1 ;
-(CGSize)layoutReferenceSize;
-(void)_updateSafeAreaInsets;
-(void)registerObservations;
-(void)setLayoutOrientation:(long long)arg1 ;
-(void)_invalidateLayoutSizeClass;
-(void)_invalidateLayoutReferenceSizeAndDisplayScale;
-(void)_updateLayoutSizeClass;
-(id)initWithLayoutSizeClass:(long long)arg1 ;
-(long long)formFactor;
-(id)initWithFormFactor:(long long)arg1 orientation:(long long)arg2 visibleChromeElements:(unsigned long long)arg3 ;
-(void)_updateLayoutReferenceSizeAndDisplayScale;
-(void)_setNeedsUpdate;
-(void)setFormFactor:(long long)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(unsigned long long)visibleChromeElements;
@end

