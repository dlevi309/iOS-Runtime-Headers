/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

