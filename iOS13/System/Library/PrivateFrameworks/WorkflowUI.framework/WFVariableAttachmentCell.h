/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <libobjc.A.dylib/NSTextAttachmentCell.h>

@class WFVariableAttachment, UIImage, UIFont, UIColor, NSString;

@interface WFVariableAttachmentCell : NSObject <NSTextAttachmentCell> {

	WFVariableAttachment* _attachment;
	UIImage* _cachedImage;
	unsigned long long _cachedImageControlState;
	UIFont* _cachedImageFont;
	UIColor* _cachedImageTintColor;
	NSString* _cachedImageVariableName;

}

@property (nonatomic,retain) UIImage * cachedImage;                                   //@synthesize cachedImage=_cachedImage - In the implementation block
@property (assign,nonatomic) unsigned long long cachedImageControlState;              //@synthesize cachedImageControlState=_cachedImageControlState - In the implementation block
@property (nonatomic,retain) UIFont * cachedImageFont;                                //@synthesize cachedImageFont=_cachedImageFont - In the implementation block
@property (nonatomic,retain) UIColor * cachedImageTintColor;                          //@synthesize cachedImageTintColor=_cachedImageTintColor - In the implementation block
@property (nonatomic,copy) NSString * cachedImageVariableName;                        //@synthesize cachedImageVariableName=_cachedImageVariableName - In the implementation block
@property (assign,nonatomic,__weak) WFVariableAttachment * attachment;                //@synthesize attachment=_attachment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(CGSize)cellSize;
-(CGPoint)cellBaselineOffset;
-(WFVariableAttachment *)attachment;
-(void)setAttachment:(WFVariableAttachment *)arg1 ;
-(UIImage *)cachedImage;
-(void)setCachedImage:(UIImage *)arg1 ;
-(void)clearCachedImage;
-(unsigned long long)currentControlState;
-(id)attachmentImageForSize:(CGSize)arg1 ;
-(unsigned long long)cachedImageControlState;
-(void)setCachedImageControlState:(unsigned long long)arg1 ;
-(UIFont *)cachedImageFont;
-(void)setCachedImageFont:(UIFont *)arg1 ;
-(UIColor *)cachedImageTintColor;
-(void)setCachedImageTintColor:(UIColor *)arg1 ;
-(NSString *)cachedImageVariableName;
-(void)setCachedImageVariableName:(NSString *)arg1 ;
@end

