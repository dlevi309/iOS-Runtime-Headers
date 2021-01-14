/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUCollectionViewLayoutProvider <NSObject>
@optional
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;

@required
-(id)layoutAttributesForItemAtIndexPath:(id)arg1;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1;
-(CGSize*)collectionViewContentSize;

@end

