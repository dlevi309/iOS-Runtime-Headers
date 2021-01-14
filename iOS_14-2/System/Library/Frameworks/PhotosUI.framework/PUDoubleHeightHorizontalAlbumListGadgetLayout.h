/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUHorizontalAlbumListGadgetLayout.h>

@class NSMutableDictionary;

@interface PUDoubleHeightHorizontalAlbumListGadgetLayout : PUHorizontalAlbumListGadgetLayout {

	NSMutableDictionary* _layoutAttributesByIndexPath;

}

@property (nonatomic,readonly) NSMutableDictionary * layoutAttributesByIndexPath;              //@synthesize layoutAttributesByIndexPath=_layoutAttributesByIndexPath - In the implementation block
-(void)invalidateLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(BOOL)prefersPagingEnabled;
-(void)_adjustLayoutAttributes:(id)arg1 ;
-(id)initWithHorizontalLayoutDelegate:(id)arg1 showsHorizontalScrollIndicator:(BOOL)arg2 ;
-(NSMutableDictionary *)layoutAttributesByIndexPath;
@end

