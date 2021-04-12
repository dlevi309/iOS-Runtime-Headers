/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class UIDictationView;

@interface UIKBDictationDisplayView : UIKBKeyView {

	UIDictationView* _dictationView;

}

@property (nonatomic,retain) UIDictationView * dictationView;              //@synthesize dictationView=_dictationView - In the implementation block
-(void)prepareForDisplay;
-(void)removeFromSuperview;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(void)setDictationView:(UIDictationView *)arg1 ;
-(void)updateDictationColor;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)dealloc;
-(UIDictationView *)dictationView;
@end

