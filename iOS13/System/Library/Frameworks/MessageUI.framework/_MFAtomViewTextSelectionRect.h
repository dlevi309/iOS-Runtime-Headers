/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@interface _MFAtomViewTextSelectionRect : UITextSelectionRect {

	BOOL containsStart;
	BOOL containsEnd;
	BOOL isVertical;
	long long writingDirection;
	CGRect rect;

}

@property (assign,nonatomic) CGRect rect; 
@property (assign,nonatomic) long long writingDirection; 
@property (assign,nonatomic) BOOL containsStart; 
@property (assign,nonatomic) BOOL containsEnd; 
@property (assign,nonatomic) BOOL isVertical; 
-(BOOL)isVertical;
-(void)setContainsStart:(BOOL)arg1 ;
-(void)setContainsEnd:(BOOL)arg1 ;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(long long)writingDirection;
-(void)setWritingDirection:(long long)arg1 ;
-(void)setIsVertical:(BOOL)arg1 ;
@end

