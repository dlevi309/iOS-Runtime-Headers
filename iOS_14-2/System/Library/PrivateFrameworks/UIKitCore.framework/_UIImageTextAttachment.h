/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class UIImage;

@interface _UIImageTextAttachment : NSTextAttachment {

	UIImage* _image;
	CGRect _bounds;
	SCD_Struct_UI34 _flags;

}
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)setImage:(id)arg1 ;
-(id)_deriveAttribute:(id)arg1 inStorage:(id)arg2 atIndex:(long long)arg3 ;
-(id)_imageAdaptedForTextAtIndex:(long long)arg1 inContainer:(id)arg2 sizeOnly:(BOOL)arg3 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(id)_initWithImage:(id)arg1 ;
@end

