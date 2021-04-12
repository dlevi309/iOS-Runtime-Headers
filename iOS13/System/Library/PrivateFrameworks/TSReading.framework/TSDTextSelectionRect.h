/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@class UITextRange;

@interface TSDTextSelectionRect : UITextSelectionRect {

	CGRect _rect;
	long long _writingDirection;
	UITextRange* _range;
	BOOL _containsStart;
	BOOL _containsEnd;
	BOOL _isVertical;

}

@property (nonatomic,retain) UITextRange * range;              //@synthesize range=_range - In the implementation block
-(void)dealloc;
-(UITextRange *)range;
-(BOOL)isVertical;
-(void)setRange:(UITextRange *)arg1 ;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(CGRect)rect;
-(long long)writingDirection;
-(id)initWithRect:(CGRect)arg1 direction:(long long)arg2 range:(id)arg3 containsStart:(BOOL)arg4 containsEnd:(BOOL)arg5 isVertical:(BOOL)arg6 ;
@end

