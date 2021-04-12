/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextLinkInteraction;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITextItemInteractionInteraction, UIView;

@interface _UITextLinkInteractionSession : NSObject {

	UITextItemInteractionInteraction* _interaction;
	UIView*<UITextLinkInteraction> _linkInteractionView;

}
-(void)dealloc;
-(BOOL)tapOnLinkWithGesture:(id)arg1 ;
-(BOOL)_allowItemInteractions;
-(id)initWithTextItemInteraction:(id)arg1 ;
-(BOOL)canInteractWithLinkAtPoint:(CGPoint)arg1 ;
@end

