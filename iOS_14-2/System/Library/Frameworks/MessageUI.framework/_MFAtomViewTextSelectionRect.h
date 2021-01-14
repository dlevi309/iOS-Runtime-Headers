/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)rect;
-(void)setIsVertical:(BOOL)arg1 ;
-(void)setRect:(CGRect)arg1 ;
-(void)setWritingDirection:(long long)arg1 ;
-(BOOL)containsEnd;
-(BOOL)containsStart;
-(long long)writingDirection;
-(void)setContainsEnd:(BOOL)arg1 ;
-(void)setContainsStart:(BOOL)arg1 ;
@end

