/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextInteraction.h>

@protocol UITextInput;
@class UIResponder;

@interface UITextLiveConversionInteraction : UITextInteraction {

	UIResponder*<UITextInput> _textInput;
	long long _panOffset;

}

@property (readonly) double pointSize; 
-(double)pointSize;
-(void)willMoveToView:(id)arg1 ;
-(id)_liveConversionTapGestureRecognizer;
-(id)_liveConversionPanGestureRecognizer;
-(void)_tap:(id)arg1 ;
-(void)_pan:(id)arg1 ;
-(id)initWithTextInput:(id)arg1 ;
@end

