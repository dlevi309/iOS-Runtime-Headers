/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class UIDictationView;

@interface UIKBDictationDisplayView : UIKBKeyView {

	UIDictationView* _dictationView;

}

@property (nonatomic,retain) UIDictationView * dictationView;              //@synthesize dictationView=_dictationView - In the implementation block
-(void)dealloc;
-(void)removeFromSuperview;
-(void)setRenderConfig:(id)arg1 ;
-(void)prepareForDisplay;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(UIDictationView *)dictationView;
-(void)setDictationView:(UIDictationView *)arg1 ;
-(void)updateDictationColor;
@end

