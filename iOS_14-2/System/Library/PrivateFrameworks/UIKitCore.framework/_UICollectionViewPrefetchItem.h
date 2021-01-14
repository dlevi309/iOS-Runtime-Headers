/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(void)setView:(UICollectionReusableView *)arg1 ;
-(UICollectionViewLayoutAttributes *)attributes;
-(id)description;
-(UICollectionReusableView *)view;
-(BOOL)hasPrefetchedData;
-(void)setHasPrefetchedData:(BOOL)arg1 ;
@end

