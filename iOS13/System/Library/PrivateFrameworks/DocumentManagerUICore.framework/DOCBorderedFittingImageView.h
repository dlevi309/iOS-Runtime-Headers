/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <DocumentManagerUICore/DOCFittingImageView.h>

@interface DOCBorderedFittingImageView : DOCFittingImageView {

	BOOL _addDecoration;

}

@property (assign,nonatomic) BOOL addDecoration;              //@synthesize addDecoration=_addDecoration - In the implementation block
-(void)layoutSubviews;
-(void)setFittingSize:(CGSize)arg1 ;
-(void)updateImage:(id)arg1 addDecoration:(BOOL)arg2 ;
-(void)setAddDecoration:(BOOL)arg1 ;
-(BOOL)addDecoration;
@end

