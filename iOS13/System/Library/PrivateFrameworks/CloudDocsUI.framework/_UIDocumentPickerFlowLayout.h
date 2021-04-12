/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>
#import <libobjc.A.dylib/_UICollectionViewLayoutCellStyle.h>

@class NSString;

@interface _UIDocumentPickerFlowLayout : UICollectionViewFlowLayout <_UICollectionViewLayoutCellStyle> {

	long long cellStyle;
	double _contentSizeAdjustment;

}

@property (assign,nonatomic) double contentSizeAdjustment;              //@synthesize contentSizeAdjustment=_contentSizeAdjustment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long cellStyle; 
-(double)contentSizeAdjustment;
-(void)setContentSizeAdjustment:(double)arg1 ;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(BOOL)canBeEdited;
-(long long)cellStyle;
-(void)setCellStyle:(long long)arg1 ;
@end

