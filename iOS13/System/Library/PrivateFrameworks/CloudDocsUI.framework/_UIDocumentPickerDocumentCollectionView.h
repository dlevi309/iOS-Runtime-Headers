/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UICollectionView.h>

@interface _UIDocumentPickerDocumentCollectionView : UICollectionView {

	BOOL _avoidNegativeContentOffset;
	double _contentSizeAdjustment;

}

@property (assign,nonatomic) double contentSizeAdjustment;              //@synthesize contentSizeAdjustment=_contentSizeAdjustment - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(double)contentSizeAdjustment;
-(void)setContentSizeAdjustment:(double)arg1 ;
-(void)setAdjustedContentSize:(CGSize)arg1 withFrameSize:(CGSize)arg2 ;
-(void)_performWhileAvoidingNegativeContentOffset:(/*^block*/id)arg1 ;
-(CGPoint)_updatedContentOffsetForOffset:(CGPoint)arg1 avoidNegativeContentOffset:(BOOL)arg2 ;
@end

