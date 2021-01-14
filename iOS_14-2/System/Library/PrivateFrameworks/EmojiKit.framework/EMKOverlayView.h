/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)dismiss;
-(void)drawBackground:(CGRect)arg1 ;
-(void)drawForeground:(CGRect)arg1 ;
-(void)dismissWithSelectedEmojiToken:(id)arg1 ;
-(void)selectWithEvent:(id)arg1 ;
-(id)initWithView:(id)arg1 anchorRect:(CGRect)arg2 emojiTokenList:(id)arg3 selectionHandler:(/*^block*/id)arg4 ;
-(void)setView:(id)arg1 anchorRect:(CGRect)arg2 ;
@end

