/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIKit/UIAccessibilityContentSizeCategoryImageAdjusting.h>
#import <libobjc.A.dylib/NSTextAttachmentContainer.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSFileWrapper, UIImage, NSTextAttachmentView, UIView;

@interface NSTextAttachment : NSObject <UIAccessibilityContentSizeCategoryImageAdjusting, NSTextAttachmentContainer, NSSecureCoding> {

	NSData* _data;
	NSString* _uti;
	NSString* _cacheKey;
	CGRect _bounds;
	double _layoutPadding;
	struct {
		unsigned _allowsTextAttachmentView : 1;
		unsigned _embeddingType : 4;
		unsigned _standaloneAlignment : 3;
		unsigned _allocatesTextContainer : 1;
	}  _taFlags;
	NSFileWrapper* _fileWrapper;
	UIImage* _image;
	NSTextAttachmentView* _wrapperView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory; 
@property (retain) UIView * contentView; 
@property (nonatomic,copy) NSData * contents; 
@property (nonatomic,copy) NSString * fileType; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGRect bounds; 
@property (nonatomic,retain) NSFileWrapper * fileWrapper; 
+(id)textAttachmentWithImage:(id)arg1 ;
+(BOOL)_attachmentHasImage:(id)arg1 ;
+(id)_imageFromAttachment:(id)arg1 ;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)imageCache;
+(Class)textAttachmentViewProviderClassForFileType:(id)arg1 ;
+(void)registerTextAttachmentViewProviderClass:(Class)arg1 forFileType:(id)arg2 ;
+(Class)textAttachmentClassForFileType:(id)arg1 ;
+(void)registerTextAttachmentClass:(Class)arg1 forFileType:(id)arg2 ;
-(BOOL)adjustsImageSizeForAccessibilityContentSizeCategory;
-(void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)contents;
-(NSString *)fileType;
-(id)_cacheKey;
-(CGRect)bounds;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)_image;
-(id)attachmentCell;
-(double)lineLayoutPadding;
-(BOOL)usesTextAttachmentView;
-(id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3 ;
-(void)placeView:(id)arg1 withFrame:(CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(long long)standaloneAlignment;
-(BOOL)_allocatesTextContainer;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(long long)embeddingType;
-(id)_imageForUTI_iOS:(id)arg1 ;
-(void)setEmbeddingType:(long long)arg1 ;
-(void)setStandaloneAlignment:(long long)arg1 ;
-(void)setAllowsTextAttachmentView:(BOOL)arg1 ;
-(void)_setAllocatesTextContainer:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ofType:(id)arg2 ;
-(void)_invalidateWrapperView;
-(BOOL)allowsTextAttachmentView;
-(NSFileWrapper *)fileWrapper;
-(id)initWithFileWrapper:(id)arg1 ;
-(void)setLineLayoutPadding:(double)arg1 ;
-(UIView *)contentView;
-(Class)textAttachmentViewProviderClass;
-(void)detachView:(id)arg1 fromParentView:(id)arg2 ;
-(void)setContents:(NSData *)arg1 ;
-(void)setFileType:(NSString *)arg1 ;
-(void)setFileWrapper:(NSFileWrapper *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setDrawingBounds:(CGRect)arg1 ;
-(CGRect)drawingBounds;
@end

