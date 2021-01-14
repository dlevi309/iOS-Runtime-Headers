/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSLayoutManager, NSTextContainer, NSArray;

@interface _UIBoundingTextRectsSolver : NSObject {

	NSRange _range;
	CGRect _firstRect;
	CGRect _lastRect;
	CGRect _middleRect;
	CGRect _totalRect;
	NSRange _firstGlyphRange;
	NSRange _lastGlyphRange;
	NSRange _middleGlyphRange;
	NSRange _totalGlyphRange;
	BOOL _calculated;
	BOOL _unifyRects;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;

}

@property (nonatomic,readonly) CGRect firstLineRect; 
@property (nonatomic,readonly) CGRect bodyRect; 
@property (nonatomic,readonly) CGRect lastLineRect; 
@property (nonatomic,readonly) CGRect boundingRect; 
@property (nonatomic,readonly) NSArray * rects; 
-(NSArray *)rects;
-(CGRect)bodyRect;
-(id)initWithLayoutManager:(id)arg1 range:(NSRange)arg2 unifyRects:(BOOL)arg3 ;
-(CGRect)firstLineRect;
-(CGRect)lastLineRect;
-(id)description;
-(void)_calculate;
-(void)_calculateRectsUsingLayoutManager:(id)arg1 ;
-(CGRect)boundingRect;
-(void)_calculateTotalRect;
@end

