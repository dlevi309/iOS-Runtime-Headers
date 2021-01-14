/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class PDFThumbnailViewPrivate, PDFView, UIColor, NSArray;

@interface PDFThumbnailView : UIView <NSCoding> {

	PDFThumbnailViewPrivate* _private;

}

@property (assign,nonatomic,__weak) PDFView * PDFView; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (nonatomic,readonly) NSArray * selectedPages; 
@property (assign,nonatomic) CGSize thumbnailSize; 
@property (assign,nonatomic) long long layoutMode; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
-(void)_updateLayout;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(UIEdgeInsets)contentInset;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)thumbnailSize;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setLayoutMode:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)layoutMode;
-(void)_commonInit;
-(PDFView *)PDFView;
-(void)dealloc;
-(void)setPDFView:(PDFView *)arg1 ;
-(void)documentChanged:(id)arg1 ;
-(void)documentMutated:(id)arg1 ;
-(void)currentPageChanged:(id)arg1 ;
-(void)pageChanged:(id)arg1 ;
-(void)documentUnlocked:(id)arg1 ;
-(NSArray *)selectedPages;
@end

