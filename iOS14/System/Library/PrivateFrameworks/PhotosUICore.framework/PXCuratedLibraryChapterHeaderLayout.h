/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGStringSource.h>
#import <libobjc.A.dylib/PXGNamedImageSource.h>

@protocol OS_dispatch_queue;
@class NSArray, NSMutableIndexSet, NSObject, NSAttributedString, PXAssetCollectionReference, PXCuratedLibraryChapterHeaderLayoutSpec, NSString, NSDictionary, PXNumberAnimator;

@interface PXCuratedLibraryChapterHeaderLayout : PXGLayout <PXChangeObserver, PXGStringSource, PXGNamedImageSource> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	unsigned short _titleVersion;
	CGSize _chevronSize;
	unsigned short _chevronVersion;
	long long _alternateAppearanceFadeDirection;
	double _alternateAppearanceFadeStartThresholdDistance;
	NSArray* _itemIdentifierBySpriteIndex;
	NSMutableIndexSet* _axSpriteIndexes;
	long long _asyncDateGeneration;
	NSObject*<OS_dispatch_queue> _asyncDateQueue;
	BOOL _presentedAlternateAppearance;
	NSAttributedString* _attributedTitle;
	NSAttributedString* _floatingAttributedTitle;
	PXAssetCollectionReference* _assetCollectionReference;
	PXCuratedLibraryChapterHeaderLayoutSpec* _spec;
	NSString* _rawTitle;
	NSDictionary* _titleEmphasizedAttributes;
	NSDictionary* _floatingTitleEmphasizedAttributes;
	NSDictionary* _titleDeemphasizedAttributes;
	NSDictionary* _floatingTitleDeemphasizedAttributes;
	PXNumberAnimator* _alternateAppearanceMixAnimator;
	CGSize _attributedTitleSize;
	PXSimpleIndexPath _sectionIndexPath;
	UIEdgeInsets _padding;

}

@property (nonatomic,copy) NSString * rawTitle;                                                  //@synthesize rawTitle=_rawTitle - In the implementation block
@property (nonatomic,copy) NSDictionary * titleEmphasizedAttributes;                             //@synthesize titleEmphasizedAttributes=_titleEmphasizedAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * floatingTitleEmphasizedAttributes;                     //@synthesize floatingTitleEmphasizedAttributes=_floatingTitleEmphasizedAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * titleDeemphasizedAttributes;                           //@synthesize titleDeemphasizedAttributes=_titleDeemphasizedAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * floatingTitleDeemphasizedAttributes;                   //@synthesize floatingTitleDeemphasizedAttributes=_floatingTitleDeemphasizedAttributes - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedTitle;                             //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (nonatomic,readonly) NSAttributedString * floatingAttributedTitle;                     //@synthesize floatingAttributedTitle=_floatingAttributedTitle - In the implementation block
@property (nonatomic,readonly) CGSize attributedTitleSize;                                       //@synthesize attributedTitleSize=_attributedTitleSize - In the implementation block
@property (nonatomic,readonly) PXNumberAnimator * alternateAppearanceMixAnimator;                //@synthesize alternateAppearanceMixAnimator=_alternateAppearanceMixAnimator - In the implementation block
@property (assign,nonatomic) BOOL presentedAlternateAppearance;                                  //@synthesize presentedAlternateAppearance=_presentedAlternateAppearance - In the implementation block
@property (nonatomic,retain) PXAssetCollectionReference * assetCollectionReference;              //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
@property (assign,nonatomic) PXSimpleIndexPath sectionIndexPath;                                 //@synthesize sectionIndexPath=_sectionIndexPath - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryChapterHeaderLayoutSpec * spec;                     //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                               //@synthesize padding=_padding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageConfigurationAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)_updateTitle;
-(PXAssetCollectionReference *)assetCollectionReference;
-(NSAttributedString *)attributedTitle;
-(id)stringAttributesAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)setSpec:(PXCuratedLibraryChapterHeaderLayoutSpec *)arg1 ;
-(long long)verticalAlignmentForStringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)attributedStringForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(NSDictionary *)floatingTitleDeemphasizedAttributes;
-(CGSize)attributedTitleSize;
-(void)viewEnvironmentDidChange;
-(id)stringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(NSDictionary *)titleEmphasizedAttributes;
-(void)referenceOptionsDidChange;
-(NSDictionary *)titleDeemphasizedAttributes;
-(void)screenScaleDidChange;
-(NSAttributedString *)floatingAttributedTitle;
-(id)init;
-(PXNumberAnimator *)alternateAppearanceMixAnimator;
-(void)_handleAsyncRawTitle:(id)arg1 generation:(long long)arg2 ;
-(void)visibleRectDidChange;
-(PXSimpleIndexPath)sectionIndexPath;
-(NSDictionary *)floatingTitleEmphasizedAttributes;
-(void)setPresentedAlternateAppearance:(BOOL)arg1 ;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(void)setFloatingTitleEmphasizedAttributes:(NSDictionary *)arg1 ;
-(PXCuratedLibraryChapterHeaderLayoutSpec *)spec;
-(BOOL)presentedAlternateAppearance;
-(void)setFloatingTitleDeemphasizedAttributes:(NSDictionary *)arg1 ;
-(void)setAssetCollectionReference:(PXAssetCollectionReference *)arg1 ;
-(void)update;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(void)referenceSizeDidChange;
-(void)setTitleEmphasizedAttributes:(NSDictionary *)arg1 ;
-(UIEdgeInsets)padding;
-(NSString *)rawTitle;
-(void)_invalidateAttributedTitle;
-(void)setSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)_updateSprites;
-(id)_createAttributedTitleWithEmphasizedAttributes:(id)arg1 deemphasizedAttributes:(id)arg2 ;
-(void)setRawTitle:(NSString *)arg1 ;
-(id)axSpriteIndexes;
-(void)_invalidateChevron;
-(void)setTitleDeemphasizedAttributes:(NSDictionary *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

