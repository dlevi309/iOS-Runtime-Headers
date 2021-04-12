/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSDictionary;

@interface _VideosExtrasShelfCollectionViewLayout : UICollectionViewFlowLayout {

	NSDictionary* _rects;
	CGSize _contentSize;

}

@property (nonatomic,readonly) CGSize calculatedContentSize;              //@synthesize contentSize=_contentSize - In the implementation block
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(CGSize)calculatedContentSize;
-(void)_calculateSizes;
@end

