/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardEmojiSplit.h>

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit {

	BOOL _whiteText;
	unsigned long long _currentSelected;
	long long _lastUsedCategory;

}

@property (assign) BOOL whiteText;              //@synthesize whiteText=_whiteText - In the implementation block
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setRenderConfig:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)whiteText;
-(void)updateToCategory:(long long)arg1 ;
-(void)updateCategorySelectedIndicator:(long long)arg1 ;
-(id)titleForRow:(long long)arg1 fallback:(BOOL)arg2 ;
-(id)symbolForRow:(long long)arg1 ;
-(void)setWhiteText:(BOOL)arg1 ;
@end

