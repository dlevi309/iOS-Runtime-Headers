/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICBaseTextAttachment.h>

@class NSString;

@interface ICTextAttachment : ICBaseTextAttachment

@property (nonatomic,readonly) NSString * viewIdentifier; 
@property (nonatomic,readonly) BOOL containsFindableText; 
+(id)textAttachmentWithAttachment:(id)arg1 ;
+(BOOL)textAttachmentIsContent:(id)arg1 ;
+(Class)textAttachmentClassForAttachment:(id)arg1 ;
+(double)defaultAttachmentThumbnailViewHeight;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(Class)attachmentViewClass;
-(id)initWithData:(id)arg1 ofType:(id)arg2 ;
-(SCD_Struct_IC0)attachmentBoundsMargins;
-(id)attachmentFileWrapper;
-(BOOL)requiresSpaceAfterAttachmentForPrinting;
-(BOOL)supportsThumbnailView;
-(BOOL)supportsMultipleThumbnailsOnSameLine;
-(id)attachmentAsNSTextAttachment;
-(Class)attachmentViewControllerClass;
-(CGSize)attachmentSizeForTextContainer:(id)arg1 ;
-(CGSize)attachmentSizeForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 ;
-(CGRect)attachmentBoundsIncludingMarginsFromAttachmentBounds:(CGRect)arg1 ;
-(BOOL)containsFindableText;
-(id)newlyCreatedView;
-(id)newlyCreatedViewForManualRendering;
-(id)newlyCreatedViewControllerForManualRendering:(BOOL)arg1 layoutManager:(id)arg2 ;
-(NSString *)viewIdentifier;
-(double)availableWidthForTextContainer:(id)arg1 ;
@end

