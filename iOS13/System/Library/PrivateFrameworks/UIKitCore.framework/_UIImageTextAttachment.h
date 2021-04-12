/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class UIImage;

@interface _UIImageTextAttachment : NSTextAttachment {

	UIImage* _image;
	CGRect _bounds;
	SCD_Struct_UI30 _flags;

}
-(void)setImage:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)_initWithImage:(id)arg1 ;
-(id)_imageAdaptedForTextAtIndex:(long long)arg1 inContainer:(id)arg2 sizeOnly:(BOOL)arg3 ;
@end

