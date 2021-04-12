/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) long long cellStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canBeEdited;
-(CGSize)collectionViewContentSize;
-(void)setCellStyle:(long long)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setContentSizeAdjustment:(double)arg1 ;
-(double)contentSizeAdjustment;
-(long long)cellStyle;
@end

