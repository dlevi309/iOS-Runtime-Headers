/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)tv_sizeThatFits:(CGSize)arg1 withContentInset:(UIEdgeInsets)arg2 ;
-(_TVCollectionViewFlowLayout *)gridFlowLayout;
-(void)setGridFlowLayout:(_TVCollectionViewFlowLayout *)arg1 ;
@end

