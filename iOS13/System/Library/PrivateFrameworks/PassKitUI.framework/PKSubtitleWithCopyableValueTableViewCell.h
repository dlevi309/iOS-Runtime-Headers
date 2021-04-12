/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKTableViewCellWithSubtitleStyle.h>

@class UILongPressGestureRecognizer;

@interface PKSubtitleWithCopyableValueTableViewCell : PKTableViewCellWithSubtitleStyle {

	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _subtitleIsCopyable;

}

@property (assign,nonatomic) BOOL subtitleIsCopyable;              //@synthesize subtitleIsCopyable=_subtitleIsCopyable - In the implementation block
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)copy:(id)arg1 ;
-(id)_copyableText;
-(void)_handleLongPressGesture:(id)arg1 ;
-(void)_updateLongPressGestureRecognizer;
-(void)setSubtitleIsCopyable:(BOOL)arg1 ;
-(BOOL)subtitleIsCopyable;
@end

