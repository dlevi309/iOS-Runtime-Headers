/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, _UITextPlaceholderAttachment;

@interface UITextPlaceholder : NSObject {

	NSArray* _rects;
	_UITextPlaceholderAttachment* _attachment;
	CGRect _caretRectBeforeInsertion;

}

@property (nonatomic,copy) NSArray * rects;                                          //@synthesize rects=_rects - In the implementation block
@property (assign,nonatomic) CGRect caretRectBeforeInsertion;                        //@synthesize caretRectBeforeInsertion=_caretRectBeforeInsertion - In the implementation block
@property (nonatomic,retain) _UITextPlaceholderAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
-(NSArray *)rects;
-(id)init;
-(_UITextPlaceholderAttachment *)attachment;
-(CGRect)caretRectBeforeInsertion;
-(void)setCaretRectBeforeInsertion:(CGRect)arg1 ;
-(void)setRects:(NSArray *)arg1 ;
-(void)setAttachment:(_UITextPlaceholderAttachment *)arg1 ;
@end

