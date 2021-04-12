/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UICollectionViewLayoutAttributes, UICollectionReusableView;

@interface _UICollectionViewPrefetchItem : NSObject {

	BOOL _hasPrefetchedData;
	UICollectionViewLayoutAttributes* _attributes;
	UICollectionReusableView* _view;

}

@property (nonatomic,retain) UICollectionViewLayoutAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) BOOL hasPrefetchedData;                                     //@synthesize hasPrefetchedData=_hasPrefetchedData - In the implementation block
@property (nonatomic,retain) UICollectionReusableView * view;                            //@synthesize view=_view - In the implementation block
-(id)description;
-(UICollectionViewLayoutAttributes *)attributes;
-(void)setAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(UICollectionReusableView *)view;
-(void)setView:(UICollectionReusableView *)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(void)setHasPrefetchedData:(BOOL)arg1 ;
-(BOOL)hasPrefetchedData;
@end

