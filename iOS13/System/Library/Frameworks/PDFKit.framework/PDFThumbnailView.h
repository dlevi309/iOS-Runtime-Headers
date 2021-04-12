/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)_updateLayout;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)setPDFView:(PDFView *)arg1 ;
-(PDFView *)PDFView;
-(long long)layoutMode;
-(void)documentChanged:(id)arg1 ;
-(void)documentMutated:(id)arg1 ;
-(void)currentPageChanged:(id)arg1 ;
-(void)pageChanged:(id)arg1 ;
-(void)documentUnlocked:(id)arg1 ;
-(NSArray *)selectedPages;
-(void)setLayoutMode:(long long)arg1 ;
@end

