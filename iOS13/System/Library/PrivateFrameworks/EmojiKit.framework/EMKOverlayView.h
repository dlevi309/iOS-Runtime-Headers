/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
*/

#import <EmojiKit/EmojiKit-Structs.h>
#import <UIKitCore/UIView.h>

@class EMKEmojiTokenList;

@interface EMKOverlayView : UIView {

	unsigned long long _numEmojiToShow;
	EMKEmojiTokenList* _emojiTokenList;
	CGRect _overlayRect;
	unsigned long long _selectedIndex;
	/*^block*/id _selectionHandler;
	long long _interfaceStyle;

}
-(void)dismiss;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)drawBackground:(CGRect)arg1 ;
-(void)drawForeground:(CGRect)arg1 ;
-(void)dismissWithSelectedEmojiToken:(id)arg1 ;
-(void)selectWithEvent:(id)arg1 ;
-(id)initWithView:(id)arg1 anchorRect:(CGRect)arg2 emojiTokenList:(id)arg3 selectionHandler:(/*^block*/id)arg4 ;
-(void)setView:(id)arg1 anchorRect:(CGRect)arg2 ;
@end

