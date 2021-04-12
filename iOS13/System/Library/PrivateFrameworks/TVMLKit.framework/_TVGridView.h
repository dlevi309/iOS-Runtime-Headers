/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVCollectionView.h>

@class _TVCollectionViewFlowLayout;

@interface _TVGridView : _TVCollectionView {

	BOOL _delegateRespondsToIndexPathForPreferredFocusedView;
	_TVCollectionViewFlowLayout* _gridFlowLayout;

}

@property (nonatomic,retain) _TVCollectionViewFlowLayout * gridFlowLayout;              //@synthesize gridFlowLayout=_gridFlowLayout - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(CGSize)tv_sizeThatFits:(CGSize)arg1 withContentInset:(UIEdgeInsets)arg2 ;
-(_TVCollectionViewFlowLayout *)gridFlowLayout;
-(void)setGridFlowLayout:(_TVCollectionViewFlowLayout *)arg1 ;
@end

