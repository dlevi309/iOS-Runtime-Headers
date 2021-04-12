/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(CGSize)calculatedContentSize;
-(void)_calculateSizes;
@end

