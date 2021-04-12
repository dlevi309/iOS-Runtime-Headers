/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUSectionedGridLayout.h>

@class NSMutableDictionary, UIColor, NSArray;

@interface PUImportSectionedGridLayout : PUSectionedGridLayout {

	BOOL _delegateSupportsPerSectionHighlight;
	NSMutableDictionary* _sectionDecorationAttributesBySection;
	NSMutableDictionary* _preUpdateSectionDecorationAttributesBySection;
	UIColor* _emphasizedSectionBackgroundColor;
	UIColor* _emphasizedSectionBottomStrokeColor;
	double _emphasizedSectionBottomStrokeWidth;
	NSArray* _sectionIndexPathsBeingDeleted;

}

@property (nonatomic,retain) NSMutableDictionary * sectionDecorationAttributesBySection;                       //@synthesize sectionDecorationAttributesBySection=_sectionDecorationAttributesBySection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * preUpdateSectionDecorationAttributesBySection;              //@synthesize preUpdateSectionDecorationAttributesBySection=_preUpdateSectionDecorationAttributesBySection - In the implementation block
@property (nonatomic,retain) UIColor * emphasizedSectionBackgroundColor;                                       //@synthesize emphasizedSectionBackgroundColor=_emphasizedSectionBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * emphasizedSectionBottomStrokeColor;                                     //@synthesize emphasizedSectionBottomStrokeColor=_emphasizedSectionBottomStrokeColor - In the implementation block
@property (assign,nonatomic) double emphasizedSectionBottomStrokeWidth;                                        //@synthesize emphasizedSectionBottomStrokeWidth=_emphasizedSectionBottomStrokeWidth - In the implementation block
@property (nonatomic,retain) NSArray * sectionIndexPathsBeingDeleted;                                          //@synthesize sectionIndexPathsBeingDeleted=_sectionIndexPathsBeingDeleted - In the implementation block
@property (assign,nonatomic,__weak) id<PUImportSectionedGridLayoutDelegate> delegate; 
+(Class)layoutAttributesClass;
-(void)finalizeCollectionViewUpdates;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(void)setEmphasizedSectionBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)emphasizedSectionBottomStrokeColor;
-(void)setEmphasizedSectionBottomStrokeColor:(UIColor *)arg1 ;
-(double)emphasizedSectionBottomStrokeWidth;
-(void)setEmphasizedSectionBottomStrokeWidth:(double)arg1 ;
-(NSArray *)sectionIndexPathsBeingDeleted;
-(void)setSectionIndexPathsBeingDeleted:(NSArray *)arg1 ;
-(id)init;
-(void)setDelegate:(id<PUImportSectionedGridLayoutDelegate>)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)recreateSectionDecorationAttributes;
-(id)createLayoutAttributesForSectionBackgroundAtSection:(unsigned long long)arg1 ;
-(NSMutableDictionary *)sectionDecorationAttributesBySection;
-(void)setSectionDecorationAttributesBySection:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)preUpdateSectionDecorationAttributesBySection;
-(void)setPreUpdateSectionDecorationAttributesBySection:(NSMutableDictionary *)arg1 ;
-(UIColor *)emphasizedSectionBackgroundColor;
@end

