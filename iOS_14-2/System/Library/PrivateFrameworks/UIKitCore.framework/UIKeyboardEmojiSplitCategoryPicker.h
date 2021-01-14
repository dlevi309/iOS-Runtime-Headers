/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)whiteText;
-(void)didMoveToWindow;
-(void)updateToCategory:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(id)symbolForRow:(long long)arg1 ;
-(void)updateCategorySelectedIndicator:(long long)arg1 ;
-(id)titleForRow:(long long)arg1 fallback:(BOOL)arg2 ;
-(void)setWhiteText:(BOOL)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

