/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@class UITextView, NSDictionary, NSMutableDictionary, UIFont, NSString;

@interface UIKeyCommandDiscoverabilityHUDDescriptionView : UIView <NSLayoutManagerDelegate> {

	UITextView* _textView;
	NSDictionary* _textAttributes;
	NSMutableDictionary* _glyphViews;
	unsigned long long _glyphSize;
	CGSize _intrinsicContentSize;
	double _spaceWidth;
	UIFont* _font;

}

@property (assign,nonatomic) double spaceWidth;                     //@synthesize spaceWidth=_spaceWidth - In the implementation block
@property (nonatomic,retain) UIFont * font;                         //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setFont:(UIFont *)arg1 ;
-(long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3 ;
-(void)setText:(NSString *)arg1 ;
-(double)spaceWidth;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(void)invalidateIntrinsicContentSize;
-(void)setSpaceWidth:(double)arg1 ;
-(id)initWithText:(id)arg1 font:(id)arg2 lineHeight:(double)arg3 lineSpacing:(double)arg4 color:(id)arg5 edgeInsets:(UIEdgeInsets)arg6 ;
-(NSString *)text;
-(UIFont *)font;
-(CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 glyphPosition:(CGPoint)arg5 characterIndex:(unsigned long long)arg6 ;
-(unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const long long*)arg3 characterIndexes:(const unsigned long long*)arg4 font:(id)arg5 forGlyphRange:(NSRange)arg6 ;
@end

