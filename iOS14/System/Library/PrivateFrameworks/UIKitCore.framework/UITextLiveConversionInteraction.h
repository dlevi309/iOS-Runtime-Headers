/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_tap:(id)arg1 ;
-(void)_pan:(id)arg1 ;
-(id)_liveConversionTapGestureRecognizer;
-(id)_liveConversionPanGestureRecognizer;
-(void)willMoveToView:(id)arg1 ;
-(id)initWithTextInput:(id)arg1 ;
-(double)pointSize;
@end

