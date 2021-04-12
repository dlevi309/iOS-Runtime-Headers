/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)initWithLayoutManager:(id)arg1 range:(NSRange)arg2 unifyRects:(BOOL)arg3 ;
-(CGRect)boundingRect;
-(NSArray *)rects;
-(void)_calculate;
-(CGRect)firstLineRect;
-(CGRect)bodyRect;
-(CGRect)lastLineRect;
-(void)_calculateRectsUsingLayoutManager:(id)arg1 ;
-(void)_calculateTotalRect;
@end

