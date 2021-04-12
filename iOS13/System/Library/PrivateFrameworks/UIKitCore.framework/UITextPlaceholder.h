/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray, _UITextPlaceholderAttachment;

@interface UITextPlaceholder : NSObject {

	NSArray* _rects;
	_UITextPlaceholderAttachment* _attachment;

}

@property (nonatomic,copy) NSArray * rects;                                          //@synthesize rects=_rects - In the implementation block
@property (nonatomic,retain) _UITextPlaceholderAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
-(id)init;
-(_UITextPlaceholderAttachment *)attachment;
-(void)setAttachment:(_UITextPlaceholderAttachment *)arg1 ;
-(NSArray *)rects;
-(void)setRects:(NSArray *)arg1 ;
@end

